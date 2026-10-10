// from server: 48% by atomic.potato
struct P_func_0091d6f0
{
    void f(int);
};

struct Q_func_0091d6f0
{
    char pad[28];
    P_func_0091d6f0* m_p;
};

struct S_func_0091d6f0
{
    char pad[64];
    Q_func_0091d6f0* m_p;
    void f(int);
};

void S_func_0091d6f0::f(int value)
{
    m_p->m_p->f(1);
    m_p->m_p->f(value);
}
