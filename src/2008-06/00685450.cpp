// from server: 100% by tester
// roc 2008-06 00685450  unit: Ogre::RbxSubEntity::RbxSubEntityShadowRenderable  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685450
//
// 00685450  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00685453  8b01                 mov eax, dword ptr [ecx]
// 00685455  8b4010               mov eax, dword ptr [eax + 0x10]
// 00685458  ffe0                 jmp eax

struct OgreRbxMeshPartAdapter {
    int getSomething();
};

int OgreRbxMeshPartAdapter::getSomething() {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x6c);
    void* vtable = *reinterpret_cast<void**>(obj);
    int (__thiscall *func)(void*) = *reinterpret_cast<int (__thiscall**)(void*)>(reinterpret_cast<char*>(vtable) + 0x10);
    return func(obj);
}