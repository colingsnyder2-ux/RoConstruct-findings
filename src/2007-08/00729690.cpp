// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void m(const Inner*);
};

struct S {
    int a;
    int b;
    int* c;
    Inner d;
    S(const S* other, const Inner* arg);
};

S::S(const S* other, const Inner* arg)
{
    a = other->a;
    b = other->b;
    c = other->c;
    if (c != 0) {
        _InterlockedExchangeAdd((volatile long*)(c + 1), 1);
    }
    d.m(arg);
}
