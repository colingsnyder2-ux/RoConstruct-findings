// from server: 56% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl __RTtype_info_8(void*, void*);

struct RefCounted
{
    void* vptr;
    long refcount;
};

struct S
{
};

void __cdecl f(void* dst, void* src, int mode)
{
    if (mode == 0)
    {
        if (dst == 0)
            return;
        *(void**)dst = *(void**)src;
        void* p = *((void**)src + 1);
        *((void**)dst + 1) = p;
        if (p == 0)
            return;
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
        return;
    }

    if (mode == 1)
    {
        void* p = *((void**)src + 1);
        if (p == 0)
            return;
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) != 1)
            return;
        void** vt = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vt[1];
        fn(p);
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) != 1)
            return;
        void** vt2 = *(void***)p;
        void (*fn2)(void*) = (void (*)(void*))vt2[2];
        fn2(p);
        return;
    }

    void* p = *(void**)src;
    int r = __RTtype_info_8(p, (void*)0x953e08);
    int neg = -r;
    *(int*)src = neg & mode;
}
