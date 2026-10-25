// from server: 100% by king_originala
// roc 2008-06 005dcff0  unit: RBX::Hint  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcff0
//
// 005dcff0  6aff                 push -1
// 005dcff2  6828617d00           push 0x7d6128
// 005dcff7  64a100000000         mov eax, dword ptr fs:[0]
// 005dcffd  50                   push eax
// 005dcffe  64892500000000       mov dword ptr fs:[0], esp
// 005dd005  51                   push ecx
// 005dd006  8b442414             mov eax, dword ptr [esp + 0x14]
// 005dd00a  56                   push esi
// 005dd00b  8bf1                 mov esi, ecx
// 005dd00d  50                   push eax
// 005dd00e  89742408             mov dword ptr [esp + 8], esi
// 005dd012  e8c9faffff           call 0x5dcae0
// 005dd017  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dd01f  e8ac6cecff           call 0x4a3cd0
// 005dd024  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dd028  89461c               mov dword ptr [esi + 0x1c], eax
// 005dd02b  c706fcd98300         mov dword ptr [esi], 0x83d9fc
// 005dd031  c74610f0d98300       mov dword ptr [esi + 0x10], 0x83d9f0
// 005dd038  c74614e8d98300       mov dword ptr [esi + 0x14], 0x83d9e8
// 005dd03f  c74620e0d98300       mov dword ptr [esi + 0x20], 0x83d9e0
// 005dd046  c74624d0d98300       mov dword ptr [esi + 0x24], 0x83d9d0
// 005dd04d  c74644c0d98300       mov dword ptr [esi + 0x44], 0x83d9c0
// 005dd054  c74664b0d98300       mov dword ptr [esi + 0x64], 0x83d9b0
// 005dd05b  c78684000000a0d98300 mov dword ptr [esi + 0x84], 0x83d9a0
// 005dd065  c786a400000090d98300 mov dword ptr [esi + 0xa4], 0x83d990
// 005dd06f  c786c400000080d98300 mov dword ptr [esi + 0xc4], 0x83d980
// 005dd079  8bc6                 mov eax, esi
// 005dd07b  5e                   pop esi
// 005dd07c  64890d00000000       mov dword ptr fs:[0], ecx
// 005dd083  83c410               add esp, 0x10
// 005dd086  c20400               ret 4

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
