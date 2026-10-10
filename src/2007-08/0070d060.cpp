// from server: 75% by colin
// roc 2007-08 0070d060 unit: CXTColorWnd size: 119 bytes

extern "C" int __stdcall GetClientRect(void* hwnd, void* rect);
extern "C" int __cdecl _ftol(double);

struct CXTColorWnd {
    void sub_70c9d0(int, int);
    void sub_70d060(int, int);
    char pad[0x20];
    void* hwnd;
    char pad2[0x78 - 0x24];
    double dbl78;
    int field80;
    int field84;
};

void CXTColorWnd::sub_70d060(int a, int b) {
    int rect[4];
    sub_70c9d0(a, b);
    if ((char)b) {
        GetClientRect(hwnd, rect);
        int w = rect[2] - rect[0];
        field80 = _ftol((double)w * dbl78);
        int h = rect[3] - rect[1];
        field84 = h - _ftol((double)h * dbl78);
    }
}
