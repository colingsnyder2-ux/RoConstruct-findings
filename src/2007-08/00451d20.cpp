// from server: 19% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl __stdcall_helper_403800();
extern "C" void __cdecl __stdcall_helper_403830();
extern "C" void __cdecl __stdcall_helper_40d550();
extern "C" void __cdecl __stdcall_helper_42e410();
extern "C" void __cdecl __stdcall_helper_533fd0();
extern "C" void __cdecl __stdcall_helper_534df0();
extern "C" void __cdecl __stdcall_helper_5595a0();
extern "C" void __cdecl __stdcall_helper_56c0a0();
extern "C" void __cdecl __stdcall_helper_56c3b0();
extern "C" void __cdecl __stdcall_helper_57fed0();
extern "C" void __cdecl __stdcall_helper_596500();
extern "C" void __cdecl __stdcall_helper_630a1e();

extern "C" void __cdecl __stdcall_helper_77e6a8();
extern "C" void __cdecl __stdcall_helper_77e6ac();

extern char G_7919c4;

struct RefCounted {
    void* vptr;
    long refcount;
    long refcount2;
};

struct Inner {
    char pad[0x78];
    void* field78;
};

struct Outer {
    char pad[0x150];
    void* field150;
};

struct ReportAbuseVerb {
    void func();
};

void ReportAbuseVerb::func()
{
    Inner* self = (Inner*)this;
    void* p;
    __stdcall_helper_403800();
    p = 0;
    __stdcall_helper_40d550();
    __stdcall_helper_403830();
    __stdcall_helper_42e410();
    if (p == 0) {
        Outer* o = (Outer*)p;
        if (o->field150 != 0) {
            __stdcall_helper_533fd0();
            __stdcall_helper_596500();
            __stdcall_helper_57fed0();
            __stdcall_helper_534df0();
            __stdcall_helper_56c3b0();
            __stdcall_helper_77e6a8();
            __stdcall_helper_56c0a0();
            __stdcall_helper_77e6ac();
        }
    }
    __stdcall_helper_5595a0();
}
