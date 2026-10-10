// from server: 25% by atomic.potato
struct S
{
    int IsVirtualMode() const;
    int f();
    virtual int Dispatch();
};

int S::IsVirtualMode() const
{
    return 0;
}

int S::f()
{
    S* p = this;
    if (p->IsVirtualMode())
        return 0;
    return p->Dispatch();
}
