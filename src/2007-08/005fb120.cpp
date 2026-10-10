// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Sub_7285A0
{
    void f();
};

extern "C" void __stdcall sub_005f9e70();
extern "C" void __stdcall sub_007285a0();

struct Seat
{
    char pad0[0x280];
    char field280[0x14];
    char pad294[0x18];
    void* field2ac;
    void destructor();
};

void Seat::destructor()
{
    void* p = field2ac;
    if (p)
    {
        RefCounted* rc = (RefCounted*)p;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
        {
            void** vt = rc->vptr;
            void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1)
            {
                void** vt2 = rc->vptr;
                void (__stdcall *fn2)(void*) = (void (__stdcall *)(void*))vt2[2];
                fn2(rc);
            }
        }
    }
    ((Sub_7285A0*)((char*)this + 0x294))->f();
    ((Sub_7285A0*)((char*)this + 0x280))->f();
    sub_005f9e70();
}
