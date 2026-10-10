// from server: 56% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
};

struct Elem {
    int a;
    RefCounted* b;
};

struct Result {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
};

struct S {
    void f(Elem* first, Elem* last, Result* out, int p1, int p2, void (__cdecl *fn)(int, int, Elem*, int));
};

void S::f(Elem* first, Elem* last, Result* out, int p1, int p2, void (__cdecl *fn)(int, int, Elem*, int))
{
    Elem* it = first;
    if (it != last) {
        do {
            Elem tmp;
            tmp.a = it->a;
            tmp.b = it->b;
            if (tmp.b != 0) {
                _InterlockedExchangeAdd(&tmp.b->refCount, 1);
            }
            fn(p1, p2, &tmp, 0);
            it += 1;
        } while (it != last);
    }
    out->f0 = p1;
    out->f4 = p2;
    out->f8 = 0;
    out->fc = 0;
    out->f10 = 0;
}
