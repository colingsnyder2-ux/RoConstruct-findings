// from server: 43% by atomic.potato
struct V
{
    virtual void g(void *);
};

struct S
{
    int f();
    int field54;
    int field58;
    V *field64;
};

int S::f()
{
    if (field58 == 0)
        return 0;
    if (field64 == 0)
        return 0;
    field64->g(&field54);
    return 0;
}
