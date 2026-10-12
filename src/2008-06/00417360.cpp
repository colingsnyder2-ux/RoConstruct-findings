// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Ref {
    long reserved;
    volatile long count;

    __forceinline void retain();
};

__forceinline void Ref::retain()
{
    _InterlockedExchangeAdd(&count, 1);
}

struct S {
    unsigned long tag;
    void* object;
    Ref* reference;
    unsigned long a, b, c, d, e, f;

    S();
};

S::S()
{
    tag = 0x0080ebc8;
    object = *reinterpret_cast<void**>(0x00975c6c);
    Ref* r = *reinterpret_cast<Ref**>(0x00975c70);
    reference = r;
    if (r)
        r->retain();
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    tag = 0x0080ebd0;
    f = 0;
}
