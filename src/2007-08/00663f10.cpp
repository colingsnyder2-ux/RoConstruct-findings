// from server: 86% by colin
// roc 2007-08 00663f10  unit: CXTPReportSelectedRows::USELECTED_BLOCK::?$CArray  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663f10
//
// 00663f10  56                   push esi
// 00663f11  8bf1                 mov esi, ecx
// 00663f13  e822440d00           call 0x73833a
// 00663f18  8d4e20               lea ecx, [esi + 0x20]
// 00663f1b  c7068c967c00         mov dword ptr [esi], 0x7c968c
// 00663f21  e86afeffff           call 0x663d90
// 00663f26  33c0                 xor eax, eax
// 00663f28  894634               mov dword ptr [esi + 0x34], eax
// 00663f2b  894638               mov dword ptr [esi + 0x38], eax
// 00663f2e  8bc6                 mov eax, esi
// 00663f30  5e                   pop esi
// 00663f31  c3                   ret 

struct CXTPReportSelectedRows {
    void* vtable;
    char pad[0x1c];
    int field_20;
    char pad2[0x10];
    int field_34;
    int field_38;
    CXTPReportSelectedRows* construct();
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_663d90();

CXTPReportSelectedRows* CXTPReportSelectedRows::construct()
{
    sub_73833a();
    this->vtable = (void*)0x7c968c;
    sub_663d90();
    this->field_34 = 0;
    this->field_38 = 0;
    return this;
}
