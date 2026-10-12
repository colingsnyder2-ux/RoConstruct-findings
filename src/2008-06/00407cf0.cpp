// from server: 100% by king_originala
// roc 2008-06 00407cf0  unit: VCApp::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407cf0
//
// 00407cf0  33c0                 xor eax, eax
// 00407cf2  56                   push esi
// 00407cf3  8bf1                 mov esi, ecx
// 00407cf5  894618               mov dword ptr [esi + 0x18], eax
// 00407cf8  c746040cb48000       mov dword ptr [esi + 4], 0x80b40c
// 00407cff  894608               mov dword ptr [esi + 8], eax
// 00407d02  894610               mov dword ptr [esi + 0x10], eax
// 00407d05  c7068cb58000         mov dword ptr [esi], 0x80b58c
// 00407d0b  c7460474b58000       mov dword ptr [esi + 4], 0x80b574
// 00407d12  c7460c58b58000       mov dword ptr [esi + 0xc], 0x80b558
// 00407d19  c746140cb58000       mov dword ptr [esi + 0x14], 0x80b50c
// 00407d20  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00407d26  8b01                 mov eax, dword ptr [ecx]
// 00407d28  8b5004               mov edx, dword ptr [eax + 4]
// 00407d2b  ffd2                 call edx
// 00407d2d  8bc6                 mov eax, esi
// 00407d2f  5e                   pop esi
// 00407d30  c20400               ret 4

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
