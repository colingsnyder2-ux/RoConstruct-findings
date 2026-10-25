// from server: 100% by tester
// roc 2008-06 0062ddc0  unit: RBX::GeometryService  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062ddc0
//
// 0062ddc0  6aff                 push -1
// 0062ddc2  68589b7d00           push 0x7d9b58
// 0062ddc7  64a100000000         mov eax, dword ptr fs:[0]
// 0062ddcd  50                   push eax
// 0062ddce  64892500000000       mov dword ptr fs:[0], esp
// 0062ddd5  51                   push ecx
// 0062ddd6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062ddda  56                   push esi
// 0062dddb  8bf1                 mov esi, ecx
// 0062dddd  50                   push eax
// 0062ddde  89742408             mov dword ptr [esp + 8], esi
// 0062dde2  e869fbffff           call 0x62d950
// 0062dde7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062ddef  e87c26f9ff           call 0x5c0470
// 0062ddf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062ddf8  89461c               mov dword ptr [esi + 0x1c], eax
// 0062ddfb  c706c4698400         mov dword ptr [esi], 0x8469c4
// 0062de01  c74610b8698400       mov dword ptr [esi + 0x10], 0x8469b8
// 0062de08  c74614b0698400       mov dword ptr [esi + 0x14], 0x8469b0
// 0062de0f  c74620a8698400       mov dword ptr [esi + 0x20], 0x8469a8
// 0062de16  c7462498698400       mov dword ptr [esi + 0x24], 0x846998
// 0062de1d  c7464488698400       mov dword ptr [esi + 0x44], 0x846988
// 0062de24  c7466478698400       mov dword ptr [esi + 0x64], 0x846978
// 0062de2b  c7868400000068698400 mov dword ptr [esi + 0x84], 0x846968
// 0062de35  c786a400000058698400 mov dword ptr [esi + 0xa4], 0x846958
// 0062de3f  c786c400000048698400 mov dword ptr [esi + 0xc4], 0x846948
// 0062de49  8bc6                 mov eax, esi
// 0062de4b  5e                   pop esi
// 0062de4c  64890d00000000       mov dword ptr fs:[0], ecx
// 0062de53  83c410               add esp, 0x10
// 0062de56  c20400               ret 4

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
