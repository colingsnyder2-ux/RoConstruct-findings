// from server: 64% by colin
// roc 2007-08 005c8290  unit: lua_exception  size: 442 bytes

extern "C" {
    struct _iobuf;
    typedef struct _iobuf FILE;
    FILE *__cdecl __iob_func(void);
}

extern "C" int __cdecl sub_5be910(int, const char*);
extern "C" int __cdecl sub_5bd740(int, int);
extern "C" int __cdecl sub_5be020(int, int, const char*);
extern "C" int __cdecl sub_5bf700(int, int, const char*);
extern "C" int __cdecl sub_5bdee0(int, int, int);
extern "C" int __cdecl sub_5bd680(int, int);
extern "C" int __cdecl sub_5be5b0(int, int);
extern "C" int __cdecl sub_5bde00(int, int, const char*);
extern "C" int __cdecl sub_5be160(int, int);
extern "C" int __cdecl sub_5be0f0(int, int, int);
extern "C" int __cdecl sub_5bdcc0(int, int, int);
extern "C" int __cdecl sub_5be210(int, int);
extern "C" int __cdecl sub_5bd590(int, int);

struct lua_exception {
    int f(int a);
};

int lua_exception::f(int a)
{
    int *p1;
    int *p2;
    int *p3;
    int v;
    int (*fp)(void);

    sub_5be910(a, (const char*)0x7b9944);
    sub_5bd740(a, -1);
    sub_5be020(a, -2, (const char*)0x7a5674);
    sub_5bf700(a, 0, (const char*)0x7b98e0);
    sub_5bdee0(a, 2, 1);
    sub_5bd680(a, 0xffffd8ef);
    sub_5bf700(a, (int)0x7a5a6c, (const char*)0x7b9880);

    fp = *(int(**)(void))0x77e88c;
    v = fp();

    p1 = (int*)sub_5be5b0(a, 4);
    *p1 = 0;
    sub_5bde00(a, 0xffffd8f0, (const char*)0x7b9944);
    sub_5be160(a, -2);
    *p1 = v;
    sub_5bd740(a, -1);
    sub_5be0f0(a, 0xffffd8ef, 1);
    sub_5be020(a, -2, (const char*)0x7b9a6c);

    v = fp();
    p2 = (int*)sub_5be5b0(a, 4);
    *p2 = 0;
    sub_5bde00(a, 0xffffd8f0, (const char*)0x7b9944);
    sub_5be160(a, -2);
    *p2 = v + 0x20;
    sub_5bd740(a, -1);
    sub_5be0f0(a, 0xffffd8ef, 2);
    sub_5be020(a, -2, (const char*)0x7b9a64);

    v = fp();
    p3 = (int*)sub_5be5b0(a, 4);
    *p3 = 0;
    sub_5bde00(a, 0xffffd8f0, (const char*)0x7b9944);
    sub_5be160(a, -2);
    *p3 = v + 0x40;
    sub_5be020(a, -2, (const char*)0x7b9a5c);
    sub_5bde00(a, -1, (const char*)0x7b9854);
    sub_5bdee0(a, 0, 1);
    sub_5bdcc0(a, (int)0x5c7460, 0);
    sub_5be020(a, -2, (const char*)0x7b996c);
    sub_5be210(a, -2);
    sub_5bd590(a, -2);
    sub_5bdcc0(a, (int)0x5c74e0, 0);
    sub_5be020(a, 0xffffd8ef, (const char*)0x7b996c);

    return 1;
}
