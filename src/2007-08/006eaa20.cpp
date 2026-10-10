// from server: 45% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTPDockingPaneDefaultTheme {
    void DrawPane(HDC hdc, int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" int __stdcall sub_6E54B0(int);
extern "C" int __stdcall sub_6308B0(int, int);
extern "C" int __stdcall sub_6EA1D0(int);
extern "C" int __stdcall sub_6EA200(int, int, int, int);
extern "C" int __stdcall sub_6E8600(int, int, int, int, int, int, int, int, int);

void CXTPDockingPaneDefaultTheme::DrawPane(HDC hdc, int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    int v1 = (a == 0) ? 3 : 2;
    int v2 = sub_6E54B0(v1);
    int v3;
    sub_6308B0(v2, (int)&v3);
    if (i != 0) {
        d -= 2;
    } else {
        c -= 2;
    }
    int v4 = sub_6E54B0(0x12);
    int v5 = sub_6E54B0(0xE);
    int v6 = sub_6E54B0(0);
    int v7 = sub_6E54B0(i);
    int v8 = *(int*)((char*)this + 0x2C);
    int v9 = sub_6EA1D0(v3);
    int v10;
    if (v9 != 0) {
        v10 = (a != 0) ? 0x13 : 0x11;
    } else {
        v10 = 0x11;
    }
    int v11 = sub_6E54B0(v10);
    sub_6EA200(v11, v8, v7, v6);
    if (i != 0) {
        c += 1;
        d += 4;
    } else {
        c += 4;
        d += 1;
    }
    sub_6E8600(v3, v8, v7, v6, v5, v4, c, d, i);
}
