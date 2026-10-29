// roc 2009-06 00484ce0  unit: RBX::MeshGen  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484ce0
//
// 00484ce0  6aff                 push -1
// 00484ce2  68c9528500           push 0x8552c9
// 00484ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00484ced  50                   push eax
// 00484cee  64892500000000       mov dword ptr fs:[0], esp
// 00484cf5  51                   push ecx
// 00484cf6  56                   push esi
// 00484cf7  8bf1                 mov esi, ecx
// 00484cf9  89742404             mov dword ptr [esp + 4], esi
// 00484cfd  ff150c0c8a00         call dword ptr [0x8a0c0c]
// 00484d03  33c0                 xor eax, eax
// 00484d05  8d8ecc000000         lea ecx, [esi + 0xcc]
// 00484d0b  89442410             mov dword ptr [esp + 0x10], eax
// 00484d0f  8886c4000000         mov byte ptr [esi + 0xc4], al
// 00484d15  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00484d1b  ff15880b8a00         call dword ptr [0x8a0b88]
// 00484d21  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00484d25  8bc6                 mov eax, esi
// 00484d27  5e                   pop esi
// 00484d28  64890d00000000       mov dword ptr fs:[0], ecx
// 00484d2f  83c410               add esp, 0x10
// 00484d32  c3                   ret 
// copied from an identical function in another client (function ??0S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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