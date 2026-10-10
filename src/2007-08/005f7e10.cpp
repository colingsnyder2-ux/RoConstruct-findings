// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

extern "C" void* __cdecl sub_5F7340(void* out);

struct VColor3Factory {
    void* vptr;
    void* base;
    void ctor(void* arg);
};

void VColor3Factory::ctor(void* arg)
{
    void* tmp[3];
    tmp[0] = 0;
    void* result = sub_5F7340(&tmp[0]);
    void** src = (void**)result;
    void** dst = (void**)arg;
    dst[0] = src[0];
    void* p = src[1];
    dst[1] = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    RefCounted* rc = (RefCounted*)tmp[1];
    tmp[2] = 0;
    tmp[0] = (void*)1;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                void (*fn2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                fn2(rc);
            }
        }
    }
}
