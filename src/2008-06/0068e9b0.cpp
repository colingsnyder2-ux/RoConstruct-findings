// from server: 35% by colin
// roc 2008-06 0068e9b0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e9b0
//
// 0068e9b0  d9442404             fld dword ptr [esp + 4]
// 0068e9b4  d999f48a0000         fstp dword ptr [ecx + 0x8af4]
// 0068e9ba  c20400               ret 4

struct SceneManager {
    struct PostProcessSettings {
        float brightness;
        float contrast;
        float grayscaleLevel;
        float blurIntensity;
    };

    PostProcessSettings postProcessSettings;

    void setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity);
};

extern "C" __declspec(dllimport) void __stdcall SomeImportedFunction(int);

void SceneManager::setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity) {
    postProcessSettings.brightness = brightness;
    postProcessSettings.contrast = contrast;
    postProcessSettings.grayscaleLevel = grayscaleLevel;
    postProcessSettings.blurIntensity = blurIntensity;
    SomeImportedFunction(0);
}
