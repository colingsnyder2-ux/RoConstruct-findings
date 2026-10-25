// from server: 100% by tester
// roc 2008-06 00458480  unit: CRobloxReportView  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458480
//
// 00458480  6aff                 push -1
// 00458482  68c8d37b00           push 0x7bd3c8
// 00458487  64a100000000         mov eax, dword ptr fs:[0]
// 0045848d  50                   push eax
// 0045848e  64892500000000       mov dword ptr fs:[0], esp
// 00458495  51                   push ecx
// 00458496  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045849a  56                   push esi
// 0045849b  8bf1                 mov esi, ecx
// 0045849d  50                   push eax
// 0045849e  89742408             mov dword ptr [esp + 8], esi
// 004584a2  e889d9ffff           call 0x455e30
// 004584a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004584af  e83cf6ffff           call 0x457af0
// 004584b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004584b8  89461c               mov dword ptr [esi + 0x1c], eax
// 004584bb  c7065c8b8100         mov dword ptr [esi], 0x818b5c
// 004584c1  c746104c8b8100       mov dword ptr [esi + 0x10], 0x818b4c
// 004584c8  c74614448b8100       mov dword ptr [esi + 0x14], 0x818b44
// 004584cf  c746203c8b8100       mov dword ptr [esi + 0x20], 0x818b3c
// 004584d6  c746242c8b8100       mov dword ptr [esi + 0x24], 0x818b2c
// 004584dd  c746441c8b8100       mov dword ptr [esi + 0x44], 0x818b1c
// 004584e4  c746640c8b8100       mov dword ptr [esi + 0x64], 0x818b0c
// 004584eb  c78684000000fc8a8100 mov dword ptr [esi + 0x84], 0x818afc
// 004584f5  c786a4000000ec8a8100 mov dword ptr [esi + 0xa4], 0x818aec
// 004584ff  c786c4000000dc8a8100 mov dword ptr [esi + 0xc4], 0x818adc
// 00458509  8bc6                 mov eax, esi
// 0045850b  5e                   pop esi
// 0045850c  64890d00000000       mov dword ptr fs:[0], ecx
// 00458513  83c410               add esp, 0x10
// 00458516  c20400               ret 4

unsigned int __cdecl getDescriptor();

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

    Base(int);
    ~Base();
};

struct Hint : Base {
    Hint(int);
};

Hint::Hint(int value) : Base(value)
{
    words[7] = getDescriptor();
    words[0] = reinterpret_cast<unsigned int>(table0);
    words[4] = reinterpret_cast<unsigned int>(table10);
    words[5] = reinterpret_cast<unsigned int>(table14);
    words[8] = reinterpret_cast<unsigned int>(table20);
    words[9] = reinterpret_cast<unsigned int>(table24);
    words[17] = reinterpret_cast<unsigned int>(table44);
    words[25] = reinterpret_cast<unsigned int>(table64);
    words[33] = reinterpret_cast<unsigned int>(table84);
    words[41] = reinterpret_cast<unsigned int>(tableA4);
    words[49] = reinterpret_cast<unsigned int>(tableC4);
}
