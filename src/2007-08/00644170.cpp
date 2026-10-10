// from server: 50% by colin
struct CXTPCommandBar {
    char pad_0[0xf4];
    int field_0xf4;
    char pad_0xf8[0xfc - 0xf8];
    int field_0xfc;
    char pad_100[0x174 - 0x100];
    int field_0x174;
    int method_63023e();
    int method_643980();
    int method_738400(int);

    int method_644170(int arg);
};

extern "C" int __stdcall sub_6301e4(int);
extern "C" int __stdcall sub_632200(int);
extern "C" int __stdcall sub_6a0960(int, int);
extern "C" int __stdcall InterlockedIncrement(int*);

int CXTPCommandBar::method_644170(int arg)
{
    int result = method_63023e();
    if (result == -1) {
        return 0;
    }
    int obj = method_643980();
    if (field_0xfc != 6) {
        if (obj == 0) {
            goto label_6441e2;
        }
        sub_6a0960(*(int*)(obj + 0x4c), (int)this);
    }
    if (obj == 0) {
        goto label_6441e2;
    }
    {
        int temp = field_0x174;
        if (temp != 0) {
            sub_6301e4(temp);
            field_0x174 = 0;
        }
    }
    {
        int r = sub_632200(obj);
        field_0x174 = r;
        if (r == 0) {
            goto label_6441f4;
        }
        InterlockedIncrement((int*)(r + 4));
        return 0;
    }
label_6441e2:
    if (field_0xf4 != 2) {
        method_738400(1);
    }
label_6441f4:
    return 0;
}
