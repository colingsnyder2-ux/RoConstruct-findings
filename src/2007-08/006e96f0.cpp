// from server: 19% by colin
typedef void* HDC;
typedef int BOOL;
typedef struct { long left, top, right, bottom; } RECT;

extern "C" BOOL __stdcall InflateRect(RECT* lprc, int dx, int dy);

extern "C" int __stdcall sub_69EC10(int);
extern "C" void __stdcall sub_69E890(int, int, int, int, int, int);
extern "C" void __stdcall sub_6E77B0(int, int, int, int, int, int);
extern "C" void __stdcall sub_680060(int, int, int);
extern "C" void __stdcall sub_7383E8(int, int);
extern "C" void __stdcall sub_630250(int, int);
extern "C" void __stdcall sub_680430(int);
extern "C" void __stdcall sub_77DDAC(int);
extern "C" void __stdcall sub_77DDBC(int);

struct CXTPDockingPaneNativeXPTheme
{
    void DrawPane(HDC hdc, int x, int y, int cx, int cy, int state);
};

void CXTPDockingPaneNativeXPTheme::DrawPane(HDC hdc, int x, int y, int cx, int cy, int state)
{
    int* pThis = (int*)this;
    int* pTheme = (int*)((char*)this + 0x1d4);

    if (sub_69EC10((int)pTheme) == 0)
    {
        sub_6E77B0((int)this, x, y, cx, cy, state);
        return;
    }

    int flag = 0;
    if (pThis[9] != 0 && *(int*)(state + 0xdc) != 0)
        flag = 1;

    int border = flag ? 1 : 2;

    int rect[4];
    rect[0] = x;
    rect[1] = y;
    rect[2] = x + 3;
    rect[3] = cy;

    int hwnd = (state != 0) ? *(int*)(state + 4) : 0;
    sub_69E890((int)pTheme, hwnd, 10, border, (int)rect, 0);

    rect[0] = x - 3;
    rect[1] = y;
    rect[2] = x;
    rect[3] = cy;
    hwnd = (state != 0) ? *(int*)(state + 4) : 0;
    sub_69E890((int)pTheme, hwnd, 11, border, (int)rect, 0);

    rect[0] = x;
    rect[1] = y - 3;
    rect[2] = x;
    rect[3] = cy;
    hwnd = (state != 0) ? *(int*)(state + 4) : 0;
    sub_69E890((int)pTheme, hwnd, 12, border, (int)rect, 0);

    int w = pThis[0x78 / 4];
    int right = cx - w - y - 5;
    int bottom = cy - right;

    rect[0] = x;
    rect[1] = y;
    rect[2] = bottom;
    rect[3] = cy;

    if (state != 0)
        hwnd = *(int*)(state + 4);
    else
        hwnd = 0;

    sub_680060((int)rect, hwnd, 0);

    sub_7383E8((int)rect, 1);

    sub_69E890((int)pTheme, rect[0], 2, border, (int)rect, 0);

    InflateRect((RECT*)rect, -3, 0);

    sub_77DDAC((int)rect);

    sub_630250((int)this, (int)rect);

    int* pExtra = (state != 0) ? (int*)(state + 0xe4) : 0;

    int vtable = *(int*)this;
    int (*fn)(int, int, int, int, int, int, int) = *(int (**)(int, int, int, int, int, int, int))(vtable + 0x84);
    fn((int)this, (int)pExtra, (int)rect, 0, flag, 0, 0);

    sub_77DDBC((int)rect);
    sub_680430((int)rect);
}
