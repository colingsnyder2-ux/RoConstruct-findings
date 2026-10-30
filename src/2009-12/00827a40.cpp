// roc 2009-12 00827a40  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827a40
//
// 00827a40  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00827a46  50                   push eax
// 00827a47  e8c4ffffff           call 0x827a10
// 00827a4c  c3                   ret 
// copied from an identical function in another client (function ?func@CXTPReportControl@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct CXTPReportControl {
    char pad[0x94];
    int field_94;
    void sub_74cc20(int);
    void func();
};

void CXTPReportControl::func() {
    sub_74cc20(field_94);
}