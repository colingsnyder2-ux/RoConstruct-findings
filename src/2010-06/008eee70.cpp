// from server: 100% by tester
// roc 2010-06 008eee70  unit: Ogre::RbxMeshPartAdapter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eee70
//
// 008eee70  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 008eee73  8b01                 mov eax, dword ptr [ecx]
// 008eee75  8b4010               mov eax, dword ptr [eax + 0x10]
// 008eee78  ffe0                 jmp eax

struct OgreRbxMeshPartAdapter {
    int getSomething();
};

int OgreRbxMeshPartAdapter::getSomething() {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x44);
    void* vtable = *reinterpret_cast<void**>(obj);
    int (__thiscall *func)(void*) = *reinterpret_cast<int (__thiscall**)(void*)>(reinterpret_cast<char*>(vtable) + 0x10);
    return func(obj);
}