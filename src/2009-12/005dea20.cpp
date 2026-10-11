// from server: 69% by atomic.potato
extern "C" int __cdecl sub_460e60(int);

struct S
{
    int f(int, int, int);
};

struct T
{
    void g(int, int, int);
};

int S::f(int a, int b, int c)
{
    int z = 0;
    int *p = (int *)sub_460e60(z);
    T *q = (T *)p;
    q->g(a, b, c);
    return a;
}
