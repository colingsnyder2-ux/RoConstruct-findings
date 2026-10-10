// from server: 60% by atomic.potato
struct S
{
    int __cdecl f(int, int);
};

extern "C" int __cdecl sub_004ee5c0(int, int);

int __cdecl S::f(int a, int b)
{
    return sub_004ee5c0(a, b);
}
