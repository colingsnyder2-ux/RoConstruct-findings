// from server: 64% by atomic.potato
struct S
{
    int value;
    unsigned char flag;

    void f();
};

void S::f()
{
    if (flag)
    {
        S *p = *(S **)this;
        ((void (*)())p)();
    }
}
