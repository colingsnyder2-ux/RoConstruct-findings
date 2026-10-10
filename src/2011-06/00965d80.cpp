// from server: 40% by atomic.potato
struct S
{
    S *p;
    char pad[0x5d];
    char flag;
    S *next;
    S *f();
};

S *S::f()
{
    S *p = this->p;
    while (!p->flag)
        p = p->next;
    return p;
}
