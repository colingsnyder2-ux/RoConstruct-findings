// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_fmod_error_native_2885bddfd71d07ce.cpp

// Candidate translation unit (score above; library headers required).
#include "../../../openrbx/3rdparty/fmod/api/inc/fmod_errors.h"
#include <G3D/format.h>
#include <util/standardout.h>
#include <stdexcept>
void checkResult(FMOD_RESULT result)
{
	if (result != FMOD_OK) {
		std::string message = G3D::format("FMOD %d: %s", result, FMOD_ErrorString(result));
		RBX::StandardOut::singleton()->print(RBX::MESSAGE_WARNING, message.c_str());
		throw std::runtime_error(message);
	}
}

