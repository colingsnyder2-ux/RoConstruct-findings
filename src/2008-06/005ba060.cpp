// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_fmod_open_native_99f5a9bdfe488277.cpp

// Candidate translation unit (score above; library headers required).
#include "util/Sound.h"
#include "util/StandardOut.h"
#include "v8datamodel/GameSettings.h"
#include "../../../openrbx/3rdparty/fmod/api/inc/fmod.hpp"
#include "../../../openrbx/3rdparty/fmod/api/inc/fmod_errors.h"
#include <stdexcept>

void checkResult(FMOD_RESULT result);

namespace FFlag { extern bool SoundDisabled; }

namespace RBX { namespace Soundscape {

void SoundService::openFmod()
{
	if (!FFlag::SoundDisabled && !mySoundDisabled && GameSettings::singleton().soundEnabled)
	{
		checkResult(FMOD::System_Create(&system));
		checkResult(system->getVersion(&fmod_version));
		if (fmod_version < 0x00041406)
			throw std::runtime_error("Incorrect FMODEX DLL version");

		int driver = -1;
		checkResult(system->getDriver(&driver));
		if (driver < 0)
			StandardOut::singleton()->print(MESSAGE_WARNING, "No active sound driver detected");

		unsigned caps;
		FMOD_SPEAKERMODE speakerMode;
		checkResult(system->getDriverCaps(0, &caps, 0, 0, &speakerMode));
		checkResult(system->setSpeakerMode(speakerMode));
		if (caps & FMOD_CAPS_HARDWARE_EMULATED)
		{
			StandardOut::singleton()->print(MESSAGE_WARNING, "The acceleration slider in the Sound Control Panel set to 'off'");
			checkResult(system->setDSPBufferSize(1024, 10));
		}

		if (system->init(100, FMOD_INIT_NORMAL, 0) == FMOD_ERR_OUTPUT_CREATEBUFFER)
		{
			StandardOut::singleton()->print(MESSAGE_WARNING, "The speaker mode selected isn't supported by this soundcard.  Using Stereo");
			checkResult(system->setSpeakerMode(FMOD_SPEAKERMODE_STEREO));
			checkResult(system->init(100, FMOD_INIT_NORMAL, 0));
		}

		update3DSettings();
		if (ambientReverb != NoReverb)
			updateAmbientReverb();
	}
}

} }
