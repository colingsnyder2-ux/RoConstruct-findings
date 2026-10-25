// from server: 100% by tester
// roc 2008-06 00586850  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586850
//
// 00586850  6aff                 push -1
// 00586852  6878137d00           push 0x7d1378
// 00586857  64a100000000         mov eax, dword ptr fs:[0]
// 0058685d  50                   push eax
// 0058685e  64892500000000       mov dword ptr fs:[0], esp
// 00586865  51                   push ecx
// 00586866  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058686a  56                   push esi
// 0058686b  8bf1                 mov esi, ecx
// 0058686d  50                   push eax
// 0058686e  89742408             mov dword ptr [esp + 8], esi
// 00586872  e849f4ffff           call 0x585cc0
// 00586877  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058687f  e8bcfcffff           call 0x586540
// 00586884  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00586888  89461c               mov dword ptr [esi + 0x1c], eax
// 0058688b  c70614148300         mov dword ptr [esi], 0x831414
// 00586891  c7461004148300       mov dword ptr [esi + 0x10], 0x831404
// 00586898  c74614fc138300       mov dword ptr [esi + 0x14], 0x8313fc
// 0058689f  c74620f4138300       mov dword ptr [esi + 0x20], 0x8313f4
// 005868a6  c74624e4138300       mov dword ptr [esi + 0x24], 0x8313e4
// 005868ad  c74644d4138300       mov dword ptr [esi + 0x44], 0x8313d4
// 005868b4  c74664c4138300       mov dword ptr [esi + 0x64], 0x8313c4
// 005868bb  c78684000000b4138300 mov dword ptr [esi + 0x84], 0x8313b4
// 005868c5  c786a4000000a4138300 mov dword ptr [esi + 0xa4], 0x8313a4
// 005868cf  c786c400000094138300 mov dword ptr [esi + 0xc4], 0x831394
// 005868d9  8bc6                 mov eax, esi
// 005868db  5e                   pop esi
// 005868dc  64890d00000000       mov dword ptr fs:[0], ecx
// 005868e3  83c410               add esp, 0x10
// 005868e6  c20400               ret 4

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
