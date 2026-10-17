// from server: 98% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


extern "C" __declspec(dllimport) char* __cdecl strncpy(char*, const char*, unsigned int);

struct Settings {
    char padding[0x133];
    unsigned char enabled;
};

struct Reference {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct LoggerHandle {
    void* object;
    Reference* reference;
    ~LoggerHandle();
};

Settings* __cdecl getSettings();
const char* __fastcall errorString(int);
LoggerHandle __cdecl getLogger();
void __cdecl writeLog(void*, int, const char*, ...);

inline LoggerHandle::~LoggerHandle()
{
    Reference* p = reference;
    if (p) {

        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void __cdecl reportSoundError(int error)
{
    char text[512];
    if (error && getSettings()->enabled) {
        strncpy(text, errorString(error), 512);
        writeLog(getLogger().object, 2, "FMOD %d: %s", error, text);
    }
}
