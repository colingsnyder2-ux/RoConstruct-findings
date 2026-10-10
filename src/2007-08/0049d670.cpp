// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* ptr;
};

struct RefCountedBase {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct S_0049d670 {
    void* field0;
    void* field4;
};

extern "C" void* __cdecl func_0041e0f0(void*);
extern "C" void __cdecl func_004621e0(void*, void*);

void __cdecl func_0049d670(void* arg0, S_0049d670* out)
{
    void* local10 = 0;
    void* local14 = 0;
    void* local1c = 0;
    void* local20 = 0;
    void* local24 = 0;
    void* local28 = 0;
    int state = 0;
    void* esi = 0;
    int ebx = 0;

    if (arg0 != 0) {
        func_0041e0f0((char*)arg0 + 0xa4);
        func_004621e0(&local1c, &local20);
        esi = local14;
        state = 2;
        ebx = 3;
    } else {
        esi = 0;
        local10 = 0;
        local14 = 0;
        ebx = 4;
    }

    out->field0 = *(void**)&local10;
    out->field4 = *(void**)&local14;
    if (out->field4 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)out->field4 + 4), 1);
    }

    ebx |= 8;
    if (ebx & 4) {
        ebx &= ~4;
        local10 = (void*)ebx;
        if (esi != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
                void** vt = *(void***)esi;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(esi);
                if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                    void** vt2 = *(void***)esi;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(esi);
                }
            }
        }
    }

    if (ebx & 2) {
        state = 1;
        esi = local1c;
        ebx &= ~2;
        local10 = (void*)ebx;
        if (esi != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
                void** vt = *(void***)esi;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(esi);
                if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                    void** vt2 = *(void***)esi;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(esi);
                }
            }
        }
    }

    if (ebx & 1) {
        state = 0;
        esi = local24;
        ebx &= ~1;
        local10 = (void*)ebx;
        if (esi != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
                void** vt = *(void***)esi;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(esi);
                if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                    void** vt2 = *(void***)esi;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(esi);
                }
            }
        }
    }
}
