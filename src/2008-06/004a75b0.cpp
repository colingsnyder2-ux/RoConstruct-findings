// from server: 53% by colin
struct S {
    int __cdecl f(int, int);
};

extern "C" int __cdecl sub_4A7000(int*, int, int);
extern "C" int __cdecl sub_4A74C0(int*);

int S::f(int a, int b)
{
    int local = 0xC2;
    sub_4A7000(&local, a, b);
    if (*(int*)(a + 4) != 0)
        sub_4A74C0(&local);
    return local;
}
