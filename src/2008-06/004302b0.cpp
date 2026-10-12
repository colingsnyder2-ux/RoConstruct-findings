// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* (__stdcall *MonitorFromWindow)(void*, unsigned long);

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedHandle {
    void* object;
    RefCount* count;
    ~SharedHandle();
};

__forceinline SharedHandle::~SharedHandle()
{
    RefCount* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

SharedHandle __cdecl getService();
void __cdecl report(void*, int, const char*, ...);

struct CWrapperView {
    char padding0[0x20];
    void* window;
    char padding1[0xd8];
    void* monitor;
    void getMonitorInfo();
};

void CWrapperView::getMonitorInfo()
{
    monitor = MonitorFromWindow(window, 2);
    if (!monitor)
        report(getService().object, 2,
               "CMainFrameFrameWnd::getMonitorInfo MonitorFromWindow returned NULL");
}
