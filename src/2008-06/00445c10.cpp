// from server: 100% by tester
// roc 2008-06 00445c10  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445c10
//
// 00445c10  c701845e8100         mov dword ptr [ecx], 0x815e84
// 00445c16  c74110785e8100       mov dword ptr [ecx + 0x10], 0x815e78
// 00445c1d  c74114705e8100       mov dword ptr [ecx + 0x14], 0x815e70
// 00445c24  c74120685e8100       mov dword ptr [ecx + 0x20], 0x815e68
// 00445c2b  c74124585e8100       mov dword ptr [ecx + 0x24], 0x815e58
// 00445c32  c74144485e8100       mov dword ptr [ecx + 0x44], 0x815e48
// 00445c39  c74164385e8100       mov dword ptr [ecx + 0x64], 0x815e38
// 00445c40  c78184000000285e8100 mov dword ptr [ecx + 0x84], 0x815e28
// 00445c4a  c781a4000000185e8100 mov dword ptr [ecx + 0xa4], 0x815e18
// 00445c54  c781c4000000085e8100 mov dword ptr [ecx + 0xc4], 0x815e08
// 00445c5e  c705eccb960000000000 mov dword ptr [0x96cbec], 0
// 00445c68  e9a3f7ffff           jmp 0x445410

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
