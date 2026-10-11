// from server: 79% by colin
struct CXTSplitterWnd
{
    unsigned char pad0[0x20];
    void* hwnd;
    unsigned char pad1[0x34];
    int field_58;
    int field_5c;
    int field_60;
    int field_64;
    unsigned char pad2[0x10];
    int field_78;
    int field_7c;
    int field_80;
    int field_84;
    int field_88;
    int field_8c;

    int f(void*, int);
};

struct RECT
{
    int left;
    int top;
    int right;
    int bottom;
};

struct POINT
{
    int x;
    int y;
};

extern "C" int __stdcall GetClientRect(void*, RECT*);
extern "C" int __stdcall InflateRect(RECT*, int, int);

extern int func_007bc028(void*);

int CXTSplitterWnd::f(void* a, int b)
{
    RECT rc;
    POINT pt;
    RECT rc2;
    int v;

    void* p = (void*)func_007bc028(a);
    if (p == 0)
        return 1;

    GetClientRect(hwnd, &rc);

    InflateRect(&rc, -field_78, -field_7c);

    ((void (__thiscall*)(CXTSplitterWnd*, POINT*))*(void**)(*(int*)this + 0x194))(this, &pt);

    if (field_8c != 0 && field_80 < field_58)
    {
        rc2.left = pt.x + field_64;
        rc2.top = rc.left;
        rc2.right = rc.top;
        rc2.bottom = rc.right;
        ((void (__thiscall*)(CXTSplitterWnd*, void*, int, RECT*))*(void**)(*(int*)this + 0x154))(this, p, 0, &rc2);
    }

    if (field_88 != 0 && field_84 < field_5c)
    {
        rc2.left = rc.left;
        rc2.top = pt.y + field_60;
        rc2.right = rc.top;
        rc2.bottom = rc.right;
        ((void (__thiscall*)(CXTSplitterWnd*, void*, int, RECT*))*(void**)(*(int*)this + 0x154))(this, p, 0, &rc2);
    }

    ((void (__thiscall*)(CXTSplitterWnd*, void*, int, int))*(void**)(*(int*)this + 0x1a4))(this, p, rc.top, rc.right);

    return 1;
}
