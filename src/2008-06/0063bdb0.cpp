// from server: 100% by tester
// roc 2008-06 0063bdb0  unit: RBX::P8DebrisService::?$GetSetImpl  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063bdb0
//
// 0063bdb0  6aff                 push -1
// 0063bdb2  6878a67d00           push 0x7da678
// 0063bdb7  64a100000000         mov eax, dword ptr fs:[0]
// 0063bdbd  50                   push eax
// 0063bdbe  64892500000000       mov dword ptr fs:[0], esp
// 0063bdc5  51                   push ecx
// 0063bdc6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063bdca  56                   push esi
// 0063bdcb  8bf1                 mov esi, ecx
// 0063bdcd  50                   push eax
// 0063bdce  89742408             mov dword ptr [esp + 8], esi
// 0063bdd2  e8b9f6ffff           call 0x63b490
// 0063bdd7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063bddf  e8bc48f8ff           call 0x5c06a0
// 0063bde4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063bde8  89461c               mov dword ptr [esi + 0x1c], eax
// 0063bdeb  c7062c9a8400         mov dword ptr [esi], 0x849a2c
// 0063bdf1  c74610209a8400       mov dword ptr [esi + 0x10], 0x849a20
// 0063bdf8  c74614189a8400       mov dword ptr [esi + 0x14], 0x849a18
// 0063bdff  c74620109a8400       mov dword ptr [esi + 0x20], 0x849a10
// 0063be06  c74624009a8400       mov dword ptr [esi + 0x24], 0x849a00
// 0063be0d  c74644f0998400       mov dword ptr [esi + 0x44], 0x8499f0
// 0063be14  c74664e0998400       mov dword ptr [esi + 0x64], 0x8499e0
// 0063be1b  c78684000000d0998400 mov dword ptr [esi + 0x84], 0x8499d0
// 0063be25  c786a4000000c0998400 mov dword ptr [esi + 0xa4], 0x8499c0
// 0063be2f  c786c4000000b0998400 mov dword ptr [esi + 0xc4], 0x8499b0
// 0063be39  8bc6                 mov eax, esi
// 0063be3b  5e                   pop esi
// 0063be3c  64890d00000000       mov dword ptr fs:[0], ecx
// 0063be43  83c410               add esp, 0x10
// 0063be46  c20400               ret 4

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
