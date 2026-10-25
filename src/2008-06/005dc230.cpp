// from server: 100% by king_originala
// roc 2008-06 005dc230  unit: RBX::VPartInstance::?$FilteredSelection  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dc230
//
// 005dc230  8a91e8010000         mov dl, byte ptr [ecx + 0x1e8]
// 005dc236  8a442404             mov al, byte ptr [esp + 4]
// 005dc23a  53                   push ebx
// 005dc23b  8ada                 mov bl, dl
// 005dc23d  c0eb04               shr bl, 4
// 005dc240  80e301               and bl, 1
// 005dc243  3ad8                 cmp bl, al
// 005dc245  5b                   pop ebx
// 005dc246  741c                 je 0x5dc264
// 005dc248  c0e004               shl al, 4
// 005dc24b  32c2                 xor al, dl
// 005dc24d  2410                 and al, 0x10
// 005dc24f  32c2                 xor al, dl
// 005dc251  8881e8010000         mov byte ptr [ecx + 0x1e8], al
// 005dc257  c7442404c0a59700     mov dword ptr [esp + 4], 0x97a5c0
// 005dc25f  e99c18e3ff           jmp 0x40db00
// 005dc264  c20400               ret 4

extern char property;

struct S
{
    char padding[0x1e8];
    unsigned char unused : 4;
    unsigned char selected : 1;
    unsigned char remaining : 3;

    void f(bool value);
    void notify(const void* descriptor);
};

void S::f(bool value)
{
    if (selected != value)
    {
        selected = value;
        notify(&property);
    }
}
