// from server: 49% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" int __cdecl sub_460e60(int);

struct T
{
};

extern "C" int __cdecl sub_76eeb0(T *, int, int);

int S::f(int a, int b, int c)
{
    int x = sub_460e60(0);
    sub_76eeb0((T *)x, a, b);
    return a;
}
