// from server: 77% by king_originala
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
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::~Shared()
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

struct Temporary {
    Shared pointer;
    int padding;
    int value;

    Temporary(Shared);
};

struct Result {
    int first;
    int second;
    int third;
    int value;
    Shared pointer;

    Result(int, int, int, const Temporary&);
};

__forceinline Result::Result(int a, int b, int c, const Temporary& temporary)
    : first(a), second(b), third(c), value(temporary.value),
      pointer(temporary.pointer)
{
}

Result __cdecl reconstruct(int a, int b, int c, Shared pointer)
{
    return Result(a, b, c, Temporary(pointer));
}
