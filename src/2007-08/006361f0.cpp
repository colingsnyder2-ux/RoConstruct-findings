// from server: 100% by colin
// roc 2007-08 006361f0  unit: CXTPControlComboBoxPopupBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006361f0
//
// 006361f0  56                   push esi
// 006361f1  8bf1                 mov esi, ecx
// 006361f3  e808ffffff           call 0x636100
// 006361f8  33c0                 xor eax, eax
// 006361fa  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00636200  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00636206  8986ec000000         mov dword ptr [esi + 0xec], eax
// 0063620c  c706fc597c00         mov dword ptr [esi], 0x7c59fc
// 00636212  c74654ec597c00       mov dword ptr [esi + 0x54], 0x7c59ec
// 00636219  c7465c8c597c00       mov dword ptr [esi + 0x5c], 0x7c598c
// 00636220  c786fc00000006000000 mov dword ptr [esi + 0xfc], 6
// 0063622a  8bc6                 mov eax, esi
// 0063622c  5e                   pop esi
// 0063622d  c3                   ret 

struct CXTPControlComboBoxPopupBar {
    void sub_636100();
    int field_0;
    char pad_4[0x50];
    int field_54;
    char pad_58[0x4];
    int field_5c;
    char pad_60[0x60];
    int field_c0;
    int field_c4;
    char pad_c8[0x24];
    int field_ec;
    char pad_f0[0xc];
    int field_fc;
    CXTPControlComboBoxPopupBar* construct();
};

CXTPControlComboBoxPopupBar* CXTPControlComboBoxPopupBar::construct() {
    sub_636100();
    field_c4 = 0;
    field_c0 = 0;
    field_ec = 0;
    field_0 = 0x7c59fc;
    field_54 = 0x7c59ec;
    field_5c = 0x7c598c;
    field_fc = 6;
    return this;
}
