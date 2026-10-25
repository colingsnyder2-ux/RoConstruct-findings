// from server: 100% by king_originala
// roc 2008-06 005640a0  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005640a0
//
// 005640a0  c701ace28200         mov dword ptr [ecx], 0x82e2ac
// 005640a6  c741109ce28200       mov dword ptr [ecx + 0x10], 0x82e29c
// 005640ad  c7411494e28200       mov dword ptr [ecx + 0x14], 0x82e294
// 005640b4  c741208ce28200       mov dword ptr [ecx + 0x20], 0x82e28c
// 005640bb  c741247ce28200       mov dword ptr [ecx + 0x24], 0x82e27c
// 005640c2  c741446ce28200       mov dword ptr [ecx + 0x44], 0x82e26c
// 005640c9  c741645ce28200       mov dword ptr [ecx + 0x64], 0x82e25c
// 005640d0  c781840000004ce28200 mov dword ptr [ecx + 0x84], 0x82e24c
// 005640da  c781a40000003ce28200 mov dword ptr [ecx + 0xa4], 0x82e23c
// 005640e4  c781c40000002ce28200 mov dword ptr [ecx + 0xc4], 0x82e22c
// 005640ee  c70518c3960000000000 mov dword ptr [0x96c318], 0
// 005640f8  e943faffff           jmp 0x563b40

struct S
{
    unsigned long data[50];
    void func_005640a0();
    void func_00563b40();
};

void S::func_005640a0()
{
    data[0] = 0x82e2ac;
    data[4] = 0x82e29c;
    data[5] = 0x82e294;
    data[8] = 0x82e28c;
    data[9] = 0x82e27c;
    data[17] = 0x82e26c;
    data[25] = 0x82e25c;
    data[33] = 0x82e24c;
    data[41] = 0x82e23c;
    data[49] = 0x82e22c;
    *(unsigned long*)0x96c318 = 0;
    func_00563b40();
}
