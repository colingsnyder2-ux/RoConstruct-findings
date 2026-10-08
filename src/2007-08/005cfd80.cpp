// from server: 39% by colin
// roc 2007-08 005cfd80  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cfd80
//
// 005cfd80  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 005cfd81  7b00                 jnp 0x5cfd83
// 005cfd83  c7462cbca67b00       mov dword ptr [esi + 0x2c], 0x7ba6bc
// 005cfd8a  c74644aca67b00       mov dword ptr [esi + 0x44], 0x7ba6ac
// 005cfd91  c7465c9ca67b00       mov dword ptr [esi + 0x5c], 0x7ba69c
// 005cfd98  c746748ca67b00       mov dword ptr [esi + 0x74], 0x7ba68c
// 005cfd9f  c7868c0000007ca67b00 mov dword ptr [esi + 0x8c], 0x7ba67c
// 005cfda9  c786e800000074a67b00 mov dword ptr [esi + 0xe8], 0x7ba674
// 005cfdb3  8bc6                 mov eax, esi
// 005cfdb5  5e                   pop esi
// 005cfdb6  c3                   ret 

struct S {
    char pad[0x2c];
    int m2c;
    int m30;
    int m34;
    int m38;
    int m3c;
    int m40;
    int m44;
    int m48;
    int m4c;
    int m50;
    int m54;
    int m58;
    int m5c;
    int m60;
    int m64;
    int m68;
    int m6c;
    int m70;
    int m74;
    int m78;
    int m7c;
    int m80;
    int m84;
    int m88;
    int m8c;
    int m90;
    int m94;
    int m98;
    int m9c;
    int ma0;
    int ma4;
    int ma8;
    int mac;
    int mb0;
    int mb4;
    int mb8;
    int mbc;
    int mc0;
    int mc4;
    int mc8;
    int mcc;
    int md0;
    int md4;
    int md8;
    int mdc;
    int me0;
    int me4;
    int me8;
    S* f();
};

S* S::f()
{
    m2c = 0x7ba6bc;
    m44 = 0x7ba6ac;
    m5c = 0x7ba69c;
    m74 = 0x7ba68c;
    m8c = 0x7ba67c;
    me8 = 0x7ba674;
    return this;
}
