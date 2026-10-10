// from server: 17% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
    volatile long weakRefs;
    void AddRef() {
        _InterlockedExchangeAdd(&refs, 1);
    }
    void Release() {
        if (_InterlockedExchangeAdd(&refs, -1) != 1) {
            (*(void(__thiscall**)(RefCounted*))(*(void***)this)[1])(this);
            if (_InterlockedExchangeAdd(&weakRefs, -1) == 1) {
                (*(void(__thiscall**)(RefCounted*))(*(void***)this)[2])(this);
            }
        }
    }
};

struct Arg1 {
    void* p;
};

struct Inner {
    char pad[8];
};

struct Outer {
    Inner* inner;
};

struct S {
    void* field0;
    void method(RefCounted* a, void* b, void* c);
};

extern "C" void __cdecl sub_7273f0(void*, void*);
extern "C" void __cdecl sub_7272d0(void*);
extern "C" void __cdecl sub_729380(void*, void*);
extern "C" void __cdecl sub_729350(void*, void*);
extern "C" void __cdecl sub_5f1980(void*);
extern "C" void __cdecl sub_494840(void*, void*);

void S::method(RefCounted* a, void* b, void* c)
{
    char buf[0x20];
    RefCounted* local = 0;
    sub_7273f0(buf, this);
    if (a) {
        a->AddRef();
    }
    local = a;
    if (a) {
        a->Release();
    }
    void* v = *(void**)this;
    void* edi = *(void**)((char*)v + 0x30);
    char buf2[0x40];
    sub_729380((char*)v + 8, buf2);
    sub_729380((char*)v + 8, buf2);
    sub_5f1980(buf2);
    char buf3[0x40];
    sub_729380((char*)v + 8, buf3);
    sub_729350((char*)v + 8, buf3);
    sub_5f1980(buf3);
    sub_494840((char*)edi + 4, b);
    if (local) {
        local->Release();
    }
    sub_7272d0(buf);
    if (a) {
        a->Release();
    }
}
