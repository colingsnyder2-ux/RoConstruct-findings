// from server: 100% by king_originala
// roc 2008-06 0040f280  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f280
//
// 0040f280  33c0                 xor eax, eax
// 0040f282  56                   push esi
// 0040f283  8bf1                 mov esi, ecx
// 0040f285  894618               mov dword ptr [esi + 0x18], eax
// 0040f288  894610               mov dword ptr [esi + 0x10], eax
// 0040f28b  89460c               mov dword ptr [esi + 0xc], eax
// 0040f28e  c7460888d38000       mov dword ptr [esi + 8], 0x80d388
// 0040f295  6689461c             mov word ptr [esi + 0x1c], ax
// 0040f299  c70638d68000         mov dword ptr [esi], 0x80d638
// 0040f29f  c7460420d68000       mov dword ptr [esi + 4], 0x80d620
// 0040f2a6  c74608fcd58000       mov dword ptr [esi + 8], 0x80d5fc
// 0040f2ad  c74614d4d58000       mov dword ptr [esi + 0x14], 0x80d5d4
// 0040f2b4  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040f2ba  8b11                 mov edx, dword ptr [ecx]
// 0040f2bc  8b4204               mov eax, dword ptr [edx + 4]
// 0040f2bf  ffd0                 call eax
// 0040f2c1  8bc6                 mov eax, esi
// 0040f2c3  5e                   pop esi
// 0040f2c4  c20400               ret 4

struct Interface
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
};

struct S
{
    unsigned int table0;
    unsigned int table4;
    volatile unsigned int table8;
    unsigned int valueC;
    unsigned int value10;
    unsigned int table14;
    unsigned int value18;
    volatile unsigned short value1C;

    S* initialize(int);
};

S* S::initialize(int)
{
    value18 = 0;
    value10 = 0;
    valueC = 0;
    table8 = 0x80D388;
    value1C = 0;
    table0 = 0x80D638;
    table4 = 0x80D620;
    table8 = 0x80D5FC;
    table14 = 0x80D5D4;
    (*(Interface**)0x96C268)->slot1();
    return this;
}
