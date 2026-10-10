// from server: 61% by colin
struct CPoint {
    int x;
    int y;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" void * __stdcall sub_00647fc0(void *, int, int, int);
extern "C" int __stdcall sub_006488c0(void *, void *, int, int, int);

extern "C" void * __stdcall CreateCompatibleDC(void *);
extern "C" void * __stdcall SelectObject(void *, void *);
extern "C" int __stdcall BitBlt(void *, int, int, int, int, void *, int, int, unsigned long);
extern "C" int __stdcall DeleteDC(void *);
extern "C" int __stdcall DeleteObject(void *);

struct CXTPCommandBar {
    int method(CRect *rc, int a, int b, int c, int d);
};

int CXTPCommandBar::method(CRect *rc, int a, int b, int c, int d)
{
    int w = rc->right - rc->left;
    int h = rc->bottom - rc->top;
    void *mem = sub_00647fc0((void *)a, w, h, 0);
    void *dc = 0;
    void *result = 0;
    if (mem != 0) {
        dc = CreateCompatibleDC((void *)a);
        if (dc != 0) {
            SelectObject(dc, mem);
            if (BitBlt(dc, 0, 0, rc->right - rc->left, rc->bottom - rc->top, (void *)a, rc->left, rc->top, 0xcc0020) != 0) {
                result = (void *)sub_006488c0((void *)b, mem, w, h, -1);
                if (result != 0) {
                    BitBlt((void *)a, rc->left, rc->top, rc->right - rc->left, rc->bottom - rc->top, dc, 0, 0, 0xcc0020);
                }
            }
        }
    }
    DeleteDC(dc);
    DeleteObject(mem);
    return (int)result;
}
