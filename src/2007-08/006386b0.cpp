// from server: 45% by colin
// roc 2007-08 006386b0  unit: CXTPControlComboBox  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006386b0

extern "C" {
    void __stdcall sub_77DD98();
    void __stdcall sub_77DCB8();
    void __stdcall sub_77DDB8();
    void __stdcall sub_77DDBC();
}

struct CXTPControlComboBox {
    void sub_636BE0(void*);
    void* sub_635E50(void*);
    void SetCurSel(int);
};

void CXTPControlComboBox::SetCurSel(int n) {
    void* p1 = 0;
    void* p2 = 0;
    sub_636BE0(&p1);
    void* p3 = sub_635E50(&p2);
    sub_77DD98();
    sub_77DCB8();
    void* p4;
    if (p3 == 0) {
        p4 = (void*)0x785954;
    } else {
        sub_77DD98();
        p4 = p3;
    }
    sub_77DDB8();
    sub_77DDBC();
    sub_77DDBC();
}
