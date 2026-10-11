// from server: 77% by atomic.potato
struct S_func_0065bc50 {
    char pad0[308];
    int m_x;
    int* f();
};

struct S_func_00662a10 {
    int f(int);
};

struct S_func_006824d0 {
    void f(void*, void*);
};

struct S_func_0066fc60 {
    void f(void*, void*);
};

struct S_func_0065c490 {
    void f(void*);
};

struct S_func_0040c2d0 {
    void f(void*);
};

struct S {
    void* m_p0;
    void* m_p4;
    void g(float);
};

void S::g(float f)
{
    float local;
    S_func_006824d0* p;
    p = (S_func_006824d0*)(*(void**)((char*)m_p0 + 0x118));
    p->f(&local, m_p4);
    if (f == local)
        return;
    local = f;
    S_func_0066fc60* q;
    q = (S_func_0066fc60*)(*(void**)((char*)m_p0 + 0x118));
    q->f(&local, m_p4);
    S_func_0065c490* r;
    r = (S_func_0065c490*)m_p0;
    r->f(m_p4);
    S_func_0065bc50* s;
    s = (S_func_0065bc50*)m_p0;
    int* pi = s->f();
    S_func_00662a10* t;
    t = (S_func_00662a10*)pi;
    int v = t->f(0);
    S_func_0040c2d0* u;
    u = (S_func_0040c2d0*)m_p0;
    u->f((void*)v);
}
