// from server: 18% by colin
// roc 2008-06 0068b7c0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b7c0
//
// 0068b7c0  8a442404             mov al, byte ptr [esp + 4]
// 0068b7c4  8881d0010000         mov byte ptr [ecx + 0x1d0], al
// 0068b7ca  c20400               ret 4

struct SceneManager {
    struct PostProcessSettings {
        float brightness;
        float contrast;
        float grayscaleLevel;
        float blurIntensity;
        // Color3 tintColor; // Not used in the provided assembly
    };

    PostProcessSettings postProcessSettings;

    void setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity);
};

extern "C" __declspec(dllimport) void __cdecl G1_func_0077e3d0(void*);

void SceneManager::setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity) {
    postProcessSettings.brightness = brightness;
    postProcessSettings.contrast = contrast;
    postProcessSettings.grayscaleLevel = grayscaleLevel;
    postProcessSettings.blurIntensity = blurIntensity;
}
