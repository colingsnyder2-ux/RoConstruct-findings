// from server: 65% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Slot {
    int a;
    int b;
    int c;
    RefCounted* p;
};

void __stdcall assign_slot(Slot* dst, int a, int b, int c, RefCounted* p, RefCounted* old)
{
    if (dst) {
        dst->a = a;
        dst->b = b;
        dst->c = c;
        dst->p = p;
        if (p) {
            _InterlockedExchangeAdd(&p->ref1, 1);
        }
    }
    if (old) {
        if (_InterlockedExchangeAdd(&old->ref1, -1) == 1) {
            void** vt = (void**)old->vptr;
            void (__thiscall *f1)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt[1];
            f1(old);
            if (_InterlockedExchangeAdd(&old->ref2, -1) == 1) {
                void (__thiscall *f2)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt[2];
                f2(old);
            }
        }
    }
}
