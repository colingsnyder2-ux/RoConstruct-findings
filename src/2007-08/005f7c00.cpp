// from server: 68% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Creator {
    void* vfptr;
};

struct CreatorMap {
    void* field0;
    void* field4;
};

extern "C" void* __cdecl sub_5F71C0(void* outPtr);

struct FactoryProductCreator : public Creator {
    void* field4;
};

void* __cdecl sub_5F7C00(FactoryProductCreator* result, void* arg);

void* __cdecl sub_5F7C00(FactoryProductCreator* result, void* arg)
{
    void* tmp[3];
    tmp[0] = 0;
    void* src = sub_5F71C0(&tmp[1]);
    result->vfptr = *(void**)src;
    void* obj = *(void**)((char*)src + 4);
    result->field4 = obj;
    if (obj != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)obj + 4), 1);
    }
    RefCounted* rc = (RefCounted*)tmp[1];
    tmp[2] = 0;
    tmp[0] = (void*)1;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void* vt = rc->vfptr;
            ((void (__thiscall*)(RefCounted*))((void**)vt)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                void* vt2 = rc->vfptr;
                ((void (__thiscall*)(RefCounted*))((void**)vt2)[2])(rc);
            }
        }
    }
    return result;
}
