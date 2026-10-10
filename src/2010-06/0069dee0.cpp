// from server: 83% by atomic.potato
struct S
{
    int f(int a, int b);
};

extern "C" int __cdecl sub_594410(int, int);
extern "C" int __stdcall sub_5ad040(S *, int);

int S::f(int a, int b)
{
    return sub_5ad040(this, sub_594410(b, a));
}
