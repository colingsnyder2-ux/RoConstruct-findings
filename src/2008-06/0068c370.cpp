// from server: 100% by Espeon
// roc 2008-06 0068c370  unit: Ogre::RbxSceneManager  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c370
//
// 0068c370  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0068c374  53                   push ebx
// 0068c375  56                   push esi
// 0068c376  8bf1                 mov esi, ecx
// 0068c378  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c37b  8b01                 mov eax, dword ptr [ecx]
// 0068c37d  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0068c383  52                   push edx
// 0068c384  ffd0                 call eax
// 0068c386  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c389  8b11                 mov edx, dword ptr [ecx]
// 0068c38b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068c38f  8b5260               mov edx, dword ptr [edx + 0x60]
// 0068c392  50                   push eax
// 0068c393  ffd2                 call edx
// 0068c395  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c398  8b01                 mov eax, dword ptr [ecx]
// 0068c39a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0068c39e  8b4068               mov eax, dword ptr [eax + 0x68]
// 0068c3a1  52                   push edx
// 0068c3a2  ffd0                 call eax
// 0068c3a4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c3a7  8b11                 mov edx, dword ptr [ecx]
// 0068c3a9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068c3ad  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0068c3b0  50                   push eax
// 0068c3b1  ffd2                 call edx
// 0068c3b3  8a5c2424             mov bl, byte ptr [esp + 0x24]
// 0068c3b7  84db                 test bl, bl
// 0068c3b9  740d                 je 0x68c3c8
// 0068c3bb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c3be  8b01                 mov eax, dword ptr [ecx]
// 0068c3c0  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0068c3c6  ffd2                 call edx
// 0068c3c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068c3cc  8b06                 mov eax, dword ptr [esi]
// 0068c3ce  8b9080030000         mov edx, dword ptr [eax + 0x380]
// 0068c3d4  6a01                 push 1
// 0068c3d6  6a00                 push 0
// 0068c3d8  51                   push ecx
// 0068c3d9  8bce                 mov ecx, esi
// 0068c3db  ffd2                 call edx
// 0068c3dd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c3e0  8b01                 mov eax, dword ptr [ecx]
// 0068c3e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0068c3e6  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 0068c3ec  52                   push edx
// 0068c3ed  ffd0                 call eax
// 0068c3ef  84db                 test bl, bl
// 0068c3f1  740d                 je 0x68c400
// 0068c3f3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c3f6  8b11                 mov edx, dword ptr [ecx]
// 0068c3f8  8b82c8000000         mov eax, dword ptr [edx + 0xc8]
// 0068c3fe  ffd0                 call eax
// 0068c400  5e                   pop esi
// 0068c401  5b                   pop ebx
// 0068c402  c21c00               ret 0x1c

struct SceneManager {
    char pad0[0x34];
    void* m_device;
    void setPostProcess(int finalValue, int tintColor, int brightness, int contrast, int grayscaleLevel, int blurIntensity, bool enabled);
};

void SceneManager::setPostProcess(int finalValue, int tintColor, int brightness, int contrast, int grayscaleLevel, int blurIntensity, bool enabled)
{
    void** vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, int))vtbl[0xcc / 4])(m_device, brightness);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, int))vtbl[0x60 / 4])(m_device, contrast);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, int))vtbl[0x68 / 4])(m_device, grayscaleLevel);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, int))vtbl[0x6c / 4])(m_device, blurIntensity);
    if (enabled) {
        vtbl = *(void***)m_device;
        ((void (__thiscall*)(void*))vtbl[0xc4 / 4])(m_device);
    }
    void** selfVtbl = *(void***)this;
    ((void (__thiscall*)(SceneManager*, int, int, int))selfVtbl[0x380 / 4])(this, tintColor, 0, 1);
    vtbl = *(void***)m_device;
    ((void (__thiscall*)(void*, int))vtbl[0x13c / 4])(m_device, finalValue);
    if (enabled) {
        vtbl = *(void***)m_device;
        ((void (__thiscall*)(void*))vtbl[0xc8 / 4])(m_device);
    }
}

