// from server: 48% by atomic.potato
struct S
{
    virtual int f();
    int g();
};

int S::g()
{
    return f() != 0;
}
