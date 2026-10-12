// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* object;
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
extern void __cdecl reportError(void*, int, const char*, const char*);
extern const char errorFormat[];

int __cdecl callback(void* state)
{
    {
        Handle h = getHandle();
        reportError(h.object, 3, errorFormat, getText(state, -1, 0));
    }
    *reinterpret_cast<int*>(0) = *reinterpret_cast<int*>(4);
    return 0;
}
