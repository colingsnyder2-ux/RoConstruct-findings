// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

struct Word {
    unsigned value;
    Word(const Word&);
};

struct Pair {
    unsigned first;
    unsigned second;
};

struct Local {
    Shared shared;
    Word first;
    Word second;

    Local(Shared, Word, Word);
};

struct Result {
    Pair pair;
    Shared shared;
    Word first;
    Word second;

    Result(const Pair&, const Local&);
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

__forceinline Word::Word(const Word& other)
    : value(other.value)
{
}

__forceinline Result::Result(const Pair& p, const Local& local)
    : pair(p), shared(local.shared), first(local.first), second(local.second)
{
}

Result __cdecl function(Pair pair, Shared shared, Word first, Word second)
{
    return Result(pair, Local(shared, first, second));
}
