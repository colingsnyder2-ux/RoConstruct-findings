// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
};

struct Inner {
    void* vptr;
    volatile long refCount;
    volatile long refCount2;
};

struct Holder {
    Inner* ptr;
};

struct Creator {
    void* vptr;
    void* field4;
};

extern "C" void __cdecl sub_4078A0(Holder* out);
extern "C" void __cdecl sub_4078A0_impl();

struct S {
    Creator* __thiscall init(Creator* result);
};

Creator* __thiscall S::init(Creator* result) {
    Holder h;
    h.ptr = 0;
    sub_4078A0(&h);
    result->vptr = h.ptr->vptr;
    Inner* p = h.ptr;
    result->field4 = p->vptr;
    if (p->vptr) {
        _InterlockedExchangeAdd((volatile long*)((char*)p->vptr + 4), 1);
    }
    Inner* esi = h.ptr;
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->refCount, -1) == 1) {
            void** vt = (void**)esi->vptr;
            ((void (__thiscall*)(Inner*))vt[1])(esi);
            if (_InterlockedExchangeAdd(&esi->refCount2, -1) == 1) {
                void** vt2 = (void**)esi->vptr;
                ((void (__thiscall*)(Inner*))vt2[2])(esi);
            }
        }
    }
    return result;
}
