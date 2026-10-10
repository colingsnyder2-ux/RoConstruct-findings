// from server: 75% by tester
extern "C" __declspec(dllimport) double __stdcall frexp(double, int*);

extern "C" double __cdecl sub_5BF410(int, int, int*);
extern "C" void __cdecl sub_5BDB70(int, double);
extern "C" void __cdecl sub_5BDB90(int, int);

int __cdecl sub_5C9810(int a)
{
    int e;
    double m = sub_5BF410(a, 1, &e);
    double r = frexp(m, &e);
    sub_5BDB70(a, r);
    sub_5BDB90(a, e);
    return 2;
}
