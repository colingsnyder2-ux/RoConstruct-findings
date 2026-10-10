// from server: 14% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_403800();
extern "C" void __stdcall sub_403830();
extern "C" void __stdcall sub_40D550();
extern "C" void __stdcall sub_42E410();
extern "C" void __stdcall sub_5595A0();
extern "C" void __stdcall sub_57FED0();
extern "C" void __stdcall sub_596500();
extern "C" void __stdcall sub_630A1E();

extern "C" void __stdcall MSVCP80_str_dtor();
extern "C" const char* __stdcall MSVCP80_str_c_str();

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
    void Release();
};

void RefCounted::Release()
{
    if (_InterlockedExchangeAdd(&ref1, -1) == 1) {
        void** vt = (void**)vptr;
        typedef void (__stdcall *Fn)(RefCounted*);
        ((Fn)vt[1])(this);
        if (_InterlockedExchangeAdd(&ref2, -1) == 1) {
            ((Fn)vt[2])(this);
        }
    }
}

struct Inner {
    char pad[0x150];
    void* field150;
};

struct ReportAbuseVerb {
    char pad0[0x78];
    void* field78;
    void invoke(void* arg);
};

void ReportAbuseVerb::invoke(void* arg)
{
    void* local1c = 0;
    void* local14 = 0;
    void* local24 = 0;
    char local30[8];
    void* local10 = 0;
    void* local20 = 0;

    sub_403800();
    void* p = local1c;
    void* q = local14;
    if (q) {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }
    sub_40D550();
    if (local20) {
        RefCounted* r = (RefCounted*)local20;
        r->Release();
    }
    sub_403830();
    void* obj = local14;
    if (obj) {
        void* res = 0;
        sub_42E410();
        res = (void*)0;
    }
    if (local14) {
        RefCounted* r = (RefCounted*)local14;
        r->Release();
    }
    if (obj) {
        Inner* in = (Inner*)obj;
        if (in->field150) {
            sub_596500();
            sub_57FED0();
            void** vt = (void**)arg;
            void* v = vt[3];
            MSVCP80_str_c_str();
            typedef void (__stdcall *Fn)(void*, const char*);
            ((Fn)v)(arg, 0);
            void** vt2 = (void**)arg;
            typedef void (__stdcall *Fn2)(void*, int);
            ((Fn2)vt2[0])(arg, 1);
            MSVCP80_str_dtor();
        } else {
            void** vt = (void**)arg;
            typedef void (__stdcall *Fn)(void*, const char*);
            ((Fn)vt[3])(arg, (const char*)0x785954);
            void** vt2 = (void**)arg;
            typedef void (__stdcall *Fn2)(void*, int);
            ((Fn2)vt2[0])(arg, 0);
        }
    } else {
        void** vt = (void**)arg;
        typedef void (__stdcall *Fn)(void*, const char*);
        ((Fn)vt[3])(arg, (const char*)0x785954);
        void** vt2 = (void**)arg;
        typedef void (__stdcall *Fn2)(void*, int);
        ((Fn2)vt2[0])(arg, 0);
    }
    sub_5595A0();
}
