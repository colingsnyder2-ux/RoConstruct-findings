// from server: 67% by colin
// roc 2007-08 006a7c10  unit: CXTPRibbonBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7c10
//
// 006a7c10  e82bfeffff           call 0x6a7a40
// 006a7c15  85c0                 test eax, eax
// 006a7c17  7509                 jne 0x6a7c22
// 006a7c19  39818c020000         cmp dword ptr [ecx + 0x28c], eax
// 006a7c1f  7501                 jne 0x6a7c22
// 006a7c21  c3                   ret 
// 006a7c22  b801000000           mov eax, 1
// 006a7c27  c3                   ret 

struct CXTPRibbonBar {
    char pad[0x28c];
    int field_0x28c;
    int sub_6a7a40();
    int method_6a7c10();
};

int CXTPRibbonBar::method_6a7c10() {
    if (sub_6a7a40() == 0 && field_0x28c == 0)
        return 0;
    return 1;
}
