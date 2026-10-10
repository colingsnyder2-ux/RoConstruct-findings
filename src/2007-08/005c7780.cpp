// from server: 68% by colin
extern "C" {
    int __cdecl _errno();
    void* __cdecl _popen(const char*, const char*);
    char* __cdecl strerror(int);
}

extern "C" void* __stdcall sub_5bf350(void*, int, int);
extern "C" void* __stdcall sub_5bf3b0(void*, int, const char*, int);
extern "C" void* __stdcall sub_5be5b0(void*, int);
extern "C" void __stdcall sub_5bde00(void*, int, const char*);
extern "C" void __stdcall sub_5be160(void*, int);
extern "C" void __stdcall sub_5bdb50(void*);
extern "C" void __stdcall sub_5bdb90(void*, void*);
extern "C" void __stdcall sub_5bdc90(void*, const char*, void*, int);

extern void* (__stdcall *off_77e82c)(void*, void*);
extern void* (__stdcall *off_77e840)(void*);
extern void* (__stdcall *off_77e850)();

struct S {
    int f(void* a);
};

int S::f(void* a)
{
    void* v1 = sub_5bf350(a, 1, 0);
    void* v2 = sub_5bf3b0(a, 2, (const char*)0x79f4f4, 0);
    int* v3 = (int*)sub_5be5b0(a, 4);
    *v3 = 0;
    sub_5bde00(a, -10000, (const char*)0x7b9944);
    sub_5be160(a, -2);
    int r = (int)off_77e82c(v1, v2);
    *v3 = r;
    if (r == 0)
        return 1;
    void* v4 = off_77e850();
    void* v5 = *(void**)v4;
    sub_5bdb50(a);
    void* v6 = off_77e840(v5);
    if (v1 != 0) {
        sub_5bdc90(a, (const char*)0x7b9930, v1, (int)v6);
        sub_5bdb90(a, v5);
    } else {
        sub_5bdc90(a, (const char*)0x78a05c, v6, 0);
        sub_5bdb90(a, v5);
    }
    return 3;
}
