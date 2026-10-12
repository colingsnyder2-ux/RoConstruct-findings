// from server: 93% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long (__stdcall *SHGetFolderPathAndSubDirA)(
    void*, int, void*, unsigned long, const char*, char*);

struct String {};
extern String assetFolder;
extern String& (__thiscall *assignString)(String*, const char*);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

Shared __cdecl getService();
void __cdecl report(void*, int, const char*, ...);

void initializeAssetFolder()
{
    char path[260];
    if (SHGetFolderPathAndSubDirA(
            0, 35, 0, 0, "Roblox\\content\\", path) == 0) {
        assignString(&assetFolder, path);
    } else {
        report(getService().object, 2,
               "Failed to get asset folder from registry");
    }
}
