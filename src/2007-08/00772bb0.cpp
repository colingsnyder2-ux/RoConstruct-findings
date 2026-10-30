// from server: 99% by tajop
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_sndprop_ff8be73eef7d40e4.cpp

// Candidate translation unit (score above; library headers required).
#define private public
#include "util/Sound.h"
#undef private

namespace RBX
{
	namespace Soundscape
	{
		static Reflection::BoundProp<float, 1> prop_DopplerScale("DopplerScale", "Data", &SoundService::dopplerscale, &SoundService::on3DSettingChanged, Reflection::PropertyDescriptor::STANDARD);
		static Reflection::BoundProp<float, 1> prop_DistanceFactor("DistanceFactor", "Data", &SoundService::distancefactor, &SoundService::on3DSettingChanged, Reflection::PropertyDescriptor::STANDARD);
		static Reflection::BoundProp<float, 1> prop_RolloffScale("RolloffScale", "Data", &SoundService::rolloffscale, &SoundService::on3DSettingChanged, Reflection::PropertyDescriptor::STANDARD);
	}
}
