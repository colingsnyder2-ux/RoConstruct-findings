// from server: 90% by colin
// roc 2007-08 00653820  unit: CXTPReportView  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653820
//
// 00653820  56                   push esi
// 00653821  8bf1                 mov esi, ecx
// 00653823  e8124b0e00           call 0x73833a
// 00653828  8d4e2c               lea ecx, [esi + 0x2c]
// 0065382b  c706cc7d7c00         mov dword ptr [esi], 0x7c7dcc
// 00653831  ff15acdd7700         call dword ptr [0x77ddac]
// 00653837  83c8ff               or eax, 0xffffffff
// 0065383a  894624               mov dword ptr [esi + 0x24], eax
// 0065383d  894628               mov dword ptr [esi + 0x28], eax
// 00653840  894630               mov dword ptr [esi + 0x30], eax
// 00653843  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0065384a  c7463408020000       mov dword ptr [esi + 0x34], 0x208
// 00653851  8bc6                 mov eax, esi
// 00653853  5e                   pop esi
// 00653854  c3                   ret 

struct CXTPReportView {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    CXTPReportView* construct();
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_77ddac();

CXTPReportView* CXTPReportView::construct()
{
    sub_73833a();
    this->field_0 = 0x7c7dcc;
    sub_77ddac();
    this->field_24 = -1;
    this->field_28 = -1;
    this->field_30 = -1;
    this->field_20 = 0;
    this->field_34 = 0x208;
    return this;
}
