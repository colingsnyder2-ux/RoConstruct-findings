// from server: 95% by colin
struct CXTPToolBar {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    void Func(int);
};

void CXTPToolBar::Func(int arg) {
    CXTPToolBar* p = this;
    do {
        int count = p->field_2c;
        int i = 0;
        if (count > 0) {
            do {
                CXTPToolBar* item;
                if (i >= 0 && i >= count) {
                    if (i >= p->field_2c) {
                        extern void __cdecl sub_62ff20();
                        sub_62ff20();
                    }
                    item = (CXTPToolBar*)((int*)p->field_28)[i];
                } else {
                    item = 0;
                }
                void (__thiscall *fn)(CXTPToolBar*, int) = *(void (__thiscall **)(CXTPToolBar*, int))((char*)(*(void**)item) + 0x12c);
                fn(item, arg);
                count = p->field_2c;
                i++;
            } while (i < count);
        }
        p = (CXTPToolBar*)p->field_3c;
    } while (p);
}
