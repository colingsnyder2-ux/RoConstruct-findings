// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct FactoryProduct {
    void* field0;
    void* field4;
};

extern "C" void* __cdecl sub_432F70(void* out);

struct Creator {
    void method(FactoryProduct* result);
};

void Creator::method(FactoryProduct* result)
{
    void* tmp = 0;
    sub_432F70(&tmp);
    result->field0 = *(void**)tmp;
    void* p = *(void**)((char*)tmp + 4);
    result->field4 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    RefCounted* r = (RefCounted*)this;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void* vt = r->vptr;
            ((void (__thiscall*)(RefCounted*))*(void**)((char*)vt + 4))(r);
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                void* vt2 = r->vptr;
                ((void (__thiscall*)(RefCounted*))*(void**)((char*)vt2 + 8))(r);
            }
        }
    }
}
