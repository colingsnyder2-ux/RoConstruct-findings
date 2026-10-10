// from server: 76% by colin
extern "C" {
    int __cdecl _errno(void);
    int __cdecl setvbuf(void*, char*, int, unsigned int);
    char* __cdecl strerror(int);
}

extern int DAT_007b9944;
extern int DAT_007b994c;
extern int DAT_007b9a38;
extern int DAT_007b9a2c[];
extern char DAT_0078a05c[];

extern int __cdecl sub_005bf240(int, int, int);
extern int __cdecl sub_005be8e0(int, int);
extern int __cdecl sub_005bf650(int, int, int, int);
extern int __cdecl sub_005bf500(int, int, int);
extern int __cdecl sub_005bdd60(int, int);
extern int __cdecl sub_005bdb50(int);
extern int __cdecl sub_005bdc90(int, int, int);
extern int __cdecl sub_005bdb90(int, int);

extern int (__stdcall *DAT_0077e8bc)(int, int, int, int, int);
extern int (__stdcall *DAT_0077e850)();
extern int (__stdcall *DAT_0077e840)(int);

struct lua_exception {
    int f(int a);
};

int lua_exception::f(int a)
{
    int* p;
    int v;
    int r;
    int e;

    p = (int*)sub_005bf240(a, 1, (int)&DAT_007b9944);
    if (*p == 0) {
        sub_005be8e0(a, (int)&DAT_007b994c);
    }
    v = *p;

    r = sub_005bf650(a, 2, 0, (int)&DAT_007b9a38);
    e = sub_005bf500(a, 3, 0x200);
    r = DAT_0077e8bc(v, 0, DAT_007b9a2c[r], e, 0x200);
    e = DAT_0077e850();
    v = *(int*)e;

    if (r == 0) {
        sub_005bdd60(a, 1);
        return 1;
    }

    sub_005bdb50(a);
    sub_005bdc90(a, (int)DAT_0078a05c, DAT_0077e840(v));
    sub_005bdb90(a, v);
    return 3;
}
