// from server: 37% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct Inner {
    char pad[4];
    RefCounted* ptr;
};

struct Outer {
    void func(Inner* inner, int a, int b, int c, int d);
};

extern void G1_func_0070a2f0();

void Outer::func(Inner* inner, int a, int b, int c, int d)
{
    RefCounted* p = inner->ptr;
    if (p) {
        _InterlockedExchangeAdd(&p->refcount, 1);
    }
    G1_func_0070a2f0();
    if (p) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            void (***vt)(void) = (void (***)(void))p;
            (*vt)[1]();
            if (_InterlockedExchangeAdd(&p->weakrefcount, -1) == 1) {
                (*vt)[2]();
            }
        }
    }
}
