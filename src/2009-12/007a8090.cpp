// from server: 92% by atomic.potato
struct S
{
    virtual void f();
    int pad0[10];
    int value;
    S *g(int);
};

void S::f()
{
}

S *S::g(int value)
{
    f();
    if (this->value == 0)
        g(value);
    return this;
}
