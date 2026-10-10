// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad[8];
    long refcount;
};

struct RefHolder {
    Inner* ptr;
    Inner* ptr2;
};

struct S {
    void* field0;
    void* field4;
    void assign(void* a, void* b);
};

extern "C" void __cdecl sub_41c1d0(void*, void*);

void S::assign(void* a, void* b)
{
    RefHolder* rh;
    Inner* old;
    Inner* cur;

    field0 = a;
    sub_41c1d0(b, a);

    if (a != 0) {
        rh = (RefHolder*)((char*)a + 0xa4);
        if (rh != 0) {
            rh->ptr = (Inner*)a;
            old = (Inner*)field4;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            cur = rh->ptr2;
            if (cur != 0) {
                if (_InterlockedExchangeAdd(&cur->refcount, -1) == 1) {
                    void** vtbl = *(void***)cur;
                    void (*fn)(void*) = (void (*)(void*))vtbl[2];
                    fn(cur);
                }
            }
            rh->ptr2 = old;
        }
    }
}
