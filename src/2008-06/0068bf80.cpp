// from server: 100% by king_originala
// roc 2008-06 0068bf80  unit: Ogre::RbxSceneManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bf80
//
// 0068bf80  56                   push esi
// 0068bf81  8bf1                 mov esi, ecx
// 0068bf83  80be828b000000       cmp byte ptr [esi + 0x8b82], 0
// 0068bf8a  754c                 jne 0x68bfd8
// 0068bf8c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0068bf92  ff15d0478000         call dword ptr [0x8047d0]
// 0068bf98  84c0                 test al, al
// 0068bf9a  743c                 je 0x68bfd8
// 0068bf9c  8b06                 mov eax, dword ptr [esi]
// 0068bf9e  8b90f0020000         mov edx, dword ptr [eax + 0x2f0]
// 0068bfa4  8bce                 mov ecx, esi
// 0068bfa6  ffd2                 call edx
// 0068bfa8  84c0                 test al, al
// 0068bfaa  7409                 je 0x68bfb5
// 0068bfac  83be548a000002       cmp dword ptr [esi + 0x8a54], 2
// 0068bfb3  7412                 je 0x68bfc7
// 0068bfb5  83be548a000001       cmp dword ptr [esi + 0x8a54], 1
// 0068bfbc  7409                 je 0x68bfc7
// 0068bfbe  80be818b000000       cmp byte ptr [esi + 0x8b81], 0
// 0068bfc5  7411                 je 0x68bfd8
// 0068bfc7  8b442408             mov eax, dword ptr [esp + 8]
// 0068bfcb  6683780400           cmp word ptr [eax + 4], 0
// 0068bfd0  7606                 jbe 0x68bfd8
// 0068bfd2  32c0                 xor al, al
// 0068bfd4  5e                   pop esi
// 0068bfd5  c20400               ret 4
// 0068bfd8  b001                 mov al, 1
// 0068bfda  5e                   pop esi
// 0068bfdb  c20400               ret 4

typedef bool (__thiscall *BoolMethod)(void*);
extern BoolMethod getShadowsEnabled;

struct Item {
    char padding[4];
    unsigned short count;
};

struct S {
    BoolMethod* vtable;
    char padding0[0xb8];
    void* viewport;
    char padding1[0x8994];
    int mode;
    char padding2[0x129];
    bool enabled;
    bool disabled;

    bool f(const Item* item);
};

bool S::f(const Item* item)
{
    if (!disabled && getShadowsEnabled(viewport)) {
        if ((vtable[188](this) && mode == 2) ||
            mode == 1 || enabled) {
            if (item->count > 0)
                return false;
        }
    }
    return true;
}
