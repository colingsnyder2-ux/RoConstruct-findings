// from server: 28% by colin
// roc 2008-06 0068c930  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c930
//
// 0068c930  d9442404             fld dword ptr [esp + 4]
// 0068c934  d999508a0000         fstp dword ptr [ecx + 0x8a50]
// 0068c93a  c20400               ret 4

struct SceneManager {
    float brightness;
    float contrast;
    float grayscaleLevel;
    float blurIntensity;
    struct Color3 {
        float r, g, b;
    } tintColor;

    void setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity, const Color3& tintColor);
};

extern "C" __declspec(dllimport) void someFunction();

void SceneManager::setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity, const Color3& tintColor) {
    this->brightness = brightness;
    this->contrast = contrast;
    this->grayscaleLevel = grayscaleLevel;
    this->blurIntensity = blurIntensity;
    this->tintColor = tintColor;
    someFunction();
}
