// from server: 100% by tester
// roc 2008-06 004a9d00  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9d00
//
// 004a9d00  c70174408200         mov dword ptr [ecx], 0x824074
// 004a9d06  c7411068408200       mov dword ptr [ecx + 0x10], 0x824068
// 004a9d0d  c7411460408200       mov dword ptr [ecx + 0x14], 0x824060
// 004a9d14  c7412058408200       mov dword ptr [ecx + 0x20], 0x824058
// 004a9d1b  c7412448408200       mov dword ptr [ecx + 0x24], 0x824048
// 004a9d22  c7414438408200       mov dword ptr [ecx + 0x44], 0x824038
// 004a9d29  c7416428408200       mov dword ptr [ecx + 0x64], 0x824028
// 004a9d30  c7818400000018408200 mov dword ptr [ecx + 0x84], 0x824018
// 004a9d3a  c781a400000008408200 mov dword ptr [ecx + 0xa4], 0x824008
// 004a9d44  c781c4000000f83f8200 mov dword ptr [ecx + 0xc4], 0x823ff8
// 004a9d4e  c705d006970000000000 mov dword ptr [0x9706d0], 0
// 004a9d58  e913feffff           jmp 0x4a9b70

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
