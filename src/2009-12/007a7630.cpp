// from server: 76% by atomic.potato
struct S
{
    virtual void f();
    int pad0[5];
    unsigned char flag;
    int pad1[4];
    int count;
    void g();
};

void S::f()
{
    if (count > 0)
        --count;
    if (flag)
        g();
}
