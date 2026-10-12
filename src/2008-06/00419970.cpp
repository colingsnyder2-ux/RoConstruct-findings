// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Ref
{
    unsigned int reserved;
    volatile long count;
};

struct S
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    Ref* ref;
    unsigned int d;
    unsigned int e;

    S(const S& other);
};

S::S(const S& other)
{
    a = other.a;
    b = other.b;
    c = other.c;
    ref = other.ref;
    if (ref != 0)
        _InterlockedExchangeAdd(&ref->count, 1);
    d = other.d;
    e = other.e;
}
