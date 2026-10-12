// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* count;
    ~Shared();
};

inline Shared::~Shared() {
    RefCount* p = count;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct FlagGuard {
    unsigned char* flag;
    unsigned char old;
    FlagGuard(unsigned char*);
    ~FlagGuard();
};

inline FlagGuard::FlagGuard(unsigned char* p) : flag(p), old(*p) {
    *p = 1;
}

inline FlagGuard::~FlagGuard() {
    *flag = old;
}

struct MonitorInfo {
    unsigned long size;
    long monitor[4];
    long work[4];
    unsigned long flags;
    char device[32];
};

extern "C" {
    extern int (__stdcall *GetMonitorInfoA)(void*, MonitorInfo*);
    extern long (__stdcall *ChangeDisplaySettingsExA)(
        const char*, void*, void*, unsigned long, void*);
}

Shared __cdecl getLogger();
void __cdecl logMessage(void*, int, const char*, ...);

struct CWrapperView {
    char padding[0xfa];
    unsigned char restoring;
    unsigned char alignment;
    void* monitor;

    void RestoreResolution();
    void prepare(int);
    void modifyStyle(unsigned long, unsigned long, unsigned int);
};

void CWrapperView::RestoreResolution() {
    FlagGuard guard(&restoring);
    if (!monitor) {
        logMessage(getLogger().object, 3,
                   "CMainFrame::RestoreResolution hm is NULL");
        return;
    }

    MonitorInfo info;
    info.size = 72;
    if (GetMonitorInfoA(monitor, &info)) {
        prepare(0);
        long result = ChangeDisplaySettingsExA(info.device, 0, 0, 0, 0);
        if (result)
            logMessage(getLogger().object, 3,
                       "CMainFrame::RestoreResolution ChangeDisplaySettings == %d",
                       result);
    }
    modifyStyle(0, 0x00c40000, 0);
}
