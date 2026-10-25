// from server: 100% by king_originala
// roc 2008-06 00678470  unit: Ogre::RbxSceneManagerFactory  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678470
//
// 00678470  6aff                 push -1
// 00678472  68d9d07d00           push 0x7dd0d9
// 00678477  64a100000000         mov eax, dword ptr fs:[0]
// 0067847d  50                   push eax
// 0067847e  64892500000000       mov dword ptr fs:[0], esp
// 00678485  51                   push ecx
// 00678486  56                   push esi
// 00678487  8bf1                 mov esi, ecx
// 00678489  89742404             mov dword ptr [esp + 4], esi
// 0067848d  ff153c438000         call dword ptr [0x80433c]
// 00678493  33c0                 xor eax, eax
// 00678495  8d8ecc000000         lea ecx, [esi + 0xcc]
// 0067849b  89442410             mov dword ptr [esp + 0x10], eax
// 0067849f  8886c4000000         mov byte ptr [esi + 0xc4], al
// 006784a5  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 006784ab  ff1538438000         call dword ptr [0x804338]
// 006784b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006784b5  8bc6                 mov eax, esi
// 006784b7  5e                   pop esi
// 006784b8  64890d00000000       mov dword ptr fs:[0], ecx
// 006784bf  83c410               add esp, 0x10
// 006784c2  c3                   ret 

namespace Ogre {
    struct SubMesh {
        unsigned char storage[0xC4];
        SubMesh();
        ~SubMesh();
    };

    struct AxisAlignedBox {
        float minimum[3];
        float maximum[3];
        int extent;
        AxisAlignedBox();
    };
}

extern void (__thiscall *constructSubMesh)(Ogre::SubMesh*);
extern void (__thiscall *constructAxisAlignedBox)(Ogre::AxisAlignedBox*);

__forceinline Ogre::SubMesh::SubMesh() {
    constructSubMesh(this);
}

__forceinline Ogre::AxisAlignedBox::AxisAlignedBox() {
    constructAxisAlignedBox(this);
}

struct S : Ogre::SubMesh {
    bool flag;
    void* pointer;
    Ogre::AxisAlignedBox bounds;
    S();
};

S::S() : flag(false), pointer(0) {}
