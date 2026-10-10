// from server: 54% by colin
extern "C" {
    int __cdecl _errno();
    int __cdecl fflush(void*);
    char* __cdecl strerror(int);
}

extern "C" void* __stdcall sub_5bf240(void*, int, const char*);
extern "C" void __stdcall sub_5be8e0(void*, const char*);
extern "C" void __stdcall sub_5bdd60(void*, int);
extern "C" void __stdcall sub_5bdb50(void*);
extern "C" void __stdcall sub_5bdc90(void*, const char*, void*);
extern "C" void __stdcall sub_5bdb90(void*, void*);

extern "C" void* __stdcall GetLastError();
extern "C" int __stdcall CloseHandle(void*);

struct lua_exception {
    int f(void* a);
};

int lua_exception::f(void* a) {
    void* p = sub_5bf240(a, 1, (const char*)0x7b9944);
    if (*(int*)p == 0) {
        sub_5be8e0(a, (const char*)0x7b994c);
    }
    void* h = *(void**)p;
    int r = CloseHandle(h);
    int ok = (r == 0) ? 1 : 0;
    void* err = GetLastError();
    int e = *(int*)err;
    if (ok) {
        sub_5bdd60(a, 1);
        return 1;
    }
    sub_5bdb50(a);
    sub_5bdc90(a, (const char*)0x78a05c, (void*)e);
    sub_5bdb90(a, (void*)e);
    return 3;
}
