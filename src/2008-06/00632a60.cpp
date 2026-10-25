// from server: 100% by tester
// roc 2008-06 00632a60  unit: RBX::VBodyVelocity::?$BoundFuncDesc  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632a60
//
// 00632a60  6aff                 push -1
// 00632a62  68c89d7d00           push 0x7d9dc8
// 00632a67  64a100000000         mov eax, dword ptr fs:[0]
// 00632a6d  50                   push eax
// 00632a6e  64892500000000       mov dword ptr fs:[0], esp
// 00632a75  51                   push ecx
// 00632a76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00632a7a  56                   push esi
// 00632a7b  8bf1                 mov esi, ecx
// 00632a7d  50                   push eax
// 00632a7e  89742408             mov dword ptr [esp + 8], esi
// 00632a82  e879cbffff           call 0x62f600
// 00632a87  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00632a8f  e8cce5ffff           call 0x631060
// 00632a94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00632a98  89461c               mov dword ptr [esi + 0x1c], eax
// 00632a9b  c7067c808400         mov dword ptr [esi], 0x84807c
// 00632aa1  c7461070808400       mov dword ptr [esi + 0x10], 0x848070
// 00632aa8  c7461468808400       mov dword ptr [esi + 0x14], 0x848068
// 00632aaf  c7462060808400       mov dword ptr [esi + 0x20], 0x848060
// 00632ab6  c7462450808400       mov dword ptr [esi + 0x24], 0x848050
// 00632abd  c7464440808400       mov dword ptr [esi + 0x44], 0x848040
// 00632ac4  c7466430808400       mov dword ptr [esi + 0x64], 0x848030
// 00632acb  c7868400000020808400 mov dword ptr [esi + 0x84], 0x848020
// 00632ad5  c786a400000010808400 mov dword ptr [esi + 0xa4], 0x848010
// 00632adf  c786c400000000808400 mov dword ptr [esi + 0xc4], 0x848000
// 00632ae9  c78630010000e47f8400 mov dword ptr [esi + 0x130], 0x847fe4
// 00632af3  c78638010000d87f8400 mov dword ptr [esi + 0x138], 0x847fd8
// 00632afd  8bc6                 mov eax, esi
// 00632aff  5e                   pop esi
// 00632b00  64890d00000000       mov dword ptr fs:[0], ecx
// 00632b07  83c410               add esp, 0x10
// 00632b0a  c20400               ret 4

unsigned int __cdecl getName();

extern unsigned char table0[];
extern unsigned char table10[];
extern unsigned char table14[];
extern unsigned char table20[];
extern unsigned char table24[];
extern unsigned char table44[];
extern unsigned char table64[];
extern unsigned char table84[];
extern unsigned char tableA4[];
extern unsigned char tableC4[];
extern unsigned char table130[];
extern unsigned char table138[];

struct Base {
    unsigned int data[79];
    Base(void*);
    ~Base();
};

struct S : Base {
    S(void*);
};

S::S(void* argument) : Base(argument)
{
    data[7] = getName();
    data[0] = reinterpret_cast<unsigned int>(table0);
    data[4] = reinterpret_cast<unsigned int>(table10);
    data[5] = reinterpret_cast<unsigned int>(table14);
    data[8] = reinterpret_cast<unsigned int>(table20);
    data[9] = reinterpret_cast<unsigned int>(table24);
    data[17] = reinterpret_cast<unsigned int>(table44);
    data[25] = reinterpret_cast<unsigned int>(table64);
    data[33] = reinterpret_cast<unsigned int>(table84);
    data[41] = reinterpret_cast<unsigned int>(tableA4);
    data[49] = reinterpret_cast<unsigned int>(tableC4);
    data[76] = reinterpret_cast<unsigned int>(table130);
    data[78] = reinterpret_cast<unsigned int>(table138);
}
