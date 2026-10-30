// roc 2009-12 0049bb40  unit: Ogre::RbxMeshPartAdapter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049bb40
//
// 0049bb40  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0049bb43  8b01                 mov eax, dword ptr [ecx]
// 0049bb45  8b5034               mov edx, dword ptr [eax + 0x34]
// 0049bb48  ffe2                 jmp edx
// copied from an identical function in another client (function ?func@OgreRbxMeshPartAdapter@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
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
}
