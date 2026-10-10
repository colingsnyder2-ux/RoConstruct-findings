// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void onZero();
    virtual void onZero2();
    volatile long refs;
    volatile long weakRefs;
};

struct Str {
    char* buf;
    unsigned int size;
    unsigned int cap;
};

extern "C" void* __cdecl sub_587480();
extern "C" void __cdecl sub_5017C0(void*, const char*, ...);
extern "C" void __cdecl sub_56C3B0(void*);
extern "C" void __cdecl sub_56C0A0(void*, int, void*, void*);
extern "C" void __cdecl sub_412DC0(void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);

struct P8Decal {
    void __cdecl GetSetImpl(void* arg);
};

void P8Decal::GetSetImpl(void* arg) {
    if (arg == 0) return;

    void* p = sub_587480();
    Str s;
    sub_5017C0(&s, "FMOD: %s", p);
    sub_56C3B0(&s);

    char* data;
    if (s.cap >= 0x10)
        data = s.buf;
    else
        data = (char*)&s;

    void* v = *(void**)data;
    sub_56C0A0(v, 2, data, 0);

    RefCounted* rc = (RefCounted*)s.buf;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refs, -1) == 1) {
            rc->onZero();
            if (_InterlockedExchangeAdd(&rc->weakRefs, -1) == 1)
                rc->onZero2();
        }
    }

    sub_412DC0(&s, 0);
    sub_630B9E(&s, (void*)0x8410C0);
}
