// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long ref1;
    long ref2;
};

struct FactoryProduct {
    void* vptr;
    void* field4;
    void* ctor(void* arg);
};

extern "C" void* __cdecl sub_5612D0(void* out, void* arg);

void* FactoryProduct::ctor(void* arg)
{
    void* tmp[3];
    tmp[0] = 0;
    sub_5612D0(tmp, arg);
    this->vptr = *(void**)tmp;
    void* p = *(void**)((char*)tmp + 4);
    this->field4 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    RefCounted* r = (RefCounted*)arg;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
            void* vt = r->vptr;
            void (*fn)(void*) = *(void (**)(void*))((char*)vt + 4);
            fn(r);
            if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                void* vt2 = r->vptr;
                void (*fn2)(void*) = *(void (**)(void*))((char*)vt2 + 8);
                fn2(r);
            }
        }
    }
    return this;
}
