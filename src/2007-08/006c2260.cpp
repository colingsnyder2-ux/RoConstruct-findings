// from server: 17% by colin
struct CXTPWhidbeyTheme {
    void RefreshMetrics();
};

extern "C" {
    void __stdcall sub_6c1980();
    int __stdcall sub_668f70();
    int __stdcall sub_63cd70();
    void __stdcall sub_63cda0();
    int __stdcall sub_6684f0();
    int __stdcall sub_668510();
    int __stdcall sub_6686d0();
    int __stdcall sub_668930();
    int __stdcall sub_668d70();
    int __stdcall sub_668ec0();
    void __stdcall sub_6c0ac0();
}

void CXTPWhidbeyTheme::RefreshMetrics()
{
    sub_6c1980();
    int v1 = sub_668f70();
    sub_63cd70();
    sub_63cd70();
    sub_63cd70();
    sub_6686d0();
    sub_6684f0();
    int v2 = sub_668f70();
    sub_668930();
    if (v2 != 0) {
        sub_63cd70();
        sub_668ec0();
    }
    int v3 = sub_668f70();
    int v4 = sub_668d70();
    v4 -= 1;
    if (v4 == 0) {
        goto loc_6c2558;
    }
    v4 -= 1;
    if (v4 == 0) {
        goto loc_6c2489;
    }
    v4 -= 1;
    if (v4 != 0) {
        goto loc_6c25f5;
    }
    sub_6684f0();
    sub_6684f0();
    sub_6684f0();
    sub_6684f0();
    sub_6684f0();
    sub_6684f0();
    sub_63cda0();
    sub_6c0ac0();
    return;

loc_6c2489:
    sub_6684f0();
    sub_6684f0();
    sub_6684f0();
    sub_668ec0();
    sub_668510();
    sub_6684f0();
    sub_6c0ac0();
    return;

loc_6c2558:
    sub_6684f0();
    sub_6684f0();
    sub_6684f0();
    sub_668ec0();
    sub_668510();
    sub_6684f0();

loc_6c25f5:
    sub_6c0ac0();
}
