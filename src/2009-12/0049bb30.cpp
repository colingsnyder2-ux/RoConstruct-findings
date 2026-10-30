// roc 2009-12 0049bb30  unit: Ogre::RbxMeshPartAdapter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049bb30
//
// 0049bb30  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0049bb33  8b01                 mov eax, dword ptr [ecx]
// 0049bb35  8b4030               mov eax, dword ptr [eax + 0x30]
// 0049bb38  ffe0                 jmp eax
// copied from an identical function in another client (function ?getSomething@OgreRbxMeshPartAdapter@ns_ROCX000006@@QAEHXZ)

namespace ns_ROCX000006 {
struct OgreRbxMeshPartAdapter {
    int getSomething();
};

int OgreRbxMeshPartAdapter::getSomething() {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x44);
    void* vtable = *reinterpret_cast<void**>(obj);
    int (__thiscall *func)(void*) = *reinterpret_cast<int (__thiscall**)(void*)>(reinterpret_cast<char*>(vtable) + 0x30);
    return func(obj);
}
}
