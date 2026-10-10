// from server: 59% by atomic.potato
typedef int HWND;
typedef int BOOL;

extern "C" BOOL __stdcall IsWindow(HWND);

struct CXTShadowHook
{
    int value;
    HWND window;
    int reserved;
    void Reset(HWND);
};

void CXTShadowHook::Reset(HWND window)
{
    int value = this->window;
    this->value = 0xA0FA3C;
    if (value && IsWindow(value))
        Reset(window);
}
