// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct TimerService {
    char pad[0xe8];
    void* serviceMap;
    void* serviceArray;
    void func(int a, int b);
};

extern "C" void __cdecl sub_402A60(void*);
extern "C" void __cdecl sub_423240(void*);
extern "C" void __cdecl sub_432530(void*);
extern "C" void __cdecl sub_450EC0(void*);
extern "C" void __cdecl sub_49D670(void*, void*);
extern "C" void __cdecl sub_57AA50(void*, int, int);

void TimerService::func(int a, int b)
{
    void* self = this;
    void* p = *(void**)((char*)self + 0xec);
    if (p) {
        sub_432530((char*)p + 0xe8);
    }
    sub_57AA50(self, a, b);
    void* r = 0;
    if (b) {
        sub_450EC0((void*)b);
        r = (void*)b;
    }
    void* tmp = 0;
    sub_49D670(&tmp, r);
    void* v = *(void**)tmp;
    void* addr = (char*)tmp + 4;
    *(void**)((char*)self + 0xec) = v;
    sub_402A60((char*)self + 0xf0);
    if (tmp) {
        RefCounted* rc = (RefCounted*)tmp;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void* vt = rc->vptr;
            void (*fn)(void*) = *(void(**)(void*))((char*)vt + 4);
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void* vt2 = rc->vptr;
                void (*fn2)(void*) = *(void(**)(void*))((char*)vt2 + 8);
                fn2(rc);
            }
        }
    }
    void* p2 = *(void**)((char*)self + 0xec);
    if (p2) {
        sub_423240((char*)p2 + 0xe8);
    }
}
