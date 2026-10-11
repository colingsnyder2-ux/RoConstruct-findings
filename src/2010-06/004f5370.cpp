// from server: 23% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Target {
    void method(int a, int b, int c, int d, RefCounted* p);
};

void __stdcall helper(Target* self, int a, int b, int c, int d, RefCounted* p);

void Target::method(int a, int b, int c, int d, RefCounted* p) {
    if (p) {
        _InterlockedExchangeAdd(&p->ref1, 1);
    }
    helper(this, a, b, c, d, p);
    if (p) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            ((void (__stdcall*)(RefCounted*))p->vptr)(p);
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                ((void (__stdcall*)(RefCounted*))((void**)p->vptr)[2])(p);
            }
        }
    }
}
