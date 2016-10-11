var MyPlugin = {
	updateErpString: function(){
		s = gridResponse.toString();
		SendMessage("Main Camera","erpUpdate",s);
	},
	debugPrint: function(s){
		console.log(s);
	},
};

mergeInto(LibraryManager.library, MyPlugin);