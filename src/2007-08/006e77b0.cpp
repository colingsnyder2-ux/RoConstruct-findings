// from server: 37% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTPSize {
    int cx;
    int cy;
};

struct CXTPRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CXTPDockingPaneGripperedTheme {
    void* vtbl;
    char pad[0x20];
    int field24;
    char pad2[0x50];
    int field78;
    char pad3[0x60];
    int fieldDC;
    char pad4[4];
    int fieldE4;

    void Paint(HDC hdc, CXTPRect* rc, int a3, int a4, int a5, int a6);
};

extern "C" {
    void* __stdcall sub_6E54B0(int);
    void __stdcall sub_6308AA(void*, void*);
    void __stdcall sub_6308B0(void*, void*);
    void __stdcall sub_680060(void*, void*, void*);
    void __stdcall sub_680430(void*);
    void __stdcall sub_7383E8(void*, int);
    void __stdcall sub_630250(void*, void*);
    void __stdcall sub_77DDAC(void*);
    void __stdcall sub_77DDBC(void*);
    void __stdcall sub_77ED90(void*, int, int, void*);
}

void CXTPDockingPaneGripperedTheme::Paint(HDC hdc, CXTPRect* rc, int a3, int a4, int a5, int a6)
{
    CXTPRect r;
    CXTPRect r2;
    CXTPRect r3;
    void* p;
    int x, y, w, h;
    int flag;
    int* pdc;
    int* pdc2;
    void* obj;
    int v;

    sub_6E54B0(0);
    sub_6E54B0(0xF);
    sub_6308AA(hdc, &r);
    sub_77ED90(&r, -1, -1, 0);
    sub_6E54B0(0x10);
    sub_6E54B0(0x14);
    sub_6308AA(hdc, &r2);
    sub_77ED90(&r2, -1, -1, 0);
    sub_6E54B0(0xF);
    sub_6308AA(hdc, &r3);

    x = r.left;
    y = r.top;
    w = r.right;
    h = r.bottom;
    v = this->field78;
    w = w - x - v - 3;
    h = h - w;

    if (hdc) {
        pdc = (int*)((char*)hdc + 4);
    } else {
        pdc = 0;
    }

    sub_680060(&r, pdc, &r3);

    flag = 1;
    sub_7383E8(&r, flag);

    sub_6E54B0(0xF);
    sub_6308B0(&r, &r3);

    sub_77DDAC(&r);
    sub_630250(hdc, &r);

    r.left += flag;
    r.right -= flag;
    r.top += 2;
    r.bottom -= 2;

    if (this->field24 != 0 && ((CXTPDockingPaneGripperedTheme*)hdc)->fieldDC != 0) {
        v = flag;
    } else {
        v = 0;
    }

    if (hdc) {
        pdc2 = (int*)((char*)hdc + 0xE4);
    } else {
        pdc2 = 0;
    }

    obj = (void*)((char*)this + 0x84);
    sub_77DDBC(&r);
    sub_680430(&r);
}
