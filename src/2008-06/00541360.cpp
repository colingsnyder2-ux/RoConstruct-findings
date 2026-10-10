// from server: 37% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" int sub_5426F0(int, int, S *);

int S::f(int a, int, int c)
{
    sub_5426F0(c, a, this);
    return a;
}
