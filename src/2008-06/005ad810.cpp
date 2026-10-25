// from server: 100% by king_originala
// roc 2008-06 005ad810  unit: RBX::Reflection::UTuple::?$holder  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad810
//
// 005ad810  6aff                 push -1
// 005ad812  68c8d37b00           push 0x7bd3c8
// 005ad817  64a100000000         mov eax, dword ptr fs:[0]
// 005ad81d  50                   push eax
// 005ad81e  64892500000000       mov dword ptr fs:[0], esp
// 005ad825  51                   push ecx
// 005ad826  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ad82a  56                   push esi
// 005ad82b  8bf1                 mov esi, ecx
// 005ad82d  50                   push eax
// 005ad82e  89742408             mov dword ptr [esp + 8], esi
// 005ad832  e839ffffff           call 0x5ad770
// 005ad837  d9ee                 fldz 
// 005ad839  8d8e38010000         lea ecx, [esi + 0x138]
// 005ad83f  dd9e30010000         fstp qword ptr [esi + 0x130]
// 005ad845  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ad84d  c706c49f8100         mov dword ptr [esi], 0x819fc4
// 005ad853  c74610b89f8100       mov dword ptr [esi + 0x10], 0x819fb8
// 005ad85a  c74614b09f8100       mov dword ptr [esi + 0x14], 0x819fb0
// 005ad861  c74620a89f8100       mov dword ptr [esi + 0x20], 0x819fa8
// 005ad868  c74624989f8100       mov dword ptr [esi + 0x24], 0x819f98
// 005ad86f  c74644889f8100       mov dword ptr [esi + 0x44], 0x819f88
// 005ad876  c74664789f8100       mov dword ptr [esi + 0x64], 0x819f78
// 005ad87d  c78684000000689f8100 mov dword ptr [esi + 0x84], 0x819f68
// 005ad887  c786a4000000589f8100 mov dword ptr [esi + 0xa4], 0x819f58
// 005ad891  c786c4000000489f8100 mov dword ptr [esi + 0xc4], 0x819f48
// 005ad89b  ff1560248000         call dword ptr [0x802460]
// 005ad8a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ad8a5  8bc6                 mov eax, esi
// 005ad8a7  5e                   pop esi
// 005ad8a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad8af  83c410               add esp, 0x10
// 005ad8b2  c20400               ret 4

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

extern void (__thiscall *stringConstructor)(void *);

struct Base {
    unsigned int *v0;
    char pad04[12];
    unsigned int *v10;
    unsigned int *v14;
    char pad18[8];
    unsigned int *v20;
    unsigned int *v24;
    char pad28[28];
    unsigned int *v44;
    char pad48[28];
    unsigned int *v64;
    char pad68[28];
    unsigned int *v84;
    char pad88[28];
    unsigned int *vA4;
    char padA8[28];
    unsigned int *vC4;
    char padC8[104];

    Base(int);
    ~Base();
};

struct S : Base {
    double value;
    char text[28];

    S(int);
};

S::S(int arg) : Base(arg), value(0.0)
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
    stringConstructor(text);
}
