// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String
{
    unsigned int allocator;
    union
    {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    const char* c_str() const
    {
        const char* p = pointer;
        if (capacity < 16)
            p = buffer;
        return p;
    }

    ~String();
};

struct RefCount
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    RefCount* control;

    ~Shared()
    {
        RefCount* p = control;
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
};

struct Exception
{
    virtual ~Exception();
    char* message;
    int owned;
};

struct RuntimeError : Exception
{
    String text;

    RuntimeError(const String&);
    virtual ~RuntimeError();
};

extern const char* __fastcall errorText(int);
extern String __cdecl format(const char*, ...);
extern Shared __cdecl getLogger();
extern void __cdecl logMessage(void*, int, const char*);

void __cdecl func_005b6fe0(int result)
{
    if (result)
    {
        String message = format("FMOD %d: %s", result, errorText(result));
        logMessage(getLogger().pointer, 2, message.c_str());
        throw RuntimeError(message);
    }
}
