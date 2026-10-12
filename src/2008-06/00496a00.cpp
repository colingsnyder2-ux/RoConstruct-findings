// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
                p->destroy();
        }
    }
}

struct Failure {
    char storage[40];
    Failure();
    ~Failure();
};

extern __declspec(noreturn) void __cdecl raiseFailure(const Failure&);

struct Dispatch {
    void* unused;
    void (__cdecl *invoke)(void*, Shared);
};

struct S {
    Dispatch* dispatch;
    unsigned long reserved;
    unsigned char storage[1];
    void f(Shared value);
};

void S::f(Shared value)
{
    if (!dispatch)
        raiseFailure(Failure());
    dispatch->invoke(storage, value);
}
