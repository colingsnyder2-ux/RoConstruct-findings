// from server: 22% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct CreatorHolder {
    void* name;
    RefCounted* obj;
};

struct Creator {
    void* name;
    RefCounted* obj;
};

extern "C" void __cdecl sub_58EDA0(CreatorHolder* out, void* name);

void __stdcall sub_58EE20(Creator* result, void* name);

void __stdcall sub_58EE20(Creator* result, void* name)
{
    CreatorHolder holder;
    holder.name = 0;
    sub_58EDA0(&holder, name);

    result->name = holder.name;
    result->obj = holder.obj;

    if (result->obj != 0) {
        _InterlockedExchangeAdd(&result->obj->refCount, 1);
    }

    RefCounted* old = holder.obj;
    if (old != 0) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void** vt = (void**)old->vptr;
            typedef void (__stdcall *Fn)(RefCounted*);
            ((Fn)vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakCount, -1) == 1) {
                ((Fn)vt[2])(old);
            }
        }
    }
}
