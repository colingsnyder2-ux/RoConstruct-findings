// from server: 37% by colin
struct CXTPDockingPaneDefaultTheme {
    void DrawPane(int, int, int, int, int, int);
};

extern "C" {
    __declspec(dllimport) int __stdcall InflateRect(void*, int, int);
}

extern "C" void* __stdcall sub_6E54B0(int);
extern "C" void __stdcall sub_6308AA(void*, void*, void*);
extern "C" void __stdcall sub_6308B0(void*, void*, void*);
extern "C" void __stdcall sub_680060(void*, void*, void*);
extern "C" void __stdcall sub_680430(void*);
extern "C" void __stdcall sub_7383E8(void*, int);
extern "C" void __stdcall sub_630250(void*, void*);

extern void* g_77ED90;
extern void* g_77DDAC;
extern void* g_77DDBC;

void CXTPDockingPaneDefaultTheme::DrawPane(int x, int y, int cx, int cy, int a5, int a6)
{
    void* p1;
    void* p2;
    void* p3;
    int v1, v2, v3, v4;
    int t;

    p1 = sub_6E54B0(0xf);
    sub_6308AA((void*)a5, &p2, p1);
    ((void (__stdcall*)(int, int, void*))g_77ED90)(-1, -1, &p2);

    p1 = sub_6E54B0(0x10);
    p3 = sub_6E54B0(0x14);
    sub_6308AA((void*)a5, &p2, p1);
    ((void (__stdcall*)(int, int, void*))g_77ED90)(-1, -1, &p2);

    p1 = sub_6E54B0(0xf);
    sub_6308AA((void*)a5, &p2, p1);

    v1 = x;
    v2 = y;
    v3 = cx;
    v4 = cy;
    t = v4 - v2 - *(int*)((char*)this + 0x78) - 3;
    v4 = v4 - t;

    if (a5 == 0)
        a5 = *(int*)(a5 + 4);

    sub_680060(&p2, (void*)a5, &v1);

    sub_7383E8(&p2, 1);

    p1 = sub_6E54B0(0xf);
    sub_6308B0(&p2, &v1, p1);

    v1 += 1;
    v3 -= 1;
    v2 += 2;
    v4 -= 2;

    int b = 0;
    if (*(int*)((char*)this + 0x24) != 0 && *(int*)((char*)a5 + 0xdc) != 0)
        b = 1;

    ((void (__stdcall*)(void*))g_77DDAC)(&p2);
    sub_630250((void*)a5, &p2);

    void* p4;
    if (a5 != 0)
        p4 = (void*)(a5 + 0xe4);
    else
        p4 = 0;

    void* vt = *(void**)this;
    void (__stdcall* fn)(void*, int, int, void*, void*, void*, void*) = *(void (__stdcall**)(void*, int, int, void*, void*, void*, void*))((char*)vt + 0x84);

    fn(this, b, 0, &v1, p4, &p2, 0);

    ((void (__stdcall*)(void*))g_77DDBC)(&p2);
    sub_680430(&v1);
}
