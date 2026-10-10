// from server: 85% by colin
extern "C" {
int __cdecl _errno();
char* __cdecl strerror(int);
int __cdecl fflush(void*);
}

extern int DAT_007b987c;
extern char DAT_007b9990[];
extern char DAT_0078a05c[];

extern "C" int __cdecl sub_5bdea0(int, int, int);
extern "C" int* __cdecl sub_5bda90(int, int);
extern "C" int __cdecl sub_5be8e0(int, char*, int);
extern "C" int __cdecl sub_5bdd60(int, int);
extern "C" int __cdecl sub_5bdb50(int);
extern "C" int __cdecl sub_5bdc90(int, char*, int);
extern "C" int __cdecl sub_5bdb90(int, int);

extern "C" int (__stdcall *DAT_0077e8c0)(int);
extern "C" int* (__stdcall *DAT_0077e850)();
extern "C" int (__stdcall *DAT_0077e840)(int);

struct lua_exception {
    int f(int a);
};

int lua_exception::f(int a)
{
    int esi;
    int ebx;
    int* p;

    sub_5bdea0(a, 0xffffd8ef, 2);
    p = sub_5bda90(a, -1);
    esi = *p;
    if (esi == 0) {
        sub_5be8e0(a, DAT_007b9990, DAT_007b987c);
    }
    esi = DAT_0077e8c0(esi);
    esi = (esi == 0) ? 1 : 0;
    ebx = *DAT_0077e850();
    if (esi != 0) {
        sub_5bdd60(a, 1);
        return 1;
    }
    sub_5bdb50(a);
    sub_5bdc90(a, DAT_0078a05c, DAT_0077e840(ebx));
    sub_5bdb90(a, ebx);
    return 3;
}
