// from server: 43% by atomic.potato
struct BallBlockContact
{
    void f(void*, int);
};

struct S_func_00750230
{
    BallBlockContact* m_p;
    BallBlockContact* __cdecl f(void*);
};

BallBlockContact* S_func_00750230::f(void* p)
{
    m_p->f(p, 0);
    return m_p;
}
