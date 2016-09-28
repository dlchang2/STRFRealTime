#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// TextChanger
struct TextChanger_t1566875829;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextChanger1566875829.h"
#include "AssemblyU2DCSharp_TextChanger1566875829MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Resources1543782994MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextAsset2461560304MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "mscorlib_System_Single958209021MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "UnityEngine_UnityEngine_TextAsset2461560304.h"
#include "mscorlib_System_Char2778706699.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color1588175760MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m441016515_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m441016515(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(__this, method) ((  Renderer_t1092684080 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextChanger::.ctor()
extern "C"  void TextChanger__ctor_m1692915286 (TextChanger_t1566875829 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextChanger::Start()
extern Il2CppClass* GameObjectU5BU5D_t3499186955_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var;
extern Il2CppClass* TextAsset_t2461560304_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t4012695102_il2cpp_TypeInfo_var;
extern Il2CppClass* SingleU5BU5D_t1219431280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1730108543;
extern Il2CppCodeGenString* _stringLiteral432425035;
extern Il2CppCodeGenString* _stringLiteral647586976;
extern const uint32_t TextChanger_Start_m640053078_MetadataUsageId;
extern "C"  void TextChanger_Start_m640053078 (TextChanger_t1566875829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextChanger_Start_m640053078_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t2956870243* V_1 = NULL;
	StringU5BU5D_t2956870243* V_2 = NULL;
	StringU5BU5D_t2956870243* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t2956870243* V_5 = NULL;
	{
		__this->set_allElecs_5(((GameObjectU5BU5D_t3499186955*)SZArrayNew(GameObjectU5BU5D_t3499186955_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256))));
		__this->set_phonemeSelectivity_8(((Int32U5BU5D_t1809983122*)SZArrayNew(Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256))));
		__this->set_sigElecs_9(((Int32U5BU5D_t1809983122*)SZArrayNew(Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256))));
		Object_t3878351788 * L_0 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral1730108543, /*hidden argument*/NULL);
		String_t* L_1 = TextAsset_get_text_m655578209(((TextAsset_t2461560304 *)IsInstClass(L_0, TextAsset_t2461560304_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t3878351788 * L_2 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral432425035, /*hidden argument*/NULL);
		String_t* L_3 = TextAsset_get_text_m655578209(((TextAsset_t2461560304 *)IsInstClass(L_2, TextAsset_t2461560304_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		CharU5BU5D_t3416858730* L_4 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)32));
		StringU5BU5D_t2956870243* L_5 = String_Split_m290179486(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = V_0;
		CharU5BU5D_t3416858730* L_7 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)10));
		StringU5BU5D_t2956870243* L_8 = String_Split_m290179486(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Object_t3878351788 * L_9 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral647586976, /*hidden argument*/NULL);
		String_t* L_10 = TextAsset_get_text_m655578209(((TextAsset_t2461560304 *)IsInstClass(L_9, TextAsset_t2461560304_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		CharU5BU5D_t3416858730* L_11 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)10));
		StringU5BU5D_t2956870243* L_12 = String_Split_m290179486(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		V_4 = 0;
		goto IL_0148;
	}

IL_00a9:
	{
		StringU5BU5D_t2956870243* L_13 = V_2;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		CharU5BU5D_t3416858730* L_16 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)32));
		StringU5BU5D_t2956870243* L_17 = String_Split_m290179486(((L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15))), L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		StringU5BU5D_t2956870243* L_18 = V_5;
		int32_t L_19 = 4;
		float L_20 = Single_Parse_m3022284664(NULL /*static, unused*/, ((L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19))), /*hidden argument*/NULL);
		StringU5BU5D_t2956870243* L_21 = V_5;
		int32_t L_22 = 5;
		float L_23 = Single_Parse_m3022284664(NULL /*static, unused*/, ((L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22))), /*hidden argument*/NULL);
		StringU5BU5D_t2956870243* L_24 = V_5;
		int32_t L_25 = 6;
		float L_26 = Single_Parse_m3022284664(NULL /*static, unused*/, ((L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m2926210380(&L_27, ((float)((float)(-1.0f)*(float)L_20)), L_23, L_26, /*hidden argument*/NULL);
		__this->set_pos_3(L_27);
		Int32U5BU5D_t1809983122* L_28 = __this->get_phonemeSelectivity_8();
		int32_t L_29 = V_4;
		StringU5BU5D_t2956870243* L_30 = V_1;
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		int32_t L_33 = Int32_Parse_m3837759498(NULL /*static, unused*/, ((L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32))), /*hidden argument*/NULL);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (int32_t)L_33);
		Int32U5BU5D_t1809983122* L_34 = __this->get_sigElecs_9();
		int32_t L_35 = V_4;
		StringU5BU5D_t2956870243* L_36 = V_3;
		int32_t L_37 = V_4;
		int32_t L_38 = L_37;
		int32_t L_39 = Int32_Parse_m3837759498(NULL /*static, unused*/, ((L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38))), /*hidden argument*/NULL);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (int32_t)L_39);
		Int32U5BU5D_t1809983122* L_40 = __this->get_sigElecs_9();
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		if ((!(((uint32_t)((L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42)))) == ((uint32_t)1))))
		{
			goto IL_0142;
		}
	}
	{
		GameObjectU5BU5D_t3499186955* L_43 = __this->get_allElecs_5();
		int32_t L_44 = V_4;
		GameObject_t4012695102 * L_45 = __this->get_prefab_4();
		Vector3_t3525329789  L_46 = __this->get_pos_3();
		Quaternion_t1891715979  L_47 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t3878351788 * L_48 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_45, L_46, L_47, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_43, ((GameObject_t4012695102 *)CastclassSealed(L_48, GameObject_t4012695102_il2cpp_TypeInfo_var)));
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (GameObject_t4012695102 *)((GameObject_t4012695102 *)CastclassSealed(L_48, GameObject_t4012695102_il2cpp_TypeInfo_var)));
	}

IL_0142:
	{
		int32_t L_49 = V_4;
		V_4 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_0148:
	{
		int32_t L_50 = V_4;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)256))))
		{
			goto IL_00a9;
		}
	}
	{
		__this->set_erps_2(((SingleU5BU5D_t1219431280*)SZArrayNew(SingleU5BU5D_t1219431280_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256))));
		return;
	}
}
// System.Void TextChanger::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern Il2CppCodeGenString* _stringLiteral2785059396;
extern const uint32_t TextChanger_Update_m2667628407_MetadataUsageId;
extern "C"  void TextChanger_Update_m2667628407 (TextChanger_t1566875829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextChanger_Update_m2667628407_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		Vector3_t3525329789  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2926210380(&L_4, (0.0f), L_3, (-5.0f), /*hidden argument*/NULL);
		__this->set_realPosition_7(L_4);
		Transform_t284553113 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_6 = __this->get_realPosition_7();
		Transform_LookAt_m724138832(L_5, L_6, /*hidden argument*/NULL);
		Transform_t284553113 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_8 = __this->get_realPosition_7();
		Vector3_t3525329789  L_9 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_10 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_7, L_8, L_9, ((float)((float)L_10*(float)(20.0f))), /*hidden argument*/NULL);
	}

IL_006a:
	{
		TextChanger_updateErpString_m3471870367(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_02a8;
	}

IL_0076:
	{
		Int32U5BU5D_t1809983122* L_11 = __this->get_sigElecs_9();
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		if ((!(((uint32_t)((L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13)))) == ((uint32_t)1))))
		{
			goto IL_02a4;
		}
	}
	{
		Vector3_t3525329789 * L_14 = __this->get_address_of_scaleFactor_10();
		SingleU5BU5D_t1219431280* L_15 = __this->get_erps_2();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		L_14->set_x_1(((float)((float)(0.1f)*(float)((L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17))))));
		Vector3_t3525329789 * L_18 = __this->get_address_of_scaleFactor_10();
		SingleU5BU5D_t1219431280* L_19 = __this->get_erps_2();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		L_18->set_y_2(((float)((float)(0.1f)*(float)((L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21))))));
		Vector3_t3525329789 * L_22 = __this->get_address_of_scaleFactor_10();
		SingleU5BU5D_t1219431280* L_23 = __this->get_erps_2();
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		L_22->set_z_3(((float)((float)(0.1f)*(float)((L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25))))));
		GameObjectU5BU5D_t3499186955* L_26 = __this->get_allElecs_5();
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		Transform_t284553113 * L_29 = GameObject_get_transform_m1278640159(((L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_30 = __this->get_scaleFactor_10();
		Transform_set_localScale_m310756934(L_29, L_30, /*hidden argument*/NULL);
		Int32U5BU5D_t1809983122* L_31 = __this->get_phonemeSelectivity_8();
		int32_t L_32 = V_0;
		int32_t L_33 = L_32;
		V_2 = ((L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_34 = V_2;
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 0)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 1)
		{
			goto IL_015c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 2)
		{
			goto IL_01a3;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 3)
		{
			goto IL_01ea;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 4)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 5)
		{
			goto IL_0266;
		}
	}
	{
		goto IL_02a4;
	}

IL_0115:
	{
		GameObjectU5BU5D_t3499186955* L_35 = __this->get_allElecs_5();
		int32_t L_36 = V_0;
		int32_t L_37 = L_36;
		Renderer_t1092684080 * L_38 = GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(((L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37))), /*hidden argument*/GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var);
		Material_t1886596500 * L_39 = Renderer_get_material_m2720864603(L_38, /*hidden argument*/NULL);
		SingleU5BU5D_t1219431280* L_40 = __this->get_erps_2();
		int32_t L_41 = V_0;
		int32_t L_42 = L_41;
		SingleU5BU5D_t1219431280* L_43 = __this->get_erps_2();
		int32_t L_44 = V_0;
		int32_t L_45 = L_44;
		Color_t1588175760  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Color__ctor_m103496991(&L_46, (1.0f), ((float)((float)(1.0f)-(float)((L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42))))), ((float)((float)(1.0f)-(float)((L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45))))), /*hidden argument*/NULL);
		Material_SetColor_m1918430019(L_39, _stringLiteral2785059396, L_46, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_015c:
	{
		GameObjectU5BU5D_t3499186955* L_47 = __this->get_allElecs_5();
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		Renderer_t1092684080 * L_50 = GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(((L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49))), /*hidden argument*/GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var);
		Material_t1886596500 * L_51 = Renderer_get_material_m2720864603(L_50, /*hidden argument*/NULL);
		SingleU5BU5D_t1219431280* L_52 = __this->get_erps_2();
		int32_t L_53 = V_0;
		int32_t L_54 = L_53;
		SingleU5BU5D_t1219431280* L_55 = __this->get_erps_2();
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		Color_t1588175760  L_58;
		memset(&L_58, 0, sizeof(L_58));
		Color__ctor_m103496991(&L_58, ((float)((float)(1.0f)-(float)((L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54))))), ((float)((float)(1.0f)-(float)((L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57))))), (1.0f), /*hidden argument*/NULL);
		Material_SetColor_m1918430019(L_51, _stringLiteral2785059396, L_58, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_01a3:
	{
		GameObjectU5BU5D_t3499186955* L_59 = __this->get_allElecs_5();
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		Renderer_t1092684080 * L_62 = GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(((L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61))), /*hidden argument*/GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var);
		Material_t1886596500 * L_63 = Renderer_get_material_m2720864603(L_62, /*hidden argument*/NULL);
		SingleU5BU5D_t1219431280* L_64 = __this->get_erps_2();
		int32_t L_65 = V_0;
		int32_t L_66 = L_65;
		SingleU5BU5D_t1219431280* L_67 = __this->get_erps_2();
		int32_t L_68 = V_0;
		int32_t L_69 = L_68;
		Color_t1588175760  L_70;
		memset(&L_70, 0, sizeof(L_70));
		Color__ctor_m103496991(&L_70, ((float)((float)(1.0f)-(float)((L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66))))), (1.0f), ((float)((float)(1.0f)-(float)((L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69))))), /*hidden argument*/NULL);
		Material_SetColor_m1918430019(L_63, _stringLiteral2785059396, L_70, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_01ea:
	{
		GameObjectU5BU5D_t3499186955* L_71 = __this->get_allElecs_5();
		int32_t L_72 = V_0;
		int32_t L_73 = L_72;
		Renderer_t1092684080 * L_74 = GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(((L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73))), /*hidden argument*/GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var);
		Material_t1886596500 * L_75 = Renderer_get_material_m2720864603(L_74, /*hidden argument*/NULL);
		SingleU5BU5D_t1219431280* L_76 = __this->get_erps_2();
		int32_t L_77 = V_0;
		int32_t L_78 = L_77;
		Color_t1588175760  L_79;
		memset(&L_79, 0, sizeof(L_79));
		Color__ctor_m103496991(&L_79, (1.0f), ((float)((float)(1.0f)-(float)((L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78))))), (1.0f), /*hidden argument*/NULL);
		Material_SetColor_m1918430019(L_75, _stringLiteral2785059396, L_79, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_0228:
	{
		GameObjectU5BU5D_t3499186955* L_80 = __this->get_allElecs_5();
		int32_t L_81 = V_0;
		int32_t L_82 = L_81;
		Renderer_t1092684080 * L_83 = GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(((L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82))), /*hidden argument*/GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var);
		Material_t1886596500 * L_84 = Renderer_get_material_m2720864603(L_83, /*hidden argument*/NULL);
		SingleU5BU5D_t1219431280* L_85 = __this->get_erps_2();
		int32_t L_86 = V_0;
		int32_t L_87 = L_86;
		Color_t1588175760  L_88;
		memset(&L_88, 0, sizeof(L_88));
		Color__ctor_m103496991(&L_88, (1.0f), (1.0f), ((float)((float)(1.0f)-(float)((L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87))))), /*hidden argument*/NULL);
		Material_SetColor_m1918430019(L_84, _stringLiteral2785059396, L_88, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_0266:
	{
		GameObjectU5BU5D_t3499186955* L_89 = __this->get_allElecs_5();
		int32_t L_90 = V_0;
		int32_t L_91 = L_90;
		Renderer_t1092684080 * L_92 = GameObject_GetComponent_TisRenderer_t1092684080_m4102086307(((L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91))), /*hidden argument*/GameObject_GetComponent_TisRenderer_t1092684080_m4102086307_MethodInfo_var);
		Material_t1886596500 * L_93 = Renderer_get_material_m2720864603(L_92, /*hidden argument*/NULL);
		SingleU5BU5D_t1219431280* L_94 = __this->get_erps_2();
		int32_t L_95 = V_0;
		int32_t L_96 = L_95;
		Color_t1588175760  L_97;
		memset(&L_97, 0, sizeof(L_97));
		Color__ctor_m103496991(&L_97, ((float)((float)(1.0f)-(float)((L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96))))), (1.0f), (1.0f), /*hidden argument*/NULL);
		Material_SetColor_m1918430019(L_93, _stringLiteral2785059396, L_97, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_02a4:
	{
		int32_t L_98 = V_0;
		V_0 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_02a8:
	{
		int32_t L_99 = V_0;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)256))))
		{
			goto IL_0076;
		}
	}
	{
		return;
	}
}
// System.Void TextChanger::changeDropdown(System.Int32)
extern "C"  void TextChanger_changeDropdown_m2894772800 (TextChanger_t1566875829 * __this, int32_t ___i0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TextChanger::erpUpdate(System.String)
extern Il2CppClass* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern const uint32_t TextChanger_erpUpdate_m988285922_MetadataUsageId;
extern "C"  void TextChanger_erpUpdate_m988285922 (TextChanger_t1566875829 * __this, String_t* ___s0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextChanger_erpUpdate_m988285922_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		CharU5BU5D_t3416858730* L_1 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)44));
		StringU5BU5D_t2956870243* L_2 = String_Split_m290179486(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002d;
	}

IL_0019:
	{
		SingleU5BU5D_t1219431280* L_3 = __this->get_erps_2();
		int32_t L_4 = V_1;
		StringU5BU5D_t2956870243* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		float L_8 = Single_Parse_m3022284664(NULL /*static, unused*/, ((L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (float)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)256))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Void TextChanger::updateErpString()
extern "C" void DEFAULT_CALL updateErpString();
extern "C"  void TextChanger_updateErpString_m3471870367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(updateErpString)();

}
// System.Void TextChanger::debugPrint(System.String)
extern "C" void DEFAULT_CALL debugPrint(char*);
extern "C"  void TextChanger_debugPrint_m3227264026 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___s0' to native representation
	char* ____s0_marshaled = NULL;
	____s0_marshaled = il2cpp_codegen_marshal_string(___s0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(debugPrint)(____s0_marshaled);

	// Marshaling cleanup of parameter '___s0' native representation
	il2cpp_codegen_marshal_free(____s0_marshaled);
	____s0_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
