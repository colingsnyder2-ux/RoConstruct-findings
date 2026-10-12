// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" char* __cdecl strncpy(char*, const char*, unsigned int);

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
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
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
