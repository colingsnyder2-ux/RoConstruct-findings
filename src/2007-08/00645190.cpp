// from server: 44% by colin
struct CXTPCommandBar
{
    char pad0[0x20];
    void* field_0x20;
    char pad1[0xd8];
    int field_0xfc;
    int OnLButtonDown(int x, int y);
};

struct CRect
{
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint
{
    int x;
    int y;
};

extern "C" int __stdcall GetWindowRgn(void*, void*);
extern "C" int __stdcall PtInRegion(void*, int, int);
extern "C" int __stdcall PtInRect(const void*, int, int);
extern "C" void* __stdcall CreateRectRgn(int, int, int, int);

extern "C" void __stdcall sub_67FFA0(void*, void*);
extern "C" void __stdcall sub_630238(void*, void*);
extern "C" void __stdcall sub_41F680(void*);

int CXTPCommandBar::OnLButtonDown(int x, int y)
{
    CRect rect;
    CPoint pt;
    void* rgn;
    int result;

    sub_67FFA0(this, &rect);

    pt.x = x;
    pt.y = y;

    if (!GetWindowRgn(this->field_0x20, &pt))
        return 0;

    if (this->field_0xfc != 5)
        return 1;

    rgn = CreateRectRgn(0, 0, 0, 0);
    sub_630238(&rgn, 0);

    result = PtInRegion(rgn, pt.x, pt.y);
    if (result != 0 || result == 1)
    {
        sub_41F680(&rgn);
        return 1;
    }

    pt.x = x - rect.left;
    pt.y = y - rect.top;

    if (PtInRect(&rect, pt.x, pt.y))
    {
        sub_41F680(&rgn);
        return 0;
    }

    sub_41F680(&rgn);
    return 1;
}
