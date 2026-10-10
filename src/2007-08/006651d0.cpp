// from server: 50% by colin
struct CRobloxTreeCtrl {
    int field0;
    int field4;
    char pad8[0x2C];
    int field34;
    char pad38[0x4];
    unsigned char field38;
    int sub_6304B4(int, int, int*);
    int sub_738412();
    int vtable_call_54(int, int, int);
    int vtable_call_58(int, int, int, int, int);
    int vtable_call_5c(int, int, int);
    int method(int, int, int, int);
};

int CRobloxTreeCtrl::method(int a1, int a2, int a3, int a4) {
    int local = 0;
    if (this->field4 == 0) {
        return 1;
    }
    int result = this->sub_6304B4(a1, a2, &local);
    if (result == 0) {
        this->vtable_call_5c(a1, a2, a3);
        return 1;
    }
    if ((local & 0x10) != 0) {
        return 1;
    }
    if (a3 != 0) {
        if ((this->sub_738412() & 0x100) != 0) {
            if ((local & 0x40) != 0) {
                return 1;
            }
        }
    }
    if ((local & 0x29) != 0) {
        this->vtable_call_5c(a1, a2, a3);
        return 1;
    }
    this->vtable_call_54(result, a3, a4);
    this->vtable_call_58(result, a3, a4, a1, a2);
    return this->field38;
}
