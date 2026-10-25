// from server: 100% by tester
// roc 2011-06 0082fb70  unit: CXTPReportView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fb70
//
// 0082fb70  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 0082fb76  50                   push eax
// 0082fb77  e8c4ffffff           call 0x82fb40
// 0082fb7c  c3                   ret 

struct CXTPReportControl {
    char pad[0x94];
    int field_94;
    void sub_74cc20(int);
    void func();
};

void CXTPReportControl::func() {
    sub_74cc20(field_94);
}
