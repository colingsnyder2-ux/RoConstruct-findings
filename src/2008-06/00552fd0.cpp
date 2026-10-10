// from server: 48% by atomic.potato
struct S
{
    int f();
    int g();
};

int S::f()
{
    return !g();
}
