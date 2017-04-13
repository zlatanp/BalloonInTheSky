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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_CameraScript1663580776.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_Klik3186428507.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "UnityEngine_UI_UnityEngine_UI_Button2872111280.h"
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClicked2455055323.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent408735097.h"
#include "AssemblyU2DCSharp_MainScript3841592574.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_MenuScript1134262648.h"

// CameraScript
struct CameraScript_t1663580776;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// Klik
struct Klik_t3186428507;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t2455055323;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// MainScript
struct MainScript_t3841592574;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Object
struct Object_t1021602117;
// MenuScript
struct MenuScript_t1134262648;
extern Il2CppClass* UnityAction_t4025899511_il2cpp_TypeInfo_var;
extern const MethodInfo* Klik_KlikLevo_m2026266411_MethodInfo_var;
extern const MethodInfo* Klik_KlikDesno_m3060684908_MethodInfo_var;
extern const uint32_t Klik_Start_m124703174_MetadataUsageId;
extern const MethodInfo* MainScript_OkButtonPressed_m3923724691_MethodInfo_var;
extern const MethodInfo* MainScript_IzgubioPressed_m3900224666_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider2D_t646061738_m2950827934_MethodInfo_var;
extern const MethodInfo* MainScript_YesPressed_m1015185606_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral98356042;
extern Il2CppCodeGenString* _stringLiteral632571351;
extern Il2CppCodeGenString* _stringLiteral1535190682;
extern const uint32_t MainScript_Start_m3844089055_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3256496402;
extern Il2CppCodeGenString* _stringLiteral3835580405;
extern const uint32_t MainScript_Update_m1876040940_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral164794630;
extern const uint32_t MainScript_OnTriggerEnter2D_m1943948727_MetadataUsageId;
extern const MethodInfo* MenuScript_Quit_m3157130036_MethodInfo_var;
extern const MethodInfo* MenuScript_StartLevel_m413477741_MethodInfo_var;
extern const uint32_t MenuScript_Start_m3923385635_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t2455055323 * Button_get_onClick_m1595880935 (Button_t2872111280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m2649891629 (UnityAction_t4025899511 * __this, Il2CppObject * p0, IntPtr_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m1596810379 (UnityEvent_t408735097 * __this, UnityAction_t4025899511 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_Lerp_m2935648359 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2887581199 (GameObject_t1756533147 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
#define Component_GetComponent_TisCollider2D_t646061738_m2950827934(__this, method) ((  Collider2D_t646061738 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C"  void AudioSource_set_mute_m3645750033 (AudioSource_t1135106623 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m666563676 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m87258056 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraScript::.ctor()
extern "C"  void CameraScript__ctor_m4175037365 (CameraScript_t1663580776 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraScript::Start()
extern "C"  void CameraScript_Start_m608509429 (CameraScript_t1663580776 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider2D_t646061738 * L_0 = __this->get_igrac_2();
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		__this->set_x_3(L_3);
		return;
	}
}
// System.Void CameraScript::Update()
extern "C"  void CameraScript_Update_m1236151126 (CameraScript_t1663580776 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider2D_t646061738 * L_0 = __this->get_igrac_2();
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		if ((!(((float)L_3) < ((float)(118.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_5 = __this->get_x_3();
		Collider2D_t646061738 * L_6 = __this->get_igrac_2();
		NullCheck(L_6);
		Transform_t3275118058 * L_7 = Component_get_transform_m2697483695(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_y_2();
		Vector3_t2243707580  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m2638739322(&L_10, L_5, ((float)((float)L_9+(float)(3.0f))), (-1.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m2469242620(L_4, L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void Klik::.ctor()
extern "C"  void Klik__ctor_m78672602 (Klik_t3186428507 * __this, const MethodInfo* method)
{
	{
		__this->set_time_5((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Klik::Start()
extern "C"  void Klik_Start_m124703174 (Klik_t3186428507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Klik_Start_m124703174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t2872111280 * L_0 = __this->get_levo_2();
		NullCheck(L_0);
		ButtonClickedEvent_t2455055323 * L_1 = Button_get_onClick_m1595880935(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2;
		L_2.set_m_value_0((void*)(void*)Klik_KlikLevo_m2026266411_MethodInfo_var);
		UnityAction_t4025899511 * L_3 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m1596810379(L_1, L_3, /*hidden argument*/NULL);
		Button_t2872111280 * L_4 = __this->get_desno_3();
		NullCheck(L_4);
		ButtonClickedEvent_t2455055323 * L_5 = Button_get_onClick_m1595880935(L_4, /*hidden argument*/NULL);
		IntPtr_t L_6;
		L_6.set_m_value_0((void*)(void*)Klik_KlikDesno_m3060684908_MethodInfo_var);
		UnityAction_t4025899511 * L_7 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m1596810379(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Klik::Update()
extern "C"  void Klik_Update_m3177953795 (Klik_t3186428507 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Klik::KlikDesno()
extern "C"  void Klik_KlikDesno_m3060684908 (Klik_t3186428507 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Collider2D_t646061738 * L_0 = __this->get_igrac_4();
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		if ((!(((float)L_3) <= ((float)(1.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		Collider2D_t646061738 * L_4 = __this->get_igrac_4();
		NullCheck(L_4);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Collider2D_t646061738 * L_7 = __this->get_igrac_4();
		NullCheck(L_7);
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = (&V_3)->get_x_1();
		Collider2D_t646061738 * L_11 = __this->get_igrac_4();
		NullCheck(L_11);
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14 = (&V_4)->get_y_2();
		Collider2D_t646061738 * L_15 = __this->get_igrac_4();
		NullCheck(L_15);
		Transform_t3275118058 * L_16 = Component_get_transform_m2697483695(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t2243707580  L_17 = Transform_get_position_m1104419803(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		float L_18 = (&V_5)->get_z_3();
		Vector3__ctor_m2638739322((&V_2), ((float)((float)L_10+(float)(2.0f))), L_14, L_18, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_19 = __this->get_igrac_4();
		NullCheck(L_19);
		Transform_t3275118058 * L_20 = Component_get_transform_m2697483695(L_19, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = V_1;
		Vector3_t2243707580  L_22 = V_2;
		float L_23 = __this->get_time_5();
		Vector3_t2243707580  L_24 = Vector3_Lerp_m2935648359(NULL /*static, unused*/, L_21, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m2469242620(L_20, L_24, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void Klik::KlikLevo()
extern "C"  void Klik_KlikLevo_m2026266411 (Klik_t3186428507 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Collider2D_t646061738 * L_0 = __this->get_igrac_4();
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		if ((!(((float)L_3) >= ((float)(-1.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		Collider2D_t646061738 * L_4 = __this->get_igrac_4();
		NullCheck(L_4);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Collider2D_t646061738 * L_7 = __this->get_igrac_4();
		NullCheck(L_7);
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = (&V_3)->get_x_1();
		Collider2D_t646061738 * L_11 = __this->get_igrac_4();
		NullCheck(L_11);
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14 = (&V_4)->get_y_2();
		Collider2D_t646061738 * L_15 = __this->get_igrac_4();
		NullCheck(L_15);
		Transform_t3275118058 * L_16 = Component_get_transform_m2697483695(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t2243707580  L_17 = Transform_get_position_m1104419803(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		float L_18 = (&V_5)->get_z_3();
		Vector3__ctor_m2638739322((&V_2), ((float)((float)L_10-(float)(2.0f))), L_14, L_18, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_19 = __this->get_igrac_4();
		NullCheck(L_19);
		Transform_t3275118058 * L_20 = Component_get_transform_m2697483695(L_19, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = V_1;
		Vector3_t2243707580  L_22 = V_2;
		float L_23 = __this->get_time_5();
		Vector3_t2243707580  L_24 = Vector3_Lerp_m2935648359(NULL /*static, unused*/, L_21, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m2469242620(L_20, L_24, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void MainScript::.ctor()
extern "C"  void MainScript__ctor_m4056246251 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	{
		__this->set_time_20((0.001f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainScript::Start()
extern "C"  void MainScript_Start_m3844089055 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainScript_Start_m3844089055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral98356042, /*hidden argument*/NULL);
		__this->set_okpanel_15(L_0);
		GameObject_t1756533147 * L_1 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral632571351, /*hidden argument*/NULL);
		__this->set_loosepanel_16(L_1);
		GameObject_t1756533147 * L_2 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1535190682, /*hidden argument*/NULL);
		__this->set_pobediopanel_17(L_2);
		GameObject_t1756533147 * L_3 = __this->get_loosepanel_16();
		NullCheck(L_3);
		GameObject_SetActive_m2887581199(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = __this->get_pobediopanel_17();
		NullCheck(L_4);
		GameObject_SetActive_m2887581199(L_4, (bool)0, /*hidden argument*/NULL);
		Button_t2872111280 * L_5 = __this->get_ok_2();
		NullCheck(L_5);
		ButtonClickedEvent_t2455055323 * L_6 = Button_get_onClick_m1595880935(L_5, /*hidden argument*/NULL);
		IntPtr_t L_7;
		L_7.set_m_value_0((void*)(void*)MainScript_OkButtonPressed_m3923724691_MethodInfo_var);
		UnityAction_t4025899511 * L_8 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m1596810379(L_6, L_8, /*hidden argument*/NULL);
		Button_t2872111280 * L_9 = __this->get_izgubio_3();
		NullCheck(L_9);
		ButtonClickedEvent_t2455055323 * L_10 = Button_get_onClick_m1595880935(L_9, /*hidden argument*/NULL);
		IntPtr_t L_11;
		L_11.set_m_value_0((void*)(void*)MainScript_IzgubioPressed_m3900224666_MethodInfo_var);
		UnityAction_t4025899511 * L_12 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m1596810379(L_10, L_12, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_13 = Component_GetComponent_TisCollider2D_t646061738_m2950827934(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_t646061738_m2950827934_MethodInfo_var);
		__this->set_novcic_11(L_13);
		AudioSource_t1135106623 * L_14 = __this->get_novcicSnd_12();
		NullCheck(L_14);
		AudioSource_set_mute_m3645750033(L_14, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_15 = __this->get_youWin_13();
		NullCheck(L_15);
		AudioSource_set_mute_m3645750033(L_15, (bool)1, /*hidden argument*/NULL);
		Button_t2872111280 * L_16 = __this->get_yes_4();
		NullCheck(L_16);
		ButtonClickedEvent_t2455055323 * L_17 = Button_get_onClick_m1595880935(L_16, /*hidden argument*/NULL);
		IntPtr_t L_18;
		L_18.set_m_value_0((void*)(void*)MainScript_YesPressed_m1015185606_MethodInfo_var);
		UnityAction_t4025899511 * L_19 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_19, __this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m1596810379(L_17, L_19, /*hidden argument*/NULL);
		Button_t2872111280 * L_20 = __this->get_no_5();
		NullCheck(L_20);
		ButtonClickedEvent_t2455055323 * L_21 = Button_get_onClick_m1595880935(L_20, /*hidden argument*/NULL);
		IntPtr_t L_22;
		L_22.set_m_value_0((void*)(void*)MainScript_IzgubioPressed_m3900224666_MethodInfo_var);
		UnityAction_t4025899511 * L_23 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_23, __this, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		UnityEvent_AddListener_m1596810379(L_21, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainScript::Update()
extern "C"  void MainScript_Update_m1876040940 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainScript_Update_m1876040940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_okispressed_6();
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t1756533147 * L_1 = __this->get_okpanel_15();
		NullCheck(L_1);
		GameObject_SetActive_m2887581199(L_1, (bool)0, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_2 = __this->get_igrac_8();
		NullCheck(L_2);
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(L_2, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_6 = __this->get_finis_9();
		NullCheck(L_6);
		Transform_t3275118058 * L_7 = Component_get_transform_m2697483695(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_time_20();
		Vector3_t2243707580  L_10 = Vector3_Lerp_m2935648359(NULL /*static, unused*/, L_5, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m2469242620(L_3, L_10, /*hidden argument*/NULL);
		float L_11 = __this->get_time_20();
		__this->set_time_20(((float)((float)L_11+(float)(1.0E-06f))));
		Text_t356221433 * L_12 = __this->get_pointsText_18();
		int32_t L_13 = __this->get_poeni_19();
		int32_t L_14 = L_13;
		Il2CppObject * L_15 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3256496402, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
	}

IL_007f:
	{
		Collider2D_t646061738 * L_17 = __this->get_igrac_8();
		NullCheck(L_17);
		Transform_t3275118058 * L_18 = Component_get_transform_m2697483695(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t2243707580  L_19 = Transform_get_position_m1104419803(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		float L_20 = (&V_0)->get_y_2();
		if ((!(((float)L_20) > ((float)(120.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		AudioSource_t1135106623 * L_21 = __this->get_main_14();
		NullCheck(L_21);
		AudioSource_set_mute_m3645750033(L_21, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_22 = __this->get_youWin_13();
		NullCheck(L_22);
		AudioSource_set_mute_m3645750033(L_22, (bool)0, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_23 = __this->get_youWin_13();
		NullCheck(L_23);
		AudioSource_Play_m353744792(L_23, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral3835580405, (3.0f), /*hidden argument*/NULL);
		__this->set_okispressed_6((bool)0);
	}

IL_00db:
	{
		return;
	}
}
// System.Void MainScript::EndLevel()
extern "C"  void MainScript_EndLevel_m3536927876 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_poeni_19();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t1756533147 * L_1 = __this->get_pobediopanel_17();
		NullCheck(L_1);
		GameObject_SetActive_m2887581199(L_1, (bool)1, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_001e:
	{
		GameObject_t1756533147 * L_2 = __this->get_loosepanel_16();
		NullCheck(L_2);
		GameObject_SetActive_m2887581199(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void MainScript::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void MainScript_OnTriggerEnter2D_m1943948727 (MainScript_t3841592574 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainScript_OnTriggerEnter2D_m1943948727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m357168014(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral164794630, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		AudioSource_t1135106623 * L_3 = __this->get_novcicSnd_12();
		NullCheck(L_3);
		AudioSource_set_mute_m3645750033(L_3, (bool)0, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_4 = __this->get_novcicSnd_12();
		NullCheck(L_4);
		AudioSource_Play_m353744792(L_4, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_5 = ___other0;
		__this->set_novcic_11(L_5);
		Collider2D_t646061738 * L_6 = __this->get_novcic_11();
		NullCheck(L_6);
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_poeni_19();
		__this->set_poeni_19(((int32_t)((int32_t)L_8+(int32_t)1)));
	}

IL_0051:
	{
		return;
	}
}
// System.Void MainScript::OkButtonPressed()
extern "C"  void MainScript_OkButtonPressed_m3923724691 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	{
		__this->set_okispressed_6((bool)1);
		return;
	}
}
// System.Void MainScript::IzgubioPressed()
extern "C"  void MainScript_IzgubioPressed_m3900224666 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainScript::YesPressed()
extern "C"  void MainScript_YesPressed_m1015185606 (MainScript_t3841592574 * __this, const MethodInfo* method)
{
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuScript::.ctor()
extern "C"  void MenuScript__ctor_m1194384423 (MenuScript_t1134262648 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuScript::Start()
extern "C"  void MenuScript_Start_m3923385635 (MenuScript_t1134262648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuScript_Start_m3923385635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t2872111280 * L_0 = __this->get_quitb_3();
		NullCheck(L_0);
		ButtonClickedEvent_t2455055323 * L_1 = Button_get_onClick_m1595880935(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2;
		L_2.set_m_value_0((void*)(void*)MenuScript_Quit_m3157130036_MethodInfo_var);
		UnityAction_t4025899511 * L_3 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m1596810379(L_1, L_3, /*hidden argument*/NULL);
		Button_t2872111280 * L_4 = __this->get_startb_2();
		NullCheck(L_4);
		ButtonClickedEvent_t2455055323 * L_5 = Button_get_onClick_m1595880935(L_4, /*hidden argument*/NULL);
		IntPtr_t L_6;
		L_6.set_m_value_0((void*)(void*)MenuScript_StartLevel_m413477741_MethodInfo_var);
		UnityAction_t4025899511 * L_7 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m1596810379(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuScript::Update()
extern "C"  void MenuScript_Update_m2405570102 (MenuScript_t1134262648 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MenuScript::Quit()
extern "C"  void MenuScript_Quit_m3157130036 (MenuScript_t1134262648 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuScript::StartLevel()
extern "C"  void MenuScript_StartLevel_m413477741 (MenuScript_t1134262648 * __this, const MethodInfo* method)
{
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
