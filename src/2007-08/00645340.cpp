// from server: 73% by colin
// roc 2007-08 00645340  unit: CXTPControlComboBoxPopupBar  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00645340
//
// 00645340  8b542404             mov edx, dword ptr [esp + 4]
// 00645344  85d2                 test edx, edx
// 00645346  7508                 jne 0x645350
// 00645348  b857000780           mov eax, 0x80070057
// 0064534d  c20400               ret 4
// 00645350  83c1a4               add ecx, -0x5c
// 00645353  e8b8f3ffff           call 0x644710
// 00645358  8902                 mov dword ptr [edx], eax
// 0064535a  33c0                 xor eax, eax
// 0064535c  c20400               ret 4

struct CXTPControlComboBoxPopupBar {
    int sub_644710();
    int GetSite(int* p);
};

int CXTPControlComboBoxPopupBar::GetSite(int* p) {
    if (p == 0)
        return (int)0x80070057;
    *p = (this - 0x17)->sub_644710();
    return 0;
}
