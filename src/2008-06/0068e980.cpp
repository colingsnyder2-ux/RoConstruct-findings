// from server: 36% by colin
// roc 2008-06 0068e980  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e980
//
// 0068e980  d9442404             fld dword ptr [esp + 4]
// 0068e984  d999ec8a0000         fstp dword ptr [ecx + 0x8aec]
// 0068e98a  c20400               ret 4

struct SceneManager {
    struct PostProcessSettings {
        float brightness;
        float contrast;
        float grayscaleLevel;
        float blurIntensity;
        // Color3 tintColor; // Not used in the provided assembly
    };

    PostProcessSettings postProcessSettings;

    SceneManager();
    ~SceneManager();

    void setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity);
};

extern "C" __declspec(dllimport) void someImportedFunction();

void SceneManager::setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity) {
    postProcessSettings.brightness = brightness;
    postProcessSettings.contrast = contrast;
    postProcessSettings.grayscaleLevel = grayscaleLevel;
    postProcessSettings.blurIntensity = blurIntensity;

    someImportedFunction();
}
