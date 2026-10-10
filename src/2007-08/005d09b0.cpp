// from server: 14% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct LocalBackpack
{
    char pad0[0x15c];
    RefCounted* field_15c;
    RefCounted* field_154;
    RefCounted* field_14c;
    RefCounted* field_144;
    RefCounted* field_13c;
};

extern void func_005d0910();
extern void func_005cfcb0();

void LocalBackpack_dtor(LocalBackpack* self)
{
    RefCounted* p;
    p = self->field_15c;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->vptr = p->vptr;
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[1])(p);
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[2])(p);
        }
    }
    p = self->field_154;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[1])(p);
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[2])(p);
        }
    }
    p = self->field_14c;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[1])(p);
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[2])(p);
        }
    }
    p = self->field_144;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[1])(p);
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[2])(p);
        }
    }
    p = self->field_13c;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[1])(p);
        }
        if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)p->vptr)[2])(p);
        }
    }
    func_005d0910();
    func_005cfcb0();
}
