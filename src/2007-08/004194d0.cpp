// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[8];
    volatile long refcount;
};

struct Holder {
    Inner* ptr;
};

struct Outer {
    char pad0[4];
    Holder holder;
    char pad1[0xa4 - 8];
    Holder* slot;
};

struct S {
    void* field0;
    Holder holder;
    void init(void* a, void* b);
    S* construct(void* a, void* b);
};

extern "C" void __cdecl sub_4193f0(void* self, void* a, void* b);

S* S::construct(void* a, void* b)
{
    this->field0 = a;
    sub_4193f0(&this->holder, a, b);
    if (a == 0) {
        Outer* o = (Outer*)((char*)a + 0xa4);
        if (o != 0) {
            o->slot = &this->holder;
            Inner* old = this->holder.ptr;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            Inner* prev = o->slot->ptr;
            if (prev != 0) {
                if (_InterlockedExchangeAdd(&prev->refcount, -1) != 1) {
                    void** vt = *(void***)prev;
                    void (*dtor)(void*) = (void (*)(void*))vt[2];
                    dtor(prev);
                }
            }
            o->slot->ptr = old;
        }
    }
    return this;
}
