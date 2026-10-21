// from server: 88% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_effectsnativearraysort03ddb657438ac3db.cpp

// Candidate translation unit (score above; library headers required).
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <algorithm>
#include <math.h>
#include <intrin.h>

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
extern void __cdecl sub_6a067a(void*);

#include <GLG3D/LightingParameters.h>
#include <GLG3D/ToneMap.h>
#include <GLG3D/glcalls.h>
bool brighter(const G3D::GLight& A, const G3D::GLight& B);

namespace RBX {
namespace Render {

class EffectSettings
{
private:
    bool _stencilShadows;
    bool _alphaBlendShadowLights;
    bool _useAllLightsInUnshadowedPass;
    bool _skyBox;
    bool _toneMap;
    bool _hemisphereLighting;
    bool _depthBlur;
    float _farCullZ;
    float _groundLOD;
    float _LODShift;

public:
    static G3D::ToneMap* getToneMap();

    G3D::ReferenceCountedPointer<G3D::Lighting> update(
        float shadingDetail,
        float meshDetail,
        bool shadows,
        float cameraDistanceFromCharacters,
        const G3D::ReferenceCountedPointer<G3D::Lighting>& desiredLighting,
        const G3D::LightingParameters& desiredSkyParameters,
        G3D::LightingParameters& outSkyParameters);
};

G3D::ReferenceCountedPointer<G3D::Lighting> EffectSettings::update(
    float shadingDetail,
    float meshDetail,
    bool shadows,
    float cameraDistanceFromCharacters,
    const G3D::ReferenceCountedPointer<G3D::Lighting>& desiredLighting,
    const G3D::LightingParameters& desiredSkyParameters,
    G3D::LightingParameters& outSkyParameters)
{
    int lightCount = desiredLighting->lightArray.size();
    int numShadowLights =
        desiredLighting->shadowedLightArray.size() >= 8 ? 8 : desiredLighting->shadowedLightArray.size();
    int maxLights = G3D::glGetInteger(0xd31) - 3;
    int numNonShadowLights = lightCount >= maxLights ? maxLights : lightCount;
    numNonShadowLights = numNonShadowLights > 0 ? numNonShadowLights : 0;

    _groundLOD = 1.0f;
    _LODShift = 0.0f;
    _skyBox = false;
    _alphaBlendShadowLights = true;
    _stencilShadows = false;
    _useAllLightsInUnshadowedPass = false;
    _toneMap = false;
    _hemisphereLighting = false;
    _depthBlur = false;
    _farCullZ = -G3D::inf();

    G3D::ReferenceCountedPointer<G3D::Lighting> lighting = G3D::Lighting::create();
    *lighting = *desiredLighting;

    G3D::glGetInteger(0xd57);

    if (shadingDetail >= 10) {
        _skyBox = true;
    }

    _groundLOD = meshDetail * 0.01f;

    if (shadingDetail >= 30.0f) {
        _hemisphereLighting = true;
    }

    _LODShift = meshDetail * 0.02f - 1.0f;

    if (shadows && numShadowLights > 0) {
        _stencilShadows = true;
        numShadowLights = 1;

        if (numNonShadowLights == 0) {
            _alphaBlendShadowLights = false;
        }
    }

    lighting->shadowedLightArray.sort(brighter);

    int excessShadowLights = lighting->shadowedLightArray.size() - numShadowLights;

    if (excessShadowLights > 0) {
        for (int i = 0; i < excessShadowLights; i++) {
            lighting->lightArray.append(
                lighting->shadowedLightArray[lighting->shadowedLightArray.size() - excessShadowLights + i]);
        }

        lighting->shadowedLightArray.resize(lighting->shadowedLightArray.size() - excessShadowLights, true);
    }

    lighting->lightArray.sort(brighter);

    int excessLights = lighting->lightArray.size() - numNonShadowLights;

    if (excessLights > 0) {
        lighting->lightArray.resize(lighting->lightArray.size() - excessLights, true);
    }

    _useAllLightsInUnshadowedPass = _stencilShadows == false;

    for (int i = 0; i < lighting->lightArray.size(); i++) {
        G3D::GLight& l = lighting->lightArray[i];
        _ReadWriteBarrier();
    }
    for (int i = 0; i < lighting->shadowedLightArray.size(); i++) {
        G3D::GLight& l = lighting->shadowedLightArray[i];
        _ReadWriteBarrier();
    }

    if (_toneMap) {
        getToneMap()->setEnabled(true);
        lighting = getToneMap()->prepareLighting(lighting);
        outSkyParameters = getToneMap()->prepareLightingParameters(desiredSkyParameters);
    }
    else {
        outSkyParameters = desiredSkyParameters;
    }

    return lighting;
}

}
}
