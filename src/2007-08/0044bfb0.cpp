// from server: 68% by colin
struct CRobloxControlColorSelector {
    char pad_0x00[0x9c];
    int field_0x9c;
    char pad_0xa0[0x158 - 0xa0];
    void* field_0x158;
    char pad_0x15c[0x16c - 0x15c];
    int field_0x16c;

    int sub_44bbd0(int, int);
    void sub_63a580();
    void sub_63c1b0(int, int, int, int);
    int method_44bfb0(int, int, int);
};

int CRobloxControlColorSelector::method_44bfb0(int a1, int a2, int a3) {
    int eax = this->field_0x9c;
    if (eax == -1) {
        void* ecx = this->field_0x158;
        if (ecx != 0) {
            this->sub_63a580();
            eax = this->field_0x9c;
        }
    }
    if (eax == 0) {
        return 0;
    }
    int result = this->sub_44bbd0(a2, a3);
    if (result == -1) {
        return 0;
    }
    this->field_0x16c = result;
    if (a1 == 0) {
        this->sub_63c1b0(0, 0, 0, 0);
        this->field_0x16c = -1;
        return 0;
    }
    int (*fn)(void*) = *(int (**)(void*))((*(int*)this) + 0x98);
    fn(this);
    this->field_0x16c = -1;
    return 0;
}
