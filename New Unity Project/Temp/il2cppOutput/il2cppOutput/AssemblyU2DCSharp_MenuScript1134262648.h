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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuScript
struct  MenuScript_t1134262648  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button MenuScript::startb
	Button_t2872111280 * ___startb_2;
	// UnityEngine.UI.Button MenuScript::quitb
	Button_t2872111280 * ___quitb_3;

public:
	inline static int32_t get_offset_of_startb_2() { return static_cast<int32_t>(offsetof(MenuScript_t1134262648, ___startb_2)); }
	inline Button_t2872111280 * get_startb_2() const { return ___startb_2; }
	inline Button_t2872111280 ** get_address_of_startb_2() { return &___startb_2; }
	inline void set_startb_2(Button_t2872111280 * value)
	{
		___startb_2 = value;
		Il2CppCodeGenWriteBarrier(&___startb_2, value);
	}

	inline static int32_t get_offset_of_quitb_3() { return static_cast<int32_t>(offsetof(MenuScript_t1134262648, ___quitb_3)); }
	inline Button_t2872111280 * get_quitb_3() const { return ___quitb_3; }
	inline Button_t2872111280 ** get_address_of_quitb_3() { return &___quitb_3; }
	inline void set_quitb_3(Button_t2872111280 * value)
	{
		___quitb_3 = value;
		Il2CppCodeGenWriteBarrier(&___quitb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
