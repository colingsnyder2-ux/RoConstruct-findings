// from server: 26% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Rocket {
    char pad[0x150];
    RefCounted* target;
    void destroy();
};

void __fastcall sub_62F4E0(Rocket* self);

void Rocket::destroy()
{
    RefCounted* t = this->target;
    if (t) {
        if (_InterlockedExchangeAdd(&t->refCount, -1) == 1) {
            void** vt = t->vptr;
            void (__stdcall *fn)(RefCounted*) = (void (__stdcall *)(RefCounted*))vt[1];
            fn(t);
            if (_InterlockedExchangeAdd(&t->weakRefCount, -1) == 1) {
                void** vt2 = t->vptr;
                void (__stdcall *fn2)(RefCounted*) = (void (__stdcall *)(RefCounted*))vt2[2];
                fn2(t);
            }
        }
    }
    sub_62F4E0(this);
}
