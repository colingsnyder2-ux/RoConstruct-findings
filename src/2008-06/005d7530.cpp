// from server: 69% by colin
// roc 2008-06 005d7530  unit: Ogre::RbxSceneManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7530
//
// 005d7530  8a81e8010000         mov al, byte ptr [ecx + 0x1e8]
// 005d7536  c0e803               shr al, 3
// 005d7539  2401                 and al, 1
// 005d753b  c3                   ret 

struct SceneManager {
    struct PostProcessSettings {
        float brightness;
        float contrast;
        float grayscaleLevel;
        float blurIntensity;
        struct Color3 {
            float r, g, b;
        } tintColor;
    };

    PostProcessSettings postProcessSettings;

    SceneManager();
    ~SceneManager();

    int getPostProcessEnabled() const;
};

int SceneManager::getPostProcessEnabled() const {
    return (reinterpret_cast<const unsigned char*>(this) + 0x1e8)[0] >> 3 & 1;
}
