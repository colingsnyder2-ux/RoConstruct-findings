// from server: 85% by colin
extern "C" {
    int __cdecl _errno(void);
    int __cdecl fseek(void* stream, long offset, int origin);
    long __cdecl ftell(void* stream);
    char* __cdecl strerror(int errnum);
}

extern int DAT_007b9944;
extern int DAT_007b994c;
extern int DAT_007b9a04[];
extern int DAT_007b9a10;
extern int DAT_007b9a14;
extern int DAT_0078a05c;

extern int __cdecl sub_005bf240(int, int, int);
extern int __cdecl sub_005be8e0(int, int);
extern int __cdecl sub_005bf650(int, int, int, int);
extern int __cdecl sub_005bf500(int, int, int);
extern int __cdecl sub_005bdb50(int);
extern int __cdecl sub_005bdb90(int, int);
extern int __cdecl sub_005bdc90(int, int, int);

extern int (__stdcall *DAT_0077e8f8)(int, int, int);
extern int (__stdcall *DAT_0077e850)(void);
extern int (__stdcall *DAT_0077e840)(int);
extern int (__stdcall *DAT_0077e8fc)(int);

struct lua_exception {
    int method(int a);
};

int lua_exception::method(int a)
{
    int* p;
    int v;
    int r;
    int e;

    p = (int*)sub_005bf240(a, 1, (int)&DAT_007b9944);
    if (*p == 0)
        sub_005be8e0(a, (int)&DAT_007b994c);
    v = *p;

    r = sub_005bf650(a, 2, (int)&DAT_007b9a10, (int)&DAT_007b9a14);
    e = sub_005bf500(a, 3, 0);
    if (DAT_0077e8f8(v, e, DAT_007b9a04[r]) != 0) {
        int* err = (int*)DAT_0077e850();
        int code = *err;
        sub_005bdb50(a);
        sub_005bdc90(a, (int)&DAT_0078a05c, DAT_0077e840(code));
        sub_005bdb90(a, code);
        return 3;
    }
    sub_005bdb90(a, DAT_0077e8fc(v));
    return 1;
}
