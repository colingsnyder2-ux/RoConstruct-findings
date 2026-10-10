// from server: 58% by colin
extern "C" int __cdecl sub_5bda90(int, int);
extern "C" int __cdecl sub_5bdf20(int, int);
extern "C" int __cdecl sub_5bde00(int, int, int);
extern "C" int __cdecl sub_5bd850(int, int, int);
extern "C" int __cdecl sub_5bd590(int, int);
extern "C" void __cdecl sub_402a60(void*, void*);

extern int dword_8abc2c;

struct S {
    bool f(int, int, int);
};

bool S::f(int a, int b, int c) {
    int* p = (int*)sub_5bda90(a, b);
    if (p == 0)
        return false;
    if (sub_5bdf20(a, b) == 0) {
        sub_5bd590(-2, a);
        return false;
    }
    sub_5bde00(a, -10000, dword_8abc2c);
    if (sub_5bd850(a, -1, -2) == 0)
        return false;
    sub_5bd590(a, -3);
    int v = *p;
    *(int*)c = v;
    sub_402a60((void*)(c + 4), (void*)(p + 1));
    return true;
}
