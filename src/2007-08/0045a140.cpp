// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Name;

struct CreatorResult {
    Name* name;
    RefCounted* obj;
};

struct FactoryProductCreator {
    CreatorResult* getCreator(CreatorResult* result);
};

struct Creator {
    CreatorResult* create(CreatorResult* result);
};

CreatorResult* Creator::create(CreatorResult* result) {
    CreatorResult tmp;
    tmp.name = 0;
    tmp.obj = 0;

    FactoryProductCreator* self = (FactoryProductCreator*)this;
    CreatorResult* src = self->getCreator(&tmp);

    result->name = src->name;
    result->obj = src->obj;
    if (result->obj) {
        _InterlockedExchangeAdd(&result->obj->refCount, 1);
    }

    RefCounted* old = tmp.obj;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void (__thiscall *dtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))(*(void***)old + 1);
            dtor(old);
        }
        if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
            void (__thiscall *wdtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))(*(void***)old + 2);
            wdtor(old);
        }
    }

    return result;
}
