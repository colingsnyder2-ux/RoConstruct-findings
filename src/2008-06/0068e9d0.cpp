// from server: 16% by colin
// roc 2008-06 0068e9d0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e9d0
//
// 0068e9d0  8a442404             mov al, byte ptr [esp + 4]
// 0068e9d4  8881b58a0000         mov byte ptr [ecx + 0x8ab5], al
// 0068e9da  c20400               ret 4

struct SceneManager {
    struct PostProcessSettings {
        float brightness;
        float contrast;
        float grayscaleLevel;
        float blurIntensity;
        float tintColor;
    };

    PostProcessSettings postProcessSettings;

    void setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity, float tintColor);
};

extern "C" __declspec(dllimport) void __cdecl G1_func_0077e3d0(void*);

void SceneManager::setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity, float tintColor) {
    postProcessSettings.brightness = brightness;
    postProcessSettings.contrast = contrast;
    postProcessSettings.grayscaleLevel = grayscaleLevel;
    postProcessSettings.blurIntensity = blurIntensity;
    postProcessSettings.tintColor = tintColor;
}
