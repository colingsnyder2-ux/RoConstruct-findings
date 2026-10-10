// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* ptr;
};

struct RefCounted {
    void* vfptr;
    long refs;
};

struct Creator {
    void* vfptr;
};

struct FactoryProduct {
    Creator* creator;
    RefCounted* product;
};

extern "C" void __cdecl sub_591730(void* out, void* name);

void __stdcall sub_591830(FactoryProduct* out, void* name)
{
    void* local[3];
    local[0] = 0;
    sub_591730(&local[1], name);
    out->creator = *(Creator**)&local[1];
    RefCounted* p = *(RefCounted**)&local[2];
    out->product = p;
    if (p) {
        _InterlockedExchangeAdd(&p->refs, 1);
    }
    RefCounted* old = *(RefCounted**)&local[0];
    if (old) {
        if (_InterlockedExchangeAdd(&old->refs, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__stdcall*)(RefCounted*))vt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__stdcall*)(RefCounted*))vt2[2])(old);
            }
        }
    }
}
