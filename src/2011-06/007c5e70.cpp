// from server: 14% by atomic.potato
struct S
{
    int f();
    int a;
    int b;
};

int S::f()
{
    return (b - a) / 20;
}
