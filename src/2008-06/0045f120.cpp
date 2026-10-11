// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long ref1;
    volatile long ref2;
};

struct String {
    char buf[28];
};

extern "C" void __stdcall StringCtor(String*, const char*);
extern "C" void __stdcall StringDtor(String*);

struct Outer {
    void* p1;
    RefCounted* p2;
};

extern "C" void __stdcall sub_45F020(Outer* out, const char* s);
extern "C" void __stdcall sub_55A8F0(RefCounted* p, void* arg);

struct S {
    void* f(const char* s, void* arg);
};

void* S::f(const char* s, void* arg) {
    Outer o;
    sub_45F020(&o, s);
    RefCounted* esi = o.p2;
    RefCounted* edi = (RefCounted*)o.p1;
    if (esi) {
        _InterlockedExchangeAdd(&esi->ref1, 1);
    }
    RefCounted* ebp = (RefCounted*)o.p2;
    if (ebp) {
        if (_InterlockedExchangeAdd(&ebp->ref1, -1) == 1) {
            ((void (__stdcall*)(RefCounted*))ebp->vptr[1])(ebp);
            if (_InterlockedExchangeAdd(&ebp->ref2, -1) == 1) {
                ((void (__stdcall*)(RefCounted*))ebp->vptr[2])(ebp);
            }
        }
    }
    String str;
    StringCtor(&str, (const char*)arg);
    ((void (__stdcall*)(RefCounted*, String*))edi->vptr[1])(edi, &str);
    StringDtor(&str);
    sub_55A8F0(edi, arg);
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->ref1, -1) == 1) {
            ((void (__stdcall*)(RefCounted*))esi->vptr[1])(esi);
            if (_InterlockedExchangeAdd(&esi->ref2, -1) == 1) {
                ((void (__stdcall*)(RefCounted*))esi->vptr[2])(esi);
            }
        }
    }
    return edi;
}
