// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    RefCount* count;
    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct RestoreFlag
{
    unsigned char* address;
    unsigned char saved;
    RestoreFlag(unsigned char& value);
    ~RestoreFlag();
};

inline RestoreFlag::RestoreFlag(unsigned char& value)
    : address(&value), saved(value)
{
    value = 1;
}

inline RestoreFlag::~RestoreFlag()
{
    *address = saved;
}

struct MonitorInfo
{
    unsigned long size;
    long monitor[4];
    long work[4];
    unsigned long flags;
    char device[32];
};

extern "C" int (__stdcall *GetMonitorInfoA)(void*, MonitorInfo*);
extern "C" long (__stdcall *ChangeDisplaySettingsExA)(
    const char*, void*, void*, unsigned long, void*);

extern Shared __cdecl getLogger();
extern void __cdecl logMessage(void*, int, const char*, ...);

struct S
{
    unsigned char padding[250];
    unsigned char restoring;
    unsigned char alignment;
    void* monitor;

    void restoreResolution();
    void setFullscreen(int);
    void modifyStyle(unsigned long, unsigned long, unsigned int);
};

void S::restoreResolution()
{
    RestoreFlag guard(restoring);

    if (!monitor)
    {
        logMessage(getLogger().object, 3,
                   "CMainFrame::RestoreResolution hm is NULL");
        return;
    }

    MonitorInfo info;
    info.size = 72;
    if (GetMonitorInfoA(monitor, &info))
    {
        setFullscreen(0);
        long result = ChangeDisplaySettingsExA(info.device, 0, 0, 0, 0);
        if (result)
            logMessage(getLogger().object, 3,
                       "CMainFrame::RestoreResolution ChangeDisplaySettings == %d",
                       result);
    }

    modifyStyle(0, 0x00c40000, 0);
}
