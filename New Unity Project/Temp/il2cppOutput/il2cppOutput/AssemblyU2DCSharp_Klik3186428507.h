#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.Collider2D
struct Collider2D_t646061738;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Klik
struct  Klik_t3186428507  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button Klik::levo
	Button_t2872111280 * ___levo_2;
	// UnityEngine.UI.Button Klik::desno
	Button_t2872111280 * ___desno_3;
	// UnityEngine.Collider2D Klik::igrac
	Collider2D_t646061738 * ___igrac_4;
	// System.Single Klik::time
	float ___time_5;
	// System.Single Klik::x
	float ___x_6;

public:
	inline static int32_t get_offset_of_levo_2() { return static_cast<int32_t>(offsetof(Klik_t3186428507, ___levo_2)); }
	inline Button_t2872111280 * get_levo_2() const { return ___levo_2; }
	inline Button_t2872111280 ** get_address_of_levo_2() { return &___levo_2; }
	inline void set_levo_2(Button_t2872111280 * value)
	{
		___levo_2 = value;
		Il2CppCodeGenWriteBarrier(&___levo_2, value);
	}

	inline static int32_t get_offset_of_desno_3() { return static_cast<int32_t>(offsetof(Klik_t3186428507, ___desno_3)); }
	inline Button_t2872111280 * get_desno_3() const { return ___desno_3; }
	inline Button_t2872111280 ** get_address_of_desno_3() { return &___desno_3; }
	inline void set_desno_3(Button_t2872111280 * value)
	{
		___desno_3 = value;
		Il2CppCodeGenWriteBarrier(&___desno_3, value);
	}

	inline static int32_t get_offset_of_igrac_4() { return static_cast<int32_t>(offsetof(Klik_t3186428507, ___igrac_4)); }
	inline Collider2D_t646061738 * get_igrac_4() const { return ___igrac_4; }
	inline Collider2D_t646061738 ** get_address_of_igrac_4() { return &___igrac_4; }
	inline void set_igrac_4(Collider2D_t646061738 * value)
	{
		___igrac_4 = value;
		Il2CppCodeGenWriteBarrier(&___igrac_4, value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(Klik_t3186428507, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_x_6() { return static_cast<int32_t>(offsetof(Klik_t3186428507, ___x_6)); }
	inline float get_x_6() const { return ___x_6; }
	inline float* get_address_of_x_6() { return &___x_6; }
	inline void set_x_6(float value)
	{
		___x_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
