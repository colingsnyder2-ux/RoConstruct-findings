// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pointer {
    void* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
};

inline Pointer::~Pointer()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct ResetValue {
    void reset();
    unsigned long words[2];
};

struct History {
    ResetValue* find(Pointer);
};

extern char instanceType[];
extern char serviceType[];
extern "C" void* __cdecl castObject(
    void*, long, const void*, const void*, int);

struct Service {
    char padding0[0x134];
    History* history;
    char padding1[0x2C];
    bool disabled;

    void changed(Pointer);
};

void Service::changed(Pointer value)
{
    if (disabled)
        return;

    if (value.object == this)
        return;

    if (!castObject(value.object, 0, instanceType, serviceType, 0)
        && history)
        history->find(value)->reset();
}
