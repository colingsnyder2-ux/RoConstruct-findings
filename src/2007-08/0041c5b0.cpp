// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct FactoryProductCreator {
    CreatorResult* __thiscall construct(CreatorResult* result);
};

extern "C" void* __cdecl sub_41C450(void** out);

CreatorResult* __thiscall FactoryProductCreator::construct(CreatorResult* result)
{
    void* inner = 0;
    sub_41C450(&inner);
    result->ptr = *(void**)inner;
    RefCounted* r = *(RefCounted**)((char*)inner + 4);
    result->ref = r;
    if (r != 0) {
        _InterlockedExchangeAdd(&r->refCount, 1);
    }
    RefCounted* old = (RefCounted*)inner;
    if (old != 0) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void (__stdcall *dtor)(void*) = *(void (__stdcall**)(void*))((*(void***)old)[1]);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                void (__stdcall *wdtor)(void*) = *(void (__stdcall**)(void*))((*(void***)old)[2]);
                wdtor(old);
            }
        }
    }
    return result;
}
