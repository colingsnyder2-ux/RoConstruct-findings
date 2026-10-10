// from server: 64% by colin
// roc 2007-08 006709e0  unit: CXTPToolBar::CControlButtonExpand  size: 202 bytes

struct CControlButtonExpand {
    char pad[0x16c];
    int field_0x16c;
    int sub_6709e0(CControlButtonExpand* other);
};

extern "C" int __stdcall sub_644710(int);
extern "C" int __stdcall sub_644720(int, int);
extern "C" int __stdcall sub_6704f0();
extern "C" int __stdcall sub_630202(int, int);

int CControlButtonExpand::sub_6709e0(CControlButtonExpand* other) {
    if (this->field_0x16c == 0)
        return 0;

    int vtable = *(int*)other;
    int (*fn)(CControlButtonExpand*) = *(int (**)(CControlButtonExpand*))(vtable + 0x8c);
    if (fn(other) == 0)
        return 0;

    int vtable2 = *(int*)other;
    int (*fn2)(CControlButtonExpand*) = *(int (**)(CControlButtonExpand*))(vtable2 + 0x8c);
    int saved = this->field_0x16c;
    if (saved == fn2(other))
        return 1;

    int count = sub_644710(saved);
    int i = 0;
    if (count > 0) {
        int temp = sub_6704f0();
        do {
            int item = sub_644720(this->field_0x16c, i);
            CControlButtonExpand* p = (CControlButtonExpand*)sub_630202(temp, item);
            if (p != 0) {
                if (p->sub_6709e0(other) != 0)
                    return 1;
                if (other->sub_6709e0(p) != 0)
                    return 1;
            }
            i++;
        } while (i < sub_644710(this->field_0x16c));
    }
    return 0;
}
