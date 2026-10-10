// from server: 93% by colin
extern "C" __declspec(dllimport) double __cdecl ceil(double);

extern "C" double __cdecl sub_005BF410(int, int);
extern "C" void __cdecl sub_005BDB70(int);

int __cdecl sub_005C9590(int a)
{
    double d;
    d = sub_005BF410(a, 1);
    d = ceil(d);
    sub_005BDB70(a);
    return 1;
}
