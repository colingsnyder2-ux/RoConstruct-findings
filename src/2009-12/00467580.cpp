// from server: 70% by atomic.potato
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef int BOOL;
typedef void *HWND;
typedef unsigned int WPARAM;
typedef long LPARAM;

extern "C" BOOL __stdcall PostMessageA(HWND, UINT, WPARAM, LPARAM);

struct RenderRequestJob
{
    HWND hwnd;
    unsigned char pending;
    int renderMessage;
    int RenderRequest();
};

int RenderRequestJob::RenderRequest()
{
    renderMessage = renderMessage;
    pending = 0;
    PostMessageA((HWND)renderMessage, 0x484, 0, 0);
    return 1;
}
