// from server: 89% by colin
// roc 2007-08 00716f30  unit: PAVCXTPRibbonGroup::?$CArray  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716f30
//
// 00716f30  56                   push esi
// 00716f31  8bf1                 mov esi, ecx
// 00716f33  e802140200           call 0x73833a
// 00716f38  8d4e20               lea ecx, [esi + 0x20]
// 00716f3b  c7061cf37d00         mov dword ptr [esi], 0x7df31c
// 00716f41  e88affffff           call 0x716ed0
// 00716f46  33c0                 xor eax, eax
// 00716f48  894634               mov dword ptr [esi + 0x34], eax
// 00716f4b  894638               mov dword ptr [esi + 0x38], eax
// 00716f4e  8bc6                 mov eax, esi
// 00716f50  5e                   pop esi
// 00716f51  c3                   ret 

struct CXTPRibbonGroup
{
    void sub_73833a();
    void sub_716ed0();
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    CXTPRibbonGroup* construct();
};

CXTPRibbonGroup* CXTPRibbonGroup::construct()
{
    sub_73833a();
    field_0 = 0x7df31c;
    sub_716ed0();
    field_34 = 0;
    field_38 = 0;
    return this;
}
