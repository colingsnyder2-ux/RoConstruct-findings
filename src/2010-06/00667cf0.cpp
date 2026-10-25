// from server: 100% by tester
// roc 2010-06 00667cf0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667cf0
//
// 00667cf0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00667cf3  8b01                 mov eax, dword ptr [ecx]
// 00667cf5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00667cf8  ffe0                 jmp eax

struct OgreRbxMeshPartAdapter {
    int getSomething();
};

int OgreRbxMeshPartAdapter::getSomething() {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x20);
    void* vtable = *reinterpret_cast<void**>(obj);
    int (__thiscall *func)(void*) = *reinterpret_cast<int (__thiscall**)(void*)>(reinterpret_cast<char*>(vtable) + 0xc);
    return func(obj);
}