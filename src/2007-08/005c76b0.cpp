// from server: 65% by colin
extern "C" {
    int __cdecl _errno();
    void* __cdecl fopen(const char*, const char*);
    char* __cdecl strerror(int);
}

extern void* __stdcall sub_5bf350(void*, int, int);
extern void* __stdcall sub_5bf3b0(void*, int, const char*, int);
extern void* __stdcall sub_5be5b0(void*, int);
extern void* __stdcall sub_5bde00(void*, int, const char*);
extern void* __stdcall sub_5be160(void*, int);
extern void* __stdcall sub_5bdb50(void*);
extern void* __stdcall sub_5bdb90(void*, void*);
extern void* __stdcall sub_5bdc90(void*, const char*, ...);

extern void* __stdcall GetLastError();
extern void* __stdcall FormatMessageA(void*, void*, void*, void*, void*, void*, void*);

struct lua_exception {
    int func(void* a);
};

int lua_exception::func(void* a) {
    void* v1 = sub_5bf350(a, 1, 0);
    void* v2 = sub_5bf3b0(a, 2, (const char*)0x79f4f4, 0);
    void* v3 = sub_5be5b0(a, 4);
    *(int*)v3 = 0;
    sub_5bde00(a, -10000, (const char*)0x7b9944);
    sub_5be160(a, -2);
    int r = ((int (__stdcall*)(void*, void*))0x77e910)(v1, v2);
    *(int*)v3 = r;
    if (r == 0) {
        return 1;
    }
    int e = *(int*)GetLastError();
    sub_5bdb50(a);
    void* msg = FormatMessageA((void*)0x77e840, (void*)e, 0, 0, 0, 0, 0);
    if (v1 != 0) {
        sub_5bdc90(a, (const char*)0x7b9930, v1, msg);
        sub_5bdb90(a, (void*)e);
        return 3;
    }
    sub_5bdc90(a, (const char*)0x78a05c, msg);
    sub_5bdb90(a, (void*)e);
    return 3;
}
