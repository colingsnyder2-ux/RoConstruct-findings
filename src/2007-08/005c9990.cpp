// from server: 54% by colin
extern "C" int __stdcall rand(void);
extern "C" int __stdcall sub_5BD580(int);
extern "C" void __stdcall sub_5BDB70(int, double);
extern "C" void __stdcall sub_5BE8E0(int, const char*);
extern "C" void __stdcall sub_5BF180(int, int, const char*);
extern "C" int __stdcall sub_5BF490(int, int);
extern "C" double __cdecl sub_631128(double);

struct S {
    int f(int);
};

int S::f(int a) {
    double d;
    int r;
    int b;
    int c;
    int e;

    r = rand();
    r = r % 0x7fff;
    d = (double)r * *(double*)0x7b9d68;

    switch (sub_5BD580(a)) {
    case 0:
        sub_5BDB70(a, d);
        return 1;
    case 1:
        b = sub_5BF490(a, 1);
        if (b < 1) {
            sub_5BF180(a, 1, (const char*)0x7b9d38);
        }
        sub_5BDB70(a, sub_631128((double)b * d) + *(double*)0x793198);
        return 1;
    case 2:
        b = sub_5BF490(a, 1);
        c = sub_5BF490(a, 2);
        if (b > c) {
            sub_5BF180(a, 2, (const char*)0x7b9d38);
        }
        e = c - b + 1;
        sub_5BDB70(a, sub_631128((double)e * d) + d);
        return 1;
    default:
        sub_5BE8E0(a, (const char*)0x7b9d4c);
        return 1;
    }
}
