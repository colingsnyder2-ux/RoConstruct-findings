// from server: 100% by colin
// roc 2007-08 006a6c00  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6c00
//
// 006a6c00  56                   push esi
// 006a6c01  57                   push edi
// 006a6c02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a6c06  81ffbf2f0000         cmp edi, 0x2fbf
// 006a6c0c  8bf1                 mov esi, ecx
// 006a6c0e  7505                 jne 0x6a6c15
// 006a6c10  e8bbffffff           call 0x6a6bd0
// 006a6c15  57                   push edi
// 006a6c16  8bce                 mov ecx, esi
// 006a6c18  e833dbf9ff           call 0x644750
// 006a6c1d  5f                   pop edi
// 006a6c1e  5e                   pop esi
// 006a6c1f  c20400               ret 4

struct CXTPMenuBar {
    void sub_6A6BD0();
    void sub_644750(unsigned int);
    void func(unsigned int);
};

void CXTPMenuBar::func(unsigned int arg) {
    if (arg == 0x2fbf) {
        sub_6A6BD0();
    }
    sub_644750(arg);
}
