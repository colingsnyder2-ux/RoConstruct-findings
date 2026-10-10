// from server: 40% by atomic.potato
struct S
{
    int f(int);
    int value;
};

extern "C" int sub_5426f0(int, int, S *);

int S::f(int a)
{
    sub_5426f0(a, value, this);
    return a;
}
