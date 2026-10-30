// roc 2009-12 006ddc30  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ddc30
//
// 006ddc30  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006ddc33  8b01                 mov eax, dword ptr [ecx]
// 006ddc35  8b400c               mov eax, dword ptr [eax + 0xc]
// 006ddc38  ffe0                 jmp eax
// copied from an identical function in another client (function ?getSomething@OgreRbxMeshPartAdapter@ns_ROCX000010@@QAEHXZ)

namespace ns_ROCX000010 {
struct OgreRbxMeshPartAdapter {
    int getSomething();
};

int OgreRbxMeshPartAdapter::getSomething() {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x20);
    void* vtable = *reinterpret_cast<void**>(obj);
    int (__thiscall *func)(void*) = *reinterpret_cast<int (__thiscall**)(void*)>(reinterpret_cast<char*>(vtable) + 0xc);
    return func(obj);
}
}
