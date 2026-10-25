// from server: 100% by tester
// roc 2010-06 008eeeb0  unit: Ogre::RbxMeshPartAdapter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eeeb0
//
// 008eeeb0  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 008eeeb3  8b01                 mov eax, dword ptr [ecx]
// 008eeeb5  8b5034               mov edx, dword ptr [eax + 0x34]
// 008eeeb8  ffe2                 jmp edx

struct VTable {
    void* gap[13];
    void (__thiscall* func)(void*);
};

struct Interface {
    VTable* vptr;
};

struct Member {
    Interface* ptr;
};

struct OgreRbxMeshPartAdapter {
    char pad[0x44];
    Member member;

    void __thiscall func();
};

void __thiscall OgreRbxMeshPartAdapter::func() {
    Interface* iface = this->member.ptr;
    VTable* vtable = iface->vptr;
    void (__thiscall* target)(void*) = vtable->func;
    target(iface);
}
