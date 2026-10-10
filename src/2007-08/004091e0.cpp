// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    int pad0;
    volatile long refcount;
};

struct Obj {
    void* vptr;
    Inner* inner;
};

struct Holder {
    Obj* ptr;
    Obj* ptr2;
};

struct Outer {
    void* field0;
    Holder holder;
    int fieldC;
};

struct S {
    void* field0;
    Holder holder;
    int fieldC;
    S* init(void* a, void* b);
};

extern "C" void __stdcall sub_408cc0(void*, void*);

S* S::init(void* a, void* b)
{
    this->field0 = a;
    sub_408cc0(&this->holder, a);
    this->fieldC = 0;
    if (a != 0) {
        Obj* o = (Obj*)((char*)a + 0xa4);
        if (o != 0) {
            o->vptr = a;
            Obj* old = this->holder.ptr;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->inner->refcount, 1);
            }
            Obj* old2 = this->holder.ptr2;
            if (old2 != 0) {
                if (_InterlockedExchangeAdd(&old2->inner->refcount, -1) == 1) {
                    void** vt = *(void***)old2;
                    void (*fn)(Obj*) = (void (*)(Obj*))vt[2];
                    fn(old2);
                }
            }
            this->holder.ptr2 = old;
        }
    }
    return this;
}
