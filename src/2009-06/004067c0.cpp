// roc 2009-06 004067c0  unit: VCApp::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004067c0
//
// 004067c0  33c0                 xor eax, eax
// 004067c2  56                   push esi
// 004067c3  8bf1                 mov esi, ecx
// 004067c5  894618               mov dword ptr [esi + 0x18], eax
// 004067c8  c7460488cd8a00       mov dword ptr [esi + 4], 0x8acd88
// 004067cf  894608               mov dword ptr [esi + 8], eax
// 004067d2  894610               mov dword ptr [esi + 0x10], eax
// 004067d5  c7063cd08a00         mov dword ptr [esi], 0x8ad03c
// 004067db  c7460424d08a00       mov dword ptr [esi + 4], 0x8ad024
// 004067e2  c7460c08d08a00       mov dword ptr [esi + 0xc], 0x8ad008
// 004067e9  c74614d4cf8a00       mov dword ptr [esi + 0x14], 0x8acfd4
// 004067f0  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 004067f6  8b01                 mov eax, dword ptr [ecx]
// 004067f8  8b5004               mov edx, dword ptr [eax + 4]
// 004067fb  ffd2                 call edx
// 004067fd  8bc6                 mov eax, esi
// 004067ff  5e                   pop esi
// 00406800  c20400               ret 4
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