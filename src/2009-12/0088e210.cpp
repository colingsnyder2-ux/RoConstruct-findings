// from server: 86% by atomic.potato
typedef int BOOL;
typedef void *HWND;
typedef void *HACCEL;
typedef void *LPMSG;

extern "C" BOOL __stdcall TranslateAcceleratorA(HWND, HACCEL, LPMSG);

struct S
{
    int f(int, int);
};

int S::f(int a, int b)
{
    if (*((int *)this + 10) <= 0)
    {
        int (*p)(void) = *(int (**)(void))(*(int *)this + 0x74);
        int h = p();
        if (h != 0)
        {
            if (TranslateAcceleratorA((HWND)a, (HACCEL)h, (LPMSG)b) != 0)
                return 1;
        }
    }

    return 0;
}
