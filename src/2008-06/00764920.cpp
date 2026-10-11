// from server: 30% by colin




extern "C" {
    int __stdcall InflateRect(void*, int, int);
}

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

struct CXTPDockingPaneGripperedTheme {
    char pad0[0x24];
    int field24;
    char pad28[0x50];
    int field78;
    void DrawGripper(CRect* rc, int flags, int a, int b, int c, int d);
};

extern "C" int __stdcall sub_7625D0(int);
extern "C" void __stdcall sub_6A1358(void*, void*, void*);
extern "C" void __stdcall sub_6A135E(void*, void*, void*);
extern "C" void __stdcall sub_6F7B90(void*, void*, void*);
extern "C" void __stdcall sub_6F7DA0(void*);
extern "C" void __stdcall sub_7BC022(void*, int);
extern "C" void __stdcall sub_6A0C7A(void*, void*);
extern "C" void (__thiscall *g_803F04)(void*);
extern "C" void (__stdcall *g_803F14)(void*);
extern "C" void (__stdcall *g_802D28)(int, int, void*);

void CXTPDockingPaneGripperedTheme::DrawGripper(CRect* rc, int flags, int a, int b, int c, int d)
{
    CRect r1;
    CRect r2;
    CPoint pt;
    int tmp;

    sub_7625D0(0xF);
    sub_6A1358(rc, &r1, &tmp);
    g_802D28(-1, -1, &r1);

    sub_7625D0(0x10);
    sub_7625D0(0x14);
    sub_6A1358(rc, &r2, &tmp);
    g_802D28(-1, -1, &r2);

    sub_7625D0(0xF);
    sub_6A1358(rc, &pt, &tmp);

    int w = r2.right - r2.left - this->field78 - 3;
    r2.left = r2.right - w;

    if (rc != 0)
        rc = (CRect*)rc->top;

    sub_6F7B90(&pt, rc, &r1);

    sub_7BC022(&r1, 1);

    sub_7625D0(0xF);
    sub_6A135E(&r1, &pt, &tmp);

    g_803F04(&r1);

    sub_6A0C7A(rc, &r1);

    r1.left += 1;
    r1.right -= 1;
    r1.top += 2;
    r1.bottom -= 2;

    int cond = 0;
    if (this->field24 != 0 && rc != 0 && ((char*)rc)[0xF0] != 0)
        cond = 1;

    void* p = 0;
    if (rc != 0)
        p = (char*)rc + 0xF8;

    void (__stdcall *fn)(void*, int, void*, void*, void*) = *(void (__stdcall**)(void*, int, void*, void*, void*))(*(int*)this + 0x84);
    fn(this, cond, p, &r1, 0);

    g_803F14(&r1);
    sub_6F7DA0(&r2);
}
