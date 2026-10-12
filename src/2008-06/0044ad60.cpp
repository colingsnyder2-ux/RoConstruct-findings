// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
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

extern Handle __cdecl acquire();
extern void __cdecl report(void*, int, const char*);
extern int __stdcall cleanup(void*);
extern const char exitMessage[];
extern char cleanupObject;

struct CRobloxApp
{
    int ExitInstance();
    int finish();
};

int CRobloxApp::ExitInstance()
{
    report(acquire().object, 1, exitMessage);
    cleanup(&cleanupObject);
    return finish();
}
