// from server: 36% by colin
extern "C" {
    int __stdcall func_0062feea(int);
    int __stdcall func_0062fe36();
    int __stdcall func_0062fe3c();
    int __stdcall func_006303fa(int, int, int);
    int __stdcall func_00631ad0(int, int);
    int __stdcall func_00632910(int, int);
    int __stdcall func_006b2e40(int);
    int __stdcall func_006b3010(int, int);
    int __stdcall func_0077dcd0(int);
    int __stdcall func_0077dd98(int);
    int __stdcall func_0077dcb8(int, int);
    int __stdcall func_0077ddbc(int);
    int __stdcall func_0077ddac(int);
    int __stdcall func_0077d5a4(int, int, int);
}

struct CXTPNewToolbarDlg {
    char pad[0x74];
    int field_74;
    int field_78;
    int field_7c;
    int field_80;
    void func_006a06c0();
};

void CXTPNewToolbarDlg::func_006a06c0()
{
    int local_18 = 0;
    int local_1c;
    int local_20;
    int local_24;
    int local_2c;
    int local_14 = 0;
    int i;
    int count;
    int item;
    int flag;

    func_0062feea(1);

    local_1c = (int)(this + 0x78);
    if (func_0077dcd0((int)(this + 0x78))) {
        func_006b2e40(func_006b3010(0x23cc, 0x10));
        return;
    }

    this->field_74 = 0xe800;
    count = *(int *)(this->field_80 + 0x84);
    local_18 = count;
    if (count <= 0) {
        func_0062fe36();
        return;
    }

    for (i = 0; i < local_18; i++) {
        item = func_00632910(this->field_80, i);
        if (this->field_7c == 0) {
            if (*(int *)(item + 0xd4) == this->field_74) {
                int newval = this->field_74 + 1;
                this->field_74 = newval;
                if (newval >= 0xe8ff) {
                    func_006b2e40(func_006b3010(0x10, 0x23cd));
                    func_0062fe3c();
                    return;
                }
                continue;
            }
        }

        if (this->field_7c == item) {
            flag = 0;
        } else {
            func_00631ad0(item, (int)&local_20);
            local_14 |= 1;
            local_2c = 0;
            int h = func_0077dd98((int)&local_20);
            if (func_0077dcb8((int)(this + 0x78), h) != 0) {
                flag = 0;
            } else {
                flag = 1;
            }
        }

        if (local_14 & 1) {
            local_14 &= ~1;
            local_2c = -1;
            func_0077ddbc((int)&local_20);
        }

        if (flag) {
            func_0077ddac((int)&local_18);
            local_2c = 1;
            int h2 = func_0077dd98((int)(this + 0x78));
            func_0077d5a4((int)&local_18, 0x23ce, h2);
            int h3 = func_0077dd98((int)&local_18);
            func_006303fa(h3, 0x10, 0);
            func_0077ddbc((int)&local_18);
            return;
        }
    }

    func_0062fe36();
}
