// from server: 95% by colin
struct CXTPNewToolbarDlg {
    char pad[0x78];
    int field_78;
    void sub_630412();
    void* sub_6A0510(unsigned int flags);
};

struct Sub77DDBC {
    void method(int*);
};

extern "C" void __cdecl sub_62FC62(void*);

void* CXTPNewToolbarDlg::sub_6A0510(unsigned int flags) {
    ((Sub77DDBC*)&field_78)->method(&field_78);
    sub_630412();
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
