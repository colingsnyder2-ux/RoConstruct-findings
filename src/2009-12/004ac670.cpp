// from server: 47% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_4ac4d0(int, int, int, int, int, int);
extern "C" int __cdecl sub_486de0(int, int, int, int);

struct Inner {
    int* p;
    int begin;
    int end;
    int cap;
};

struct S {
    Inner* p;
    int f(int* a, int b, int c, int d, int e);
};

int S::f(int* a, int b, int c, int d, int e) {
    Inner* in = p;
    *a = 0;
    if (in == 0 || in->begin > b || b > in->end)
        _invalid_parameter_noinfo();
    *a = (int)in->p;
    a[1] = b;
    if (in->begin > c || c > in->end)
        _invalid_parameter_noinfo();
    if (*a != 0 && *a != (int)in->p)
        _invalid_parameter_noinfo();
    if (a[1] != c) {
        int x = in->end;
        char z = 0;
        int r = sub_4ac4d0(x, c, *(int*)((char*)&z), *(int*)((char*)&z + 4), *(int*)((char*)&z + 8), *(int*)((char*)&z + 12));
        sub_486de0(r, x, (int)in + 8, e);
        in->end = r;
    }
    return (int)a;
}
