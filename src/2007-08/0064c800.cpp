// from server: 53% by colin
struct CXTPImageManagerIcon {
    char pad0[0x24];
    int field24;
    char pad1[0x1c];
    int field44;
    int field48;
    int field30;

    void sub_64c680(int);
    void sub_649180();
    void sub_6ebd30(int*, int*, int*);
    void sub_62ff20();
    void func();
};

void CXTPImageManagerIcon::func() {
    int local8;
    int localc;
    int local10;

    local8 = -(field30 != 0);

    if (local8 != 0) {
        do {
            sub_6ebd30(&local10, &localc, &local8);
            sub_64c680(localc);
        } while (local8 != 0);
    }

    int i = 0;
    if (field48 > 0) {
        do {
            if (i < 0 || i >= field48) {
                sub_62ff20();
            }
            ((CXTPImageManagerIcon*)((char*)this + 0x44))->sub_649180();
            i++;
        } while (i < field48);
    }
}
