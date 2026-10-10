// from server: 68% by colin
struct CXTPControlComboBoxPopupBar {
    int field_0;
    char pad_4[0x17c];
    void* field_180;
    int method(int, int);
};

int CXTPControlComboBoxPopupBar::method(int a, int b) {
    if (field_180 == 0) {
        return ((int (__thiscall*)(CXTPControlComboBoxPopupBar*, int, int))0x647530)(this, a, b);
    }
    if (a == 0x1b) {
        int (*fn)(void) = *(int (**)(void))((*(int*)field_180) + 0x74);
        if (fn() != 0) {
            return 0;
        }
        return ((int (__thiscall*)(CXTPControlComboBoxPopupBar*, int, int))0x647530)(this, 0x1b, b);
    }
    if (a == 9) {
        return 0;
    }
    int (*fn2)(CXTPControlComboBoxPopupBar*, int, int, int) = *(int (**)(CXTPControlComboBoxPopupBar*, int, int, int))((*(int*)this) + 0x210);
    return fn2(this, (int)field_180, a, b);
}
