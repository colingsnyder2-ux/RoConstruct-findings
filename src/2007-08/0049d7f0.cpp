// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct S_0049d7f0 {
    void* m0;
    void* m4;
};

extern "C" void* __cdecl func_0041e0f0(void*);
extern "C" void __cdecl func_0049cf30(void*, void*);

void __cdecl func_0049d7f0(S_0049d7f0* out, void* src)
{
    void* local10 = 0;
    void* local14 = 0;
    void* local18 = 0;
    void* local1c = 0;
    void* local20 = 0;
    int state = 0;
    int flags = 0;

    if (src != 0) {
        void* p = func_0041e0f0(&local20);
        func_0049cf30(&local18, p);
        local14 = local18;
        state = 2;
        flags = 3;
    } else {
        local10 = 0;
        local14 = 0;
        state = 4;
    }

    void* a = (flags & 4) ? &local14 : &local10;
    out->m0 = *(void**)a;
    void* b = *(void**)((char*)a + 4);
    out->m4 = b;
    if (b != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }

    flags |= 8;

    if (flags & 4) {
        flags &= ~4;
        if (local14 != 0) {
            RefCounted* r = (RefCounted*)local14;
            if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))r->vptr)(r);
                if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))r->vptr)(r);
                }
            }
        }
    }

    if (flags & 2) {
        flags &= ~2;
        if (local18 != 0) {
            RefCounted* r = (RefCounted*)local18;
            if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))r->vptr)(r);
                if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))r->vptr)(r);
                }
            }
        }
    }

    if (flags & 1) {
        flags &= ~1;
        if (local1c != 0) {
            RefCounted* r = (RefCounted*)local1c;
            if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))r->vptr)(r);
                if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))r->vptr)(r);
                }
            }
        }
    }
}
