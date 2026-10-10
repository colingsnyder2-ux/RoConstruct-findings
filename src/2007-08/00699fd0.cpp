// from server: 25% by colin
struct CXTPPropertyGridItems {
    void dtor_body();
    void sub_20_dtor();
    void sub_0_dtor();
    int field0;
    char pad[0x1c];
    int field20;
};

void CXTPPropertyGridItems::dtor_body() {
    field0 = 0x7d16fc;
    sub_0_dtor();
    sub_20_dtor();
    sub_0_dtor();
}

void CXTPPropertyGridItems::sub_0_dtor() {
    extern void __stdcall sub_63069a(void*);
    sub_63069a(this);
}

void CXTPPropertyGridItems::sub_20_dtor() {
    extern void __stdcall sub_6992c0(void*);
    sub_6992c0(&field20);
}
