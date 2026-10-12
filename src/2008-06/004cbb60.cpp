// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    __forceinline Shared() {}

    __forceinline Shared(const Shared& other)
        : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    __forceinline ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
};

struct Source {
    Shared* f(void* result, Source* source);
};

struct Receiver {
    void accept(void* key, Shared value);
};

struct S {
    void* key;
    Source source;
    void f(void* unused1, Receiver* receiver, Source* owner, void* unused2);
};

void S::f(void*, Receiver* receiver, Source* owner, void*)
{
    Shared temporary;
    receiver->accept(key, *owner->f(&temporary, &source));
}
