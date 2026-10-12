// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" char* __cdecl strncpy(char*, const char*, unsigned int);

struct Settings
{
    char padding[0x133];
    bool enabled;
};

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle
{
    void* object;
    Control* control;
    ~Handle();
};

inline Handle::~Handle()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

Settings* __cdecl getSettings();
const char* __cdecl errorString(int);
Handle __cdecl getLogger();
void __cdecl writeLog(void*, int, const char*, ...);

void __cdecl reportError(int error)
{
    char text[512];
    if (error && getSettings()->enabled)
    {
        strncpy(text, errorString(error), 512);
        writeLog(getLogger().object, 2, "FMOD %d: %s", error, text);
    }
}
