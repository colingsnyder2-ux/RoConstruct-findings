// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved() = 0;
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

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Vector {
    void* first;
    void* last;
    void* end;

    Vector();
    ~Vector();
};

__forceinline Vector::Vector() : first(0), last(0), end(0) {}

struct AllocatorA {};
struct AllocatorB {};

struct Helper {
    unsigned long data;
    Helper(const AllocatorA&, const AllocatorB&);
};

struct S {
    int value;
    Shared shared;
    Vector vector;
    Helper helper;

    S(int, Shared);
};

S::S(int n, Shared p)
    : value(n), shared(p), vector(),
      helper(reinterpret_cast<const AllocatorA&>(n),
             reinterpret_cast<const AllocatorB&>(n)) {
}
