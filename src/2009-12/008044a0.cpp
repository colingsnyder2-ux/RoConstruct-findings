// from server: 70% by atomic.potato
struct S_func_008044a0 {
    virtual S_func_008044a0* f194();
};

S_func_008044a0* S_func_008044a0::f194()
{
    S_func_008044a0* q = this->f194();
    while (q != 0)
        q = q->f194();
    return this;
}
