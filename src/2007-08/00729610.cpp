// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void construct(const Inner* other);
};

struct Outer {
    int a;
    int b;
    int* c;
    Inner d;
    Outer(const Outer* other);
};

Outer::Outer(const Outer* other) {
    a = other->a;
    b = other->b;
    c = other->c;
    if (c != 0) {
        _InterlockedExchangeAdd((volatile long*)(c + 1), 1);
    }
    d.construct(&other->d);
}
