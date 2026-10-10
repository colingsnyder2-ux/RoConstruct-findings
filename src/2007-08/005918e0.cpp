// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
};

struct SharedPtr {
    void* px;
    void* pi;
};

struct Creator {
    void* vptr;
    volatile long refs;
};

struct FactoryProduct {
    SharedPtr getCreator();
};

struct CreatorHolder {
    void* vptr;
    volatile long refs;
    volatile long weakRefs;
};

extern "C" void* __cdecl sub_5917B0(void* out);

SharedPtr FactoryProduct::getCreator()
{
    SharedPtr result;
    void* raw = 0;
    sub_5917B0(&raw);
    result.px = *(void**)raw;
    void* pi = *(void**)((char*)raw + 4);
    result.pi = pi;
    if (pi) {
        _InterlockedExchangeAdd((volatile long*)((char*)pi + 4), 1);
    }
    CreatorHolder* old = (CreatorHolder*)0;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refs, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(CreatorHolder*))vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakRefs, -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(CreatorHolder*))vt2[2])(old);
            }
        }
    }
    return result;
}
