// from server: 92% by atomic.potato
struct S_func_006d5c70 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct S_func_006dada0 {
    void f(int a1);
};

struct S_func_006f6d20 {
    void f(void* a1, void* a2);
};

struct S {
    char pad0[8];
    S_func_006dada0* m_p;
    void f(S_func_006d5c70* a1);
};

void S::f(S_func_006d5c70* a1)
{
    a1->f((int)this);
    m_p->f((int)a1);
    S_func_006dada0* p = m_p;
    S_func_006f6d20* q = (S_func_006f6d20*)((char*)a1 + 8);
    q->f(p, (void*)0x6dada0);
}
