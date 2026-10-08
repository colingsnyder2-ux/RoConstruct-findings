// from server: 100% by colin
// roc 2007-08 006a7690  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7690
//
// 006a7690  56                   push esi
// 006a7691  8bf1                 mov esi, ecx
// 006a7693  e8c82d0200           call 0x6ca460
// 006a7698  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a769c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a76a0  898668010000         mov dword ptr [esi + 0x168], eax
// 006a76a6  c706bc467d00         mov dword ptr [esi], 0x7d46bc
// 006a76ac  c746205c467d00       mov dword ptr [esi + 0x20], 0x7d465c
// 006a76b3  898e70010000         mov dword ptr [esi + 0x170], ecx
// 006a76b9  c7866c01000000000000 mov dword ptr [esi + 0x16c], 0
// 006a76c3  8bc6                 mov eax, esi
// 006a76c5  5e                   pop esi
// 006a76c6  c20800               ret 8

struct CXTPRibbonBar {
    char pad[0x168];
    int field_168;
    int field_16c;
    int field_170;
    void sub_6ca460();
    CXTPRibbonBar* init(int a, int b);
};

CXTPRibbonBar* CXTPRibbonBar::init(int a, int b) {
    sub_6ca460();
    field_168 = b;
    *(int*)this = 0x7d46bc;
    *(int*)((char*)this + 0x20) = 0x7d465c;
    field_170 = a;
    field_16c = 0;
    return this;
}
