// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct NameRef {
    void* ptr;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct FactoryProductCreator {
    CreatorResult* __stdcall create(CreatorResult* result);
};

extern "C" void* __stdcall sub_48BFA0(NameRef* out);

CreatorResult* __stdcall FactoryProductCreator::create(CreatorResult* result)
{
    NameRef name;
    name.ptr = 0;
    sub_48BFA0(&name);

    void** src = (void**)&name;
    result->ptr = src[0];
    RefCounted* ref = (RefCounted*)src[1];
    result->ref = ref;
    if (ref) {
        _InterlockedExchangeAdd(&ref->refcount, 1);
    }

    RefCounted* old = (RefCounted*)name.ptr;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = (void**)old->vptr;
            typedef void (__stdcall *Fn)(RefCounted*);
            ((Fn)vt[1])(old);
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                ((Fn)vt[2])(old);
            }
        }
    }

    return result;
}
