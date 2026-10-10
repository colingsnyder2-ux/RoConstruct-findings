// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct Callback {
    void* vptr;
    void* func;
};

struct Outer {
    void* field0;
    void* field4;
    void* field8;
    void invoke(void* a, void* b);
};

extern "C" void __cdecl sub_413C00(void* out);
extern "C" void __cdecl sub_414170(void* p);

void Outer::invoke(void* a, void* b)
{
    if (this->field0 == 0) {
        char buf[16];
        sub_413C00(buf);
        sub_414170(buf);
    }
    RefCounted* rc = (RefCounted*)b;
    if (rc != 0) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    void* fn = this->field8;
    void* ctx = this->field4;
    typedef void (__stdcall *Fn)(void*, void*);
    ((Fn)fn)(ctx, a);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            typedef void (__thiscall *Dtor)(RefCounted*);
            ((Dtor)((void**)(rc->vptr))[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((Dtor)((void**)(rc->vptr))[2])(rc);
            }
        }
    }
}
