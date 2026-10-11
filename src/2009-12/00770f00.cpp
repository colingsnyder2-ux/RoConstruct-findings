// from server: 56% by atomic.potato
struct S
{
    int f(int a, int b, int c);
};

extern "C" int __cdecl sub_460e60(int);
extern "C" int sub_76eff0(int *, int, int, int);

int S::f(int a, int b, int c)
{
    int value = sub_460e60(0);
    sub_76eff0(&value, a, b, c);
    return a;
}
