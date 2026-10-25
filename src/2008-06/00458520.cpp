// from server: 100% by king_originala
// roc 2008-06 00458520  unit: CRobloxReportView  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458520
//
// 00458520  56                   push esi
// 00458521  685c8c8100           push 0x818c5c
// 00458526  8bf1                 mov esi, ecx
// 00458528  e853ffffff           call 0x458480
// 0045852d  c7061c8c8100         mov dword ptr [esi], 0x818c1c
// 00458533  c74610108c8100       mov dword ptr [esi + 0x10], 0x818c10
// 0045853a  c74614088c8100       mov dword ptr [esi + 0x14], 0x818c08
// 00458541  c74620008c8100       mov dword ptr [esi + 0x20], 0x818c00
// 00458548  c74624f08b8100       mov dword ptr [esi + 0x24], 0x818bf0
// 0045854f  c74644e08b8100       mov dword ptr [esi + 0x44], 0x818be0
// 00458556  c74664d08b8100       mov dword ptr [esi + 0x64], 0x818bd0
// 0045855d  c78684000000c08b8100 mov dword ptr [esi + 0x84], 0x818bc0
// 00458567  c786a4000000b08b8100 mov dword ptr [esi + 0xa4], 0x818bb0
// 00458571  c786c4000000a08b8100 mov dword ptr [esi + 0xc4], 0x818ba0
// 0045857b  8bc6                 mov eax, esi
// 0045857d  5e                   pop esi
// 0045857e  c3                   ret 

extern unsigned int descriptor[];
extern unsigned int table0[];
extern unsigned int table10[];
extern unsigned int table14[];
extern unsigned int table20[];
extern unsigned int table24[];
extern unsigned int table44[];
extern unsigned int table64[];
extern unsigned int table84[];
extern unsigned int tableA4[];
extern unsigned int tableC4[];

struct Base {
    unsigned int words[50];
    void initialize(unsigned int*);
    Base* f();
};

Base* Base::f()
{
    initialize(descriptor);
    words[0]  = reinterpret_cast<unsigned int>(table0);
    words[4]  = reinterpret_cast<unsigned int>(table10);
    words[5]  = reinterpret_cast<unsigned int>(table14);
    words[8]  = reinterpret_cast<unsigned int>(table20);
    words[9]  = reinterpret_cast<unsigned int>(table24);
    words[17] = reinterpret_cast<unsigned int>(table44);
    words[25] = reinterpret_cast<unsigned int>(table64);
    words[33] = reinterpret_cast<unsigned int>(table84);
    words[41] = reinterpret_cast<unsigned int>(tableA4);
    words[49] = reinterpret_cast<unsigned int>(tableC4);
    return this;
}
