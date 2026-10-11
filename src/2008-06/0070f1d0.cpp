// from server: 81% by colin
struct CXTPStatusBar {
    char pad[0x34];
    int field34;
    char pad2[0x18];
    int field50;
    void Invalidate();
};

extern "C" int __stdcall sub_70f110(int* out);

extern "C" int __stdcall InvalidateRect(int hwnd, const void* rect, int erase);

void CXTPStatusBar::Invalidate()
{
    if (this == 0)
        return;
    int p = field50;
    if (p == 0)
        return;
    if (*(int*)(p + 0x20) == 0)
        return;
    if (field34 == 0)
        return;
    int rect[4];
    sub_70f110(rect);
    int q = field50;
    int hwnd = *(int*)(q + 0x20);
    InvalidateRect(hwnd, rect, 1);
}
