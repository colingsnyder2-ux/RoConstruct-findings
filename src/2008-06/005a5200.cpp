// from server: 83% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Ref {
    Control* control;
    Ref& operator=(const Ref&);
    ~Ref();
};

inline Ref::~Ref()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Pair {
    void* pointer;
    Ref reference;
};

Pair __cdecl acquire(void*);
extern char property[];

struct S {
    char padding[0x3fc];
    void* volatile pointer;
    Ref reference;
    void notify(const char*);
    void assign(const Pair&);
    void set(void*);
};

__forceinline void S::assign(const Pair& value)
{
    pointer = value.pointer;
    reference = value.reference;
}

void S::set(void* value)
{
    if (value != pointer) {
        assign(acquire(value));
        notify(property);
    }
}
