// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[8];
    volatile long refcount;
};

struct Holder {
    Inner* ptr;
    void assign(Inner* p);
};

struct Outer {
    char pad0[4];
    Holder holder;
    char pad1[0xa4 - 8];
    Holder* self;
    Holder* other;
};

struct S {
    void* field0;
    Holder holder;
    void ctor(void* a, void* b);
};

void S::ctor(void* a, void* b)
{
    field0 = a;
    holder.assign((Inner*)b);
    if (a) {
        Outer* o = (Outer*)((char*)a + 0xa4);
        if (o) {
            o->self = &holder;
            Inner* old = holder.ptr;
            if (old) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            Inner* prev = o->other ? o->other->ptr : 0;
            if (prev) {
                if (_InterlockedExchangeAdd(&prev->refcount, -1) == 1) {
                    void** vt = *(void***)prev;
                    ((void (__stdcall*)(Inner*))vt[2])(prev);
                }
            }
            o->other = &holder;
        }
    }
}
