load ~/Downloads/EC36_strfs_for_web_nfft1024_fixed
load ~/Downloads/EC36_feat_PSI_forvis
sig_elecs = dlmread('~/Unity/STRFRealTime/Assets/Resources/sig_elecs.txt');
sig_elecs = find(sig_elecs==1);

strfmat = strfmat(1:185,:,:);
nan_indices = find(isnan(strfmat));
strfmat(nan_indices) = 0;
all_elecs = 1:256;
non_sig_elecs = setdiff(all_elecs,sig_elecs);
strfmat(:,:,non_sig_elecs) = 0;

%normalize to 1
%for i=1:41                                                            
%strfmat(:,:,sig_elecs(i))= strfmat(:,:,sig_elecs(i))/mean(mean(strfmat(:,:,sig_elecs(i)),1),2); 
%end
freqs = [];times=[];
%use discriminability
for i=1:185                                          
for j=1:37                                           
result = anova1(strfmat(i,j,:),feat_PSI_max,'off')  ;
if result <0.01                                      
freqs = [freqs i]; times = [times j];                
end
end
end
size(freqs)

result = zeros(numel(strfmat),1);

for c=1:256
	for f=1:length(freqs)
		result((c-1)+256*(times(f)-1)+9472*(freqs(f)-1)+1) = strfmat(freqs(f),times(f),c);
end
end

fid = fopen('STRFmatScaled.bin','w');
fwrite(fid,result,'float32');
fclose(fid);

