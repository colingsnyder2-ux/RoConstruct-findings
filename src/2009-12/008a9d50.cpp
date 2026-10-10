// from server: 35% by atomic.potato
struct S
{
    virtual void f();
    int g();
    int m20;
};

int S::g()
{
    if (m20 != 0)
        f();
    return 0;
}
