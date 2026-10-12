// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct ControlBlock {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    char* object;
    ControlBlock* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control) {
        ControlBlock* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Weak {
    Shared lock();
};

struct Controller {
    void update(void*, int);
};

struct Base;
typedef bool (__thiscall *Predicate)(Base*);

struct Base {
    Predicate* table;
};

struct S {
    unsigned char padding[4];
    Controller* controller;
    Weak weak;
    void f(int, int, int);
};

void S::f(int, int, int)
{
    if (controller && weak.lock().object &&
        reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x138)
            ->table[16](reinterpret_cast<Base*>(
                reinterpret_cast<char*>(this) - 0x138)))
        controller->update(weak.lock().object + 0x228, 1);
}
