// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared
{
    Control* control;
    Shared& operator=(const Shared&);
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Value
{
    void* volatile pointer;
    Shared owner;
};

Value __cdecl makeValue(void*);
extern char property;

struct S
{
    char padding[0x1b4];
    int flags;
    int state;
    Value value;

    void notify(const void*);
    void f(void*);
};

void S::f(void* p)
{
    if (value.pointer != p) {
        value = makeValue(p);
        notify(&property);
    }

    state = state == 1 ? 2 : 0;
    flags = state == 2 ? 0xf0 : 0;
}
