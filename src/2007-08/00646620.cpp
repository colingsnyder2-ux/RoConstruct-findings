// from server: 53% by colin
struct CXTPCommandBar {
    void* vtbl;
    char pad[0xcc - 4];
    void* field_cc;
    char pad2[0xf8 - 0xcc - 4];
    void* field_f8;
    char pad3[0x138 - 0xf8 - 4];
    int field_138;
    int field_13c;
    int field_140;
    int field_144;

    int method_178();
    int method_184();
    int method_19c(int, int);
    int method_110(void*, int, int, void*);
    int method_114(void*, int, int, void*);
    int method_644d40(int, int*, int*, int*, int*);
    int method_67a9a0(int, int);
    int method_738412();
    int method_632de0();
    int method_6a3a70();
    int DoSomething(int, int, int);
};

int CXTPCommandBar::DoSomething(int a, int b, int c) {
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;

    if (this->method_178() == 0)
        return 0;
    if ((this->method_738412() & 0x10000000) == 0)
        return 0;

    this->method_644d40(a, &local1, &local2, &local3, &local4);

    local5 = -1;

    int result = this->method_67a9a0(local1, local2);
    if (result != 0) {
        if (this->method_184() == 0) {
            if (this->field_cc != *(void**)(result + 0x80)) {
                int tmp = this->method_632de0();
                ((CXTPCommandBar*)tmp)->method_6a3a70();
            }
        }
        ((CXTPCommandBar*)result)->method_110(&local5, local1, local2, (void*)a);
    }

    if (((CXTPCommandBar*)a)->method_114(&local5, local1, local2, (void*)this) != 0) {
        this->field_138 = local1;
        this->field_13c = local2;
        this->field_140 = local3;
        this->field_144 = local4;
        this->method_19c(0, 1);
    }

    return a;
}
