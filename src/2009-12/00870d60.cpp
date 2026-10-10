// from server: 76% by atomic.potato
extern "C" int sub_8708c0(int);
extern "C" void sub_870b60(int, int);

struct S
{
    void f(int, int);
};

void S::f(int a, int b)
{
    int x = sub_8708c0(a);
    if (x)
        sub_870b60(x, b);
}
