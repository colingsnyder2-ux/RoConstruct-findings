// from server: 37% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

extern "C" void* __cdecl sub_4082A0(void*);

void __stdcall sub_408330(Holder* out)
{
    void* tmp = 0;
    void* result = sub_4082A0(&tmp);
    out->ptr = *(void**)result;
    RefCounted* r = *(RefCounted**)((char*)result + 4);
    out->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refcount, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            old->vptr;
            ((void (__stdcall*)(RefCounted*))((void**)old->vptr)[1])(old);
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                ((void (__stdcall*)(RefCounted*))((void**)old->vptr)[2])(old);
            }
        }
    }
}
