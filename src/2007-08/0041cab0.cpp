// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct NamePtr {
    void* name;
    RefCounted* ref;
};

struct Creator {
    NamePtr getClassNameUnconstructed() const;
    void* create() const;
};

struct FactoryProduct {
    void* field0;
    RefCounted* field4;
};

extern "C" void* __cdecl sub_41CA20(void* out);

void* __fastcall Creator_create(Creator* self, void* unused, void* out);

void* __fastcall Creator_create(Creator* self, void* unused, void* out)
{
    NamePtr name;
    name.name = 0;
    name.ref = 0;

    sub_41CA20(&name);

    FactoryProduct* result = (FactoryProduct*)out;
    result->field0 = name.name;
    result->field4 = name.ref;

    if (name.ref != 0) {
        _InterlockedExchangeAdd(&name.ref->refCount, 1);
    }

    RefCounted* r = name.ref;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void** vtbl = *(void***)r;
            typedef void (__stdcall *Fn)(RefCounted*);
            ((Fn)vtbl[1])(r);
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                ((Fn)vtbl[2])(r);
            }
        }
    }

    return result;
}
