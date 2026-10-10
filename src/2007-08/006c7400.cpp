// from server: 46% by colin
extern "C" {
    int __stdcall sub_77DCD0();
    void __stdcall sub_77DDBC();
}

struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad_0000[0x9c];
    int field_009c;
    char pad_00a0[0xb8];
    int field_0158;
    char pad_015c[0xc];
    int field_0168;

    void sub_6C7070();
    int sub_6C6A60(void*);
    void sub_6C6E70(void*);
    void sub_6C6C40();
    void* sub_6C6E10(void*);
    void sub_6302EC(int);
    int sub_63A580();

    void func(int);
};

void CXTPCustomizeSheet_CCustomizeEdit::func(int arg) {
    if (arg == 2) {
        sub_6C7070();
        return;
    }
    if (arg == 0) {
        if (field_0168 != 0 && *(int*)(field_0168 + 0x20) != 0) {
            int v;
            if (field_009c == -1) {
                if (field_0158 != 0) {
                    v = sub_63A580();
                } else {
                    v = field_009c;
                }
            } else {
                v = field_009c;
            }
            sub_6302EC(v);
            sub_6C6C40();
        }
        return;
    }
    if (arg == 4) {
        char buf1[8];
        char buf2[8];
        char flag = 0;
        sub_6C6E10(buf1);
        int b = 1;
        if (sub_77DCD0()) {
            sub_6C6A60(buf2);
            b = 3;
            if (sub_77DCD0()) {
                flag = 1;
            } else {
                flag = 0;
            }
        } else {
            flag = 0;
        }
        if (b & 2) {
            b &= ~2;
            sub_77DDBC();
        }
        if (b & 1) {
            sub_77DDBC();
        }
        if (flag) {
            sub_6C6A60(&flag);
            sub_6C6E70(&flag);
            sub_77DDBC();
        }
    }
}
