// from server: 17% by atomic.potato
struct S
{
    int f(int);
    int g();
};

int S::f(int x)
{
    return x;
}

int S::g()
{
    return 0;
}
