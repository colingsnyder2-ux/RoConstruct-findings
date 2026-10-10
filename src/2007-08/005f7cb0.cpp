// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    volatile long refcount;
};

struct NameRef {
    void* ptr;
};

struct Creator {
    void* vfptr;
    void* field4;
};

struct FactoryProduct {
    Creator* getCreator(NameRef* out) const;
    void release();
};

struct CreatorHolder {
    void* ptr;
    volatile long refcount;
};

extern "C" void* __cdecl sub_5F7240(NameRef* out);

Creator* FactoryProduct::getCreator(NameRef* out) const {
    NameRef local;
    local.ptr = 0;
    sub_5F7240(&local);
    Creator* c = (Creator*)local.ptr;
    Creator* result = (Creator*)out;
    result->vfptr = c->vfptr;
    result->field4 = c->field4;
    if (result->field4) {
        _InterlockedExchangeAdd((volatile long*)((char*)result->field4 + 4), 1);
    }
    CreatorHolder* h = (CreatorHolder*)local.ptr;
    if (h) {
        if (_InterlockedExchangeAdd(&h->refcount, -1) == 1) {
            void** vt = (void**)h->ptr;
            ((void (__thiscall*)(void*))vt[1])(h);
            if (_InterlockedExchangeAdd((volatile long*)((char*)h + 8), -1) == 1) {
                void** vt2 = (void**)h->ptr;
                ((void (__thiscall*)(void*))vt2[2])(h);
            }
        }
    }
    return result;
}
