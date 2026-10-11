// from server: 23% by atomic.potato
extern "C" {
    int __stdcall sub_98DEB8();
    int __cdecl sub_8E1800();
    int __cdecl sub_8E1100();
    int __cdecl sub_84D2A0();
    int __cdecl sub_84D2D0();
    int __cdecl sub_7F45F8();
}

struct CXTPToolTipContext_COffice2007ToolTip {
    void __thiscall f(int, int, int, int, int, int);
};

void CXTPToolTipContext_COffice2007ToolTip::f(int a, int b, int c, int d, int e, int g)
{
    int v1, v2, v3;
    int t1, t2, t3;
    int r1, r2, r3;
    char buf[8];

    sub_98DEB8();
    sub_98DEB8();
    v1 = sub_8E1800();
    r1 = sub_8E1100();
    sub_98DEB8();
    sub_98DEB8();
    v2 = sub_8E1800();
    r2 = sub_8E1100();
    sub_98DEB8();
    sub_98DEB8();
    v3 = sub_8E1800();
    r3 = sub_8E1100();

    if (r1 == -1) r1 = 0xffffff;
    if (r2 == -1) r2 = 0xefd9c9;
    if (r3 == -1) r3 = 0x767676;

    t1 = sub_84D2A0();
    sub_84D2D0();
    sub_7F45F8();
}
