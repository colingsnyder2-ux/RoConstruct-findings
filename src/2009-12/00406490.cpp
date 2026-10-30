// roc 2009-12 00406490  unit: VCApp::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406490
//
// 00406490  33c0                 xor eax, eax
// 00406492  56                   push esi
// 00406493  8bf1                 mov esi, ecx
// 00406495  894618               mov dword ptr [esi + 0x18], eax
// 00406498  c74604c8f89900       mov dword ptr [esi + 4], 0x99f8c8
// 0040649f  894608               mov dword ptr [esi + 8], eax
// 004064a2  894610               mov dword ptr [esi + 0x10], eax
// 004064a5  c7067cfb9900         mov dword ptr [esi], 0x99fb7c
// 004064ab  c7460464fb9900       mov dword ptr [esi + 4], 0x99fb64
// 004064b2  c7460c48fb9900       mov dword ptr [esi + 0xc], 0x99fb48
// 004064b9  c7461414fb9900       mov dword ptr [esi + 0x14], 0x99fb14
// 004064c0  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 004064c6  8b01                 mov eax, dword ptr [ecx]
// 004064c8  8b5004               mov edx, dword ptr [eax + 4]
// 004064cb  ffd2                 call edx
// 004064cd  8bc6                 mov eax, esi
// 004064cf  5e                   pop esi
// 004064d0  c20400               ret 4
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