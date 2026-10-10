// from server: 26% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
    volatile long weakRefs;
};

struct String {
    char pad[0x1c];
};

struct Inner {
    char pad0[8];
    String s1;
    String s2;
};

struct Obj {
    Inner* inner;
};

struct SignalDesc {
    Obj* obj;
    int f(int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __stdcall sub_7273f0(void*, void*);
    void __stdcall sub_729380(void*, void*);
    void __stdcall sub_729350(void*, void*);
    void __stdcall sub_7272d0(void*);
    void __stdcall sub_77e69c(void*, void*);
    void __stdcall sub_77e6ac(void*);
    void __stdcall sub_5f1980(void*, void*);
    void __stdcall sub_491f40(void*);
    void __stdcall sub_491df0(void*);
    void __stdcall sub_4948b0(void*, void*);
    void __stdcall sub_630a1e(void);
}

int SignalDesc::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    char buf[0x40];
    void* local24;
    void* local28;
    void* local2c;
    void* local50;
    void* local54;
    void* local68;
    RefCounted* rc;
    int result;
    Inner* inner;
    void* edi;

    sub_7273f0(&local28, this);
    rc = (RefCounted*)a10;
    local24 = (void*)a9;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refs, 1);
    }
    sub_77e69c(&local50, &local54);
    sub_491f40(&local50);
    local2c = 0;
    result = (int)local24;
    inner = this->obj->inner;
    edi = (char*)inner + 4;
    sub_729380((char*)inner + 8, &local54);
    sub_729380((char*)local24 + 8, &local54);
    sub_5f1980(buf, &local54);
    sub_729380((char*)inner + 8, &local54);
    sub_729350((char*)local24 + 8, &local54);
    sub_5f1980(buf, &local54);
    sub_4948b0(edi, (void*)a10);
    if (local2c) {
        local2c = 0;
    }
    sub_491df0(&local28);
    sub_7272d0(&local24);
    sub_77e6ac(&local68);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refs, -1) == 1) {
            void** vtbl = (void**)rc->vptr;
            void (*dtor)(void*) = (void (*)(void*))vtbl[1];
            dtor(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefs, -1) == 1) {
                void** vtbl2 = (void**)rc->vptr;
                void (*dtor2)(void*) = (void (*)(void*))vtbl2[2];
                dtor2(rc);
            }
        }
    }
    sub_630a1e();
    return result;
}
