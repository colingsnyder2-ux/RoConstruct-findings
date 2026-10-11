// from server: 63% by atomic.potato
struct CInstanceRecord
{
    void f(int, int);
};

struct CXTPControlTabWorkspace
{
    void f();
    char pad0[0x178];
    int m178;
    char pad1[0x8c];
    CInstanceRecord *m208;
};

void CInstanceRecord::f(int, int)
{
}

void CXTPControlTabWorkspace::f()
{
    CInstanceRecord *p = m208;
    if (p != 0 && *(int *)((char *)p + 0x7c) == (int)&m178)
    {
        *(int *)((char *)p + 0x7c) = 0;
        p->f(0, -1);
    }
}
