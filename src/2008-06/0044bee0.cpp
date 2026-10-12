// from server: 94% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    void set(void*);
};

struct Shared {
    Object* pointer;
    Control* control;

    ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
};

struct Lock {
    void acquire();
    void release();
};

struct Guard {
    Lock* lock;
    bool acquired;

    Guard(Lock* p) : lock(p)
    {
        lock->acquire();
        acquired = true;
    }

    ~Guard()
    {
        if (acquired)
            lock->release();
    }
};

Shared __cdecl create();
Shared __cdecl factory();

void* __cdecl f()
{
    Guard guard(reinterpret_cast<Lock*>(0x00974aa0));
    if (*reinterpret_cast<void**>(0x0096dd10) == 0) {
        Shared object = create();
        object.pointer->set(factory().pointer);
    }
    return *reinterpret_cast<void**>(0x0096dd10);
}
