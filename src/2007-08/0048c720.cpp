// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Inner {
    void* field0;
    void* field4;
};

struct Outer {
    void* field0;
    Inner inner;
};

struct S {
    void* field0;
    Inner inner;
    void construct(void* a, void* b);
};

void S::construct(void* a, void* b)
{
    this->field0 = a;
    this->inner.field0 = 0;
    this->inner.field4 = 0;

    // call to 0x48c690 with ecx = &this->inner, args (a, b)
    // declared as a helper
    extern void helper(Inner* self, void* a, void* b);
    helper(&this->inner, a, b);

    if (a != 0) {
        Outer* p = (Outer*)((char*)a + 0xa4);
        if (p != 0) {
            p->field0 = a;
            void* old = this->inner.field0;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* old2 = p->inner.field0;
            if (old2 != 0) {
                long r = _InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1);
                if (r == 1) {
                    void** vt = *(void***)old2;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(old2);
                }
            }
            p->inner.field0 = old;
        }
    }
}
