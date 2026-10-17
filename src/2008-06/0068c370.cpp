// from server: 62% by colin
struct SceneManager {
    char pad0[0x34];
    void* m_device;
    void setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity, int tintColor, bool enabled);
};

void SceneManager::setPostProcess(float brightness, float contrast, float grayscaleLevel, float blurIntensity, int tintColor, bool enabled)
{
    void** vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, float))vtbl[0xcc / 4])(m_device, brightness);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, float))vtbl[0x60 / 4])(m_device, contrast);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, float))vtbl[0x68 / 4])(m_device, grayscaleLevel);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, float))vtbl[0x6c / 4])(m_device, blurIntensity);
    if (enabled) {
        vtbl = *(void***)m_device;
        ((void (__thiscall*)(void*))vtbl[0xc4 / 4])(m_device);
    }
    void** selfVtbl = *(void***)this;
    ((void (__thiscall*)(SceneManager*, int, int, int))selfVtbl[0x380 / 4])(this, tintColor, 0, 1);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, int))vtbl[0x13c / 4])(m_device, tintColor);
    if (enabled) {
        vtbl = *(void***)m_device;
        ((void (__thiscall*)(void*))vtbl[0xc8 / 4])(m_device);
    }
}
