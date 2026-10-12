// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long references;
    volatile long weakReferences;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared& source)
        : pointer(source.pointer), control(source.control)
    {
        if (control) {
            volatile long* count = &control->references;
            _ReadWriteBarrier();
            _InterlockedExchangeAdd(count, 1);
        }
    }

    ~Shared()
    {
        Control* c = control;
        if (c) {
            if (_InterlockedDecrement(&c->references) == 0) {
                c->dispose();
                if (_InterlockedDecrement(&c->weakReferences) == 0)
                    c->destroy();
            }
        }
    }
};

struct Temporary {
    Shared first;
    Shared second;

    Temporary(Shared firstValue, Shared secondValue, int a, int b);
    ~Temporary();
};

struct Result {
    int value;
    Shared first;
    Shared second;

    Result(int v, const Temporary& source)
        : value(v), first(source.first), second(source.second)
    {
    }
};

Result __cdecl f(int value, Shared first, Shared second, int a, int b)
{
    return Result(value, Temporary(first, second, a, b));
}
