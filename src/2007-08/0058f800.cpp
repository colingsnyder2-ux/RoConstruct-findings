// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
};

struct NameRef {
    void* ptr;
};

struct Creator {
    void* vptr;
    void* field4;
};

struct FactoryProduct {
    void* vptr;
    void* field4;
};

extern "C" void __cdecl sub_58F780(void* out, void* in);

void __stdcall sub_58F800(void* out, void* in)
{
    Creator* c = 0;
    sub_58F780(&c, in);
    *(void**)out = c->vptr;
    void* p = c->field4;
    *(void**)((char*)out + 4) = p;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    RefCounted* r = (RefCounted*)in;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refs, -1) == 1) {
            void** vt = (void**)r->vptr;
            ((void (__stdcall*)(RefCounted*))vt[1])(r);
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                void** vt2 = (void**)r->vptr;
                ((void (__stdcall*)(RefCounted*))vt2[2])(r);
            }
        }
    }
}
