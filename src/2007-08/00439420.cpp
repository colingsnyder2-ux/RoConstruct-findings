// from server: 42% by colin
extern "C" {
    int __stdcall sub_69AAF0(int, int, int);
    int __stdcall sub_698830(int, int);
    int __stdcall sub_63020E(int, int);
    int __stdcall sub_6778D0(int);
    int __stdcall sub_62FEF6(int);
    int __stdcall sub_44C9B0(int);
    int __stdcall sub_67D1E0(int, int, int, int, int, int);
    int __stdcall sub_44B9B0(int, int);
    int __stdcall sub_6303D0();
    int __stdcall sub_6342D0(int, int, int, int, int, int, int);
    int __stdcall sub_44B9A0(int);
    int __stdcall sub_438920(int, int);
    int __stdcall sub_6301E4(int);
    int __stdcall sub_438E50(int, int);
    int (__stdcall *g_77dcb8)(int, int);
    int (__stdcall *g_77ddbc)(int);
}

struct CPropertyGridItemBrickColor {
    char pad_000[0xb4];
    int field_b4;
    char pad_b8[0x170 - 0xb8];
    char field_170;
    int method_90();
    int method_e8();
    int method_64();
    int method_438e50(int);
    int func_439420(int);
};

int CPropertyGridItemBrickColor::func_439420(int arg)
{
    int result;
    int local18;
    int local20;
    int local24;
    int local30;
    int local38;
    int ebp;
    int edi;
    char bl;

    result = sub_69AAF0(field_b4, 5, arg);
    if (result != 1)
        return result;

    if (method_90() == 0)
        return 0;

    sub_698830((int)this, (int)&local18);
    sub_63020E(field_b4, (int)&local18);

    local20 = local20 - 0x9e;
    ebp = sub_6778D0(0);
    edi = sub_62FEF6(0x178);
    if (edi != 0) {
        sub_44C9B0(edi);
    } else {
        edi = 0;
    }

    sub_67D1E0(*(int*)(ebp + 0xf8), edi, 0, 0, -1, 0);

    sub_438E50((int)this, (int)&local38);
    bl = (g_77dcb8((int)&local38, 0x785954) != 0);
    g_77ddbc((int)&local38);

    if (bl) {
        sub_44B9B0(edi, method_e8());
    }

    result = sub_6303D0();
    if (result != 0) {
        result = (*(int (__stdcall **)(int))(*(int*)result + 0x7c))(result);
    } else {
        result = 0;
    }

    result = sub_6342D0(ebp, 0x88, local20, local24, result, 0, 0);
    if (result != 0) {
        if (*(char*)(edi + 0x170) != 0) {
            int tmp = sub_44B9A0(edi);
            sub_438920((int)&tmp, tmp);
            method_64();
        }
    }

    sub_6301E4(ebp);
    return result;
}
