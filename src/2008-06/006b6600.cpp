// from server: 37% by atomic.potato
struct CXTPCommandBar {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x100 - 0x24];
    int state;
    int method(int, int);
};

extern "C" {
    int __stdcall GetWindowRgn(void*, void*);
    int __stdcall PtInRegion(void*, int, int);
    int __stdcall PtInRect(void*, int, int);
    void* __stdcall CreateRectRgn(int, int, int, int);
    void* __stdcall GetDC(void*);
    int __stdcall ReleaseDC(void*, void*);
}

struct Helper {
    void* p;
    int a;
    int b;
    Helper();
    ~Helper();
};

extern "C" void __stdcall sub_6f7ad0(Helper*, void*);
extern "C" void __stdcall sub_6a0c62(Helper*, void*);
extern "C" void __stdcall sub_4111a0(Helper*);

int CXTPCommandBar::method(int x, int y)
{
    Helper h;
    sub_6f7ad0(&h, this);
    if (GetWindowRgn(*(void**)((char*)this + 0x20), &h)) {
        if (this->state == 5) {
            void* rgn = CreateRectRgn(0, 0, 0, 0);
            sub_6a0c62(&h, rgn);
            int r = PtInRect(*(void**)((char*)this + 0x20), x, y);
            if (r == 0 || r == 1) {
                h.a = -1;
                sub_4111a0(&h);
                return 1;
            }
            int nx = x - h.a;
            int ny = y - h.b;
            int r2 = PtInRegion(rgn, nx, ny);
            h.a = -1;
            if (r2 != 0) {
                sub_4111a0(&h);
                return 1;
            }
            sub_4111a0(&h);
            return 0;
        }
        return 1;
    }
    return 0;
}
