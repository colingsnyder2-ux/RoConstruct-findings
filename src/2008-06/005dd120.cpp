// from server: 100% by king_originala
// roc 2008-06 005dd120  unit: RBX::VMessage::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd120
//
// 005dd120  6aff                 push -1
// 005dd122  68167d7c00           push 0x7c7d16
// 005dd127  64a100000000         mov eax, dword ptr fs:[0]
// 005dd12d  50                   push eax
// 005dd12e  64892500000000       mov dword ptr fs:[0], esp
// 005dd135  51                   push ecx
// 005dd136  56                   push esi
// 005dd137  8bf1                 mov esi, ecx
// 005dd139  6814db8300           push 0x83db14
// 005dd13e  89742408             mov dword ptr [esp + 8], esi
// 005dd142  e8a9feffff           call 0x5dcff0
// 005dd147  33c9                 xor ecx, ecx
// 005dd149  83c8ff               or eax, 0xffffffff
// 005dd14c  894c2410             mov dword ptr [esp + 0x10], ecx
// 005dd150  898634010000         mov dword ptr [esi + 0x134], eax
// 005dd156  898638010000         mov dword ptr [esi + 0x138], eax
// 005dd15c  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 005dd162  8d8e40010000         lea ecx, [esi + 0x140]
// 005dd168  c644241001           mov byte ptr [esp + 0x10], 1
// 005dd16d  c706d4da8300         mov dword ptr [esi], 0x83dad4
// 005dd173  c74610c8da8300       mov dword ptr [esi + 0x10], 0x83dac8
// 005dd17a  c74614c0da8300       mov dword ptr [esi + 0x14], 0x83dac0
// 005dd181  c74620b8da8300       mov dword ptr [esi + 0x20], 0x83dab8
// 005dd188  c74624a8da8300       mov dword ptr [esi + 0x24], 0x83daa8
// 005dd18f  c7464498da8300       mov dword ptr [esi + 0x44], 0x83da98
// 005dd196  c7466488da8300       mov dword ptr [esi + 0x64], 0x83da88
// 005dd19d  c7868400000078da8300 mov dword ptr [esi + 0x84], 0x83da78
// 005dd1a7  c786a400000068da8300 mov dword ptr [esi + 0xa4], 0x83da68
// 005dd1b1  c786c400000058da8300 mov dword ptr [esi + 0xc4], 0x83da58
// 005dd1bb  c7863001000040da8300 mov dword ptr [esi + 0x130], 0x83da40
// 005dd1c5  ff1560248000         call dword ptr [0x802460]
// 005dd1cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dd1cf  8bc6                 mov eax, esi
// 005dd1d1  5e                   pop esi
// 005dd1d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005dd1d9  83c410               add esp, 0x10
// 005dd1dc  c3                   ret 

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
extern unsigned int table130[];
extern const char name[];

typedef void (__thiscall *StringConstructor)(void*);
extern StringConstructor stringConstructor;

struct Base {
    unsigned int* v0;
    char pad04[12];
    unsigned int* v10;
    unsigned int* v14;
    char pad18[8];
    unsigned int* v20;
    unsigned int* v24;
    char pad28[28];
    unsigned int* v44;
    char pad48[28];
    unsigned int* v64;
    char pad68[28];
    unsigned int* v84;
    char pad88[28];
    unsigned int* vA4;
    char padA8[28];
    unsigned int* vC4;
    char padC8[104];
    unsigned int* v130;

    Base(const char*);
    ~Base();
};

struct Data {
    int first;
    int second;
    int third;

    Data();
    ~Data();
};

inline Data::Data() : first(-1), second(-1), third(0)
{
}

struct S : Base {
    Data data;
    char text[28];

    S();
};

S::S() : Base(name), data()
{
    v0 = table0;
    v10 = table10;
    v14 = table14;
    v20 = table20;
    v24 = table24;
    v44 = table44;
    v64 = table64;
    v84 = table84;
    vA4 = tableA4;
    vC4 = tableC4;
    v130 = table130;
    stringConstructor(text);
}
