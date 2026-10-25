// from server: 100% by tester
// roc 2010-06 008eee60  unit: Ogre::RbxMeshPartAdapter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eee60
//
// 008eee60  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 008eee63  8b01                 mov eax, dword ptr [ecx]
// 008eee65  8b400c               mov eax, dword ptr [eax + 0xc]
// 008eee68  ffe0                 jmp eax

struct OgreRbxMeshPartAdapter {
    int getSomething();
};

int OgreRbxMeshPartAdapter::getSomething() {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x44);
    void* vtable = *reinterpret_cast<void**>(obj);
    int (__thiscall *func)(void*) = *reinterpret_cast<int (__thiscall**)(void*)>(reinterpret_cast<char*>(vtable) + 0xc);
    return func(obj);
}