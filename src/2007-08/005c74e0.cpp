// from server: 87% by colin
extern "C" {
    int __cdecl _errno();
    int __cdecl fclose(void*);
    char* __cdecl strerror(int);
}

extern "C" void* __cdecl sub_5BF240(void*, int, const char*);
extern "C" void __cdecl sub_5BDD60(void*, int);
extern "C" void __cdecl sub_5BDB50(void*);
extern "C" void __cdecl sub_5BDC90(void*, const char*, char*);
extern "C" void __cdecl sub_5BDB90(void*, void*);

extern "C" void* __stdcall GetLastError();
extern "C" int __stdcall CloseHandle(void*);

struct lua_exception {
    int f(void* a);
};

int lua_exception::f(void* a)
{
    void* h = sub_5BF240(a, 1, (const char*)0x7B9944);
    void* p = *(void**)h;
    int r = CloseHandle(p);
    int err = -r;
    int flag = (err >> 31) + 1;
    *(int*)h = 0;
    int e = (int)GetLastError();
    void* q = *(void**)e;
    if (flag) {
        sub_5BDD60(a, 1);
        return 1;
    }
    sub_5BDB50(a);
    char* s = strerror((int)q);
    sub_5BDC90(a, (const char*)0x78A05C, s);
    sub_5BDB90(a, q);
    return 3;
}
