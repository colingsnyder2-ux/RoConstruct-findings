// from server: 100% by tester
// roc 2008-06 005bf1f0  unit: RBX::VGameSettings::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf1f0
//
// 005bf1f0  c701f4858300         mov dword ptr [ecx], 0x8385f4
// 005bf1f6  c74110e8858300       mov dword ptr [ecx + 0x10], 0x8385e8
// 005bf1fd  c74114e0858300       mov dword ptr [ecx + 0x14], 0x8385e0
// 005bf204  c74120d8858300       mov dword ptr [ecx + 0x20], 0x8385d8
// 005bf20b  c74124c8858300       mov dword ptr [ecx + 0x24], 0x8385c8
// 005bf212  c74144b8858300       mov dword ptr [ecx + 0x44], 0x8385b8
// 005bf219  c74164a8858300       mov dword ptr [ecx + 0x64], 0x8385a8
// 005bf220  c7818400000098858300 mov dword ptr [ecx + 0x84], 0x838598
// 005bf22a  c781a400000088858300 mov dword ptr [ecx + 0xa4], 0x838588
// 005bf234  c781c400000078858300 mov dword ptr [ecx + 0xc4], 0x838578
// 005bf23e  c70510dd960000000000 mov dword ptr [0x96dd10], 0
// 005bf248  e983feffff           jmp 0x5bf0d0

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
