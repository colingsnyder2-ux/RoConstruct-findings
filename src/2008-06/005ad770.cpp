// from server: 100% by tester
// roc 2008-06 005ad770  unit: RBX::Reflection::UTuple::?$holder  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad770
//
// 005ad770  6aff                 push -1
// 005ad772  68c8d37b00           push 0x7bd3c8
// 005ad777  64a100000000         mov eax, dword ptr fs:[0]
// 005ad77d  50                   push eax
// 005ad77e  64892500000000       mov dword ptr fs:[0], esp
// 005ad785  51                   push ecx
// 005ad786  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ad78a  56                   push esi
// 005ad78b  8bf1                 mov esi, ecx
// 005ad78d  50                   push eax
// 005ad78e  89742408             mov dword ptr [esp + 8], esi
// 005ad792  e839b6ffff           call 0x5a8dd0
// 005ad797  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ad79f  e8cc04ebff           call 0x45dc70
// 005ad7a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ad7a8  89461c               mov dword ptr [esi + 0x1c], eax
// 005ad7ab  c706049f8100         mov dword ptr [esi], 0x819f04
// 005ad7b1  c74610f49e8100       mov dword ptr [esi + 0x10], 0x819ef4
// 005ad7b8  c74614ec9e8100       mov dword ptr [esi + 0x14], 0x819eec
// 005ad7bf  c74620e49e8100       mov dword ptr [esi + 0x20], 0x819ee4
// 005ad7c6  c74624d49e8100       mov dword ptr [esi + 0x24], 0x819ed4
// 005ad7cd  c74644c49e8100       mov dword ptr [esi + 0x44], 0x819ec4
// 005ad7d4  c74664b49e8100       mov dword ptr [esi + 0x64], 0x819eb4
// 005ad7db  c78684000000a49e8100 mov dword ptr [esi + 0x84], 0x819ea4
// 005ad7e5  c786a4000000949e8100 mov dword ptr [esi + 0xa4], 0x819e94
// 005ad7ef  c786c4000000849e8100 mov dword ptr [esi + 0xc4], 0x819e84
// 005ad7f9  8bc6                 mov eax, esi
// 005ad7fb  5e                   pop esi
// 005ad7fc  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad803  83c410               add esp, 0x10
// 005ad806  c20400               ret 4

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
