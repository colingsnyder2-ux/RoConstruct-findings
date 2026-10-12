// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Logger {
    void __cdecl reportError(int, const char*, const char*);
};

struct Handle {
    Logger* object;
    Control* control;
    ~Handle();
};

__forceinline Handle::~Handle()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

extern Handle __cdecl getHandle();
extern const char* __cdecl getText(void*, int, unsigned int*);
extern const char errorFormat[];

int __cdecl callback(void* state)
{
    {
        Handle h = getHandle();
        Logger* object = h.object;
        object->reportError(3, errorFormat, getText(state, -1, 0));
    }
    int* p = 0;
    p[0] = p[1];
    return 0;
}
