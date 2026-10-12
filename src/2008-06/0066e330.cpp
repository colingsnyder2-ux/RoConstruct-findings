// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ControlBlock {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Service {
    void apply(int value);
};

struct ServicePtr {
    Service* pointer;
    ControlBlock* control;
    ~ServicePtr();
    Service* operator->() const;
};

struct S {
    ServicePtr getService();
    void finish();
    void f(int value);
};

__forceinline Service* ServicePtr::operator->() const
{
    return pointer;
}

__forceinline ServicePtr::~ServicePtr()
{
    ControlBlock* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

void S::f(int value)
{
    getService()->apply(value);
    finish();
}
