// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct FactoryProductCreator {
    CreatorResult* __stdcall construct(CreatorResult* result);
};

extern "C" void* __cdecl sub_4AF070(void** out);

struct Creator {
    CreatorResult* __stdcall create(CreatorResult* result);
};

CreatorResult* __stdcall Creator::create(CreatorResult* result) {
    void* temp = 0;
    void* obj = sub_4AF070(&temp);
    result->ptr = *(void**)obj;
    RefCounted* ref = *(RefCounted**)((char*)obj + 4);
    result->ref = ref;
    if (ref) {
        _InterlockedExchangeAdd(&ref->refCount, 1);
    }
    if (temp) {
        RefCounted* t = (RefCounted*)temp;
        if (_InterlockedExchangeAdd(&t->refCount, -1) == 1) {
            void* vt = t->vptr;
            ((void (__thiscall*)(RefCounted*))((void**)vt)[1])(t);
            if (_InterlockedExchangeAdd(&t->weakCount, -1) == 1) {
                void* vt2 = t->vptr;
                ((void (__thiscall*)(RefCounted*))((void**)vt2)[2])(t);
            }
        }
    }
    return result;
}
