// from server: 78% by atomic.potato
typedef int BOOL;
typedef void HWND;
typedef int RECT;

extern "C" void G1_func_009ccbe8(void *, int, int, int);
extern "C" BOOL __stdcall InvalidateRect(HWND *, const RECT *, BOOL);

struct S
{
    int f(int a, int b, int c);
    int pad[8];
};

int S::f(int a, int b, int c)
{
    G1_func_009ccbe8(this, a, c, b);
    InvalidateRect((HWND *)pad[7], (const RECT *)0, 1);
    return 0;
}
