// roc 2010-06 00406390  unit: VCApp::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406390
//
// 00406390  33c0                 xor eax, eax
// 00406392  56                   push esi
// 00406393  8bf1                 mov esi, ecx
// 00406395  894618               mov dword ptr [esi + 0x18], eax
// 00406398  c746046804a000       mov dword ptr [esi + 4], 0xa00468
// 0040639f  894608               mov dword ptr [esi + 8], eax
// 004063a2  894610               mov dword ptr [esi + 0x10], eax
// 004063a5  c7062007a000         mov dword ptr [esi], 0xa00720
// 004063ab  c746040807a000       mov dword ptr [esi + 4], 0xa00708
// 004063b2  c7460cec06a000       mov dword ptr [esi + 0xc], 0xa006ec
// 004063b9  c74614b806a000       mov dword ptr [esi + 0x14], 0xa006b8
// 004063c0  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 004063c6  8b01                 mov eax, dword ptr [ecx]
// 004063c8  8b5004               mov edx, dword ptr [eax + 4]
// 004063cb  ffd2                 call edx
// 004063cd  8bc6                 mov eax, esi
// 004063cf  5e                   pop esi
// 004063d0  c20400               ret 4
// copied from an identical function in another client (function ?initialize@S@@QAEPAU1@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern char table_80b40c[];
extern char table_80b58c[];
extern char table_80b574[];
extern char table_80b558[];
extern char table_80b50c[];

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
};

extern Interface* global_96c268;

struct S {
    char* table0;
    char* volatile table4;
    unsigned int field8;
    char* table12;
    unsigned int field16;
    char* table20;
    unsigned int field24;

    S* initialize(int);
};

S* S::initialize(int)
{
    field24 = 0;
    table4 = table_80b40c;
    field8 = 0;
    field16 = 0;
    table0 = table_80b58c;
    table4 = table_80b574;
    table12 = table_80b558;
    table20 = table_80b50c;
    global_96c268->slot1();
    return this;
}