// from server: 94% by atomic.potato
typedef unsigned int UINT;
typedef unsigned long WPARAM;
typedef long LPARAM;
typedef int BOOL;
typedef void* HWND;

extern "C" BOOL __declspec(dllimport) __stdcall PostMessageA(HWND, UINT, WPARAM, LPARAM);

struct CRobloxWnd
{
    unsigned char pad0[0x1e0];
    unsigned char flag;
    unsigned char pad1[3];
    HWND window;
    int RenderRequestJob();
};

int CRobloxWnd::RenderRequestJob()
{
    window;
    flag = 0;
    PostMessageA(window, 0x484, 0, 0);
    return 1;
}
