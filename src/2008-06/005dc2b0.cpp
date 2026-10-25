// from server: 100% by king_originala
// roc 2008-06 005dc2b0  unit: RBX::VPartInstance::?$FilteredSelection  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dc2b0
//
// 005dc2b0  8a91e8010000         mov dl, byte ptr [ecx + 0x1e8]
// 005dc2b6  8a442404             mov al, byte ptr [esp + 4]
// 005dc2ba  53                   push ebx
// 005dc2bb  8ada                 mov bl, dl
// 005dc2bd  c0eb03               shr bl, 3
// 005dc2c0  80e301               and bl, 1
// 005dc2c3  3ad8                 cmp bl, al
// 005dc2c5  5b                   pop ebx
// 005dc2c6  741f                 je 0x5dc2e7
// 005dc2c8  02c0                 add al, al
// 005dc2ca  02c0                 add al, al
// 005dc2cc  02c0                 add al, al
// 005dc2ce  32c2                 xor al, dl
// 005dc2d0  2408                 and al, 8
// 005dc2d2  32c2                 xor al, dl
// 005dc2d4  8881e8010000         mov byte ptr [ecx + 0x1e8], al
// 005dc2da  c7442404eca39700     mov dword ptr [esp + 4], 0x97a3ec
// 005dc2e2  e91918e3ff           jmp 0x40db00
// 005dc2e7  c20400               ret 4

extern const char descriptor;

struct S {
    char padding[0x1e8];
    unsigned char reserved : 3;
    unsigned char selected : 1;
    unsigned char remaining : 4;

    void setSelected(bool value);
    void notify(const void* property);
};

void S::setSelected(bool value)
{
    if (selected != value) {
        selected = value;
        notify(&descriptor);
    }
}
