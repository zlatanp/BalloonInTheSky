#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Collider2D
struct Collider2D_t646061738;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraScript
struct  CameraScript_t1663580776  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Collider2D CameraScript::igrac
	Collider2D_t646061738 * ___igrac_2;
	// System.Single CameraScript::x
	float ___x_3;

public:
	inline static int32_t get_offset_of_igrac_2() { return static_cast<int32_t>(offsetof(CameraScript_t1663580776, ___igrac_2)); }
	inline Collider2D_t646061738 * get_igrac_2() const { return ___igrac_2; }
	inline Collider2D_t646061738 ** get_address_of_igrac_2() { return &___igrac_2; }
	inline void set_igrac_2(Collider2D_t646061738 * value)
	{
		___igrac_2 = value;
		Il2CppCodeGenWriteBarrier(&___igrac_2, value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraScript_t1663580776, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
