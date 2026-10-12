// from server: 84% by king_originala
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

struct Shared
{
    void* object;
    Control* control;

    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Message
{
    virtual void unused();
    virtual const char* text();
};

extern Shared __cdecl getLogger();
extern void __cdecl writeLog(void*, int, const char*);

void __cdecl func_00428850(Message* message)
{
    Shared logger = getLogger();
    writeLog(logger.object, 3, message->text());
}
