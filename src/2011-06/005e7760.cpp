// from server: 89% by atomic.potato
extern "C" void __cdecl std_exception_copy(void *, const void *);
extern "C" void *g_exception_vftable;

struct S_func_005e7760
{
    void *vftable;
    int m_04;
    int m_08;
    int m_0c;
    int m_10;
    void *f(void *);
};

void *S_func_005e7760::f(void *p)
{
    std_exception_copy(this, p);
    vftable = &g_exception_vftable;
    m_0c = ((int *)p)[3];
    m_10 = ((int *)p)[4];
    return this;
}
