struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

}

void RegisterAllClasses()
{
	//Total: 49 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//6. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//7. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//8. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//9. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//10. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//11. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//12. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//13. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//14. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//15. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//18. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//19. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//20. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//21. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//22. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//23. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//24. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//25. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//26. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//27. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//28. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//29. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//30. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//31. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//32. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//33. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//34. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//35. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//36. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//37. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//38. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//39. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//40. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//41. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//42. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//43. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//44. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//45. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//48. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
