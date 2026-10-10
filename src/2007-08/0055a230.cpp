// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    volatile long refCount;
    volatile long weakCount;
};

struct NameRef {
    void* ptr;
};

struct Creator {
    void* vfptr;
};

struct FactoryProduct {
    void* vfptr;
};

struct CreatorHolder {
    void* ptr;
    RefCounted* ref;
};

extern "C" void __cdecl sub_55A1B0(CreatorHolder* out, void* name);

void __stdcall FactoryProduct_ctor(FactoryProduct* self, void* arg);

void __stdcall FactoryProduct_ctor(FactoryProduct* self, void* arg)
{
    CreatorHolder holder;
    holder.ptr = 0;
    holder.ref = 0;

    sub_55A1B0(&holder, arg);

    CreatorHolder* dst = (CreatorHolder*)arg;
    dst->ptr = holder.ptr;
    dst->ref = holder.ref;

    if (holder.ref != 0) {
        _InterlockedExchangeAdd(&holder.ref->refCount, 1);
    }

    RefCounted* old = holder.ref;
    if (old != 0) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->vfptr;
            typedef void (__stdcall *Fn)(RefCounted*);
            Fn f = *(Fn*)(*(void***)old + 4);
            f(old);
            if (_InterlockedExchangeAdd(&old->weakCount, -1) == 1) {
                Fn g = *(Fn*)(*(void***)old + 8);
                g(old);
            }
        }
    }
}
