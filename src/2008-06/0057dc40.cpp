// from server: 85% by atomic.potato
struct P_func_0060cbf0
{
    void g();
};

struct S_func_0060cbf0
{
    P_func_0060cbf0* m_p;
    void f();
};

void S_func_0060cbf0::f()
{
    m_p->g();
}

struct EngineStatsCommand
{
    void f(int);
    char pad0[12];
    struct
    {
        char pad0[516];
        struct
        {
            char pad0[740];
            S_func_0060cbf0* m_p;
        }* m_p;
    }* m_p;
};

void EngineStatsCommand::f(int)
{
    m_p->m_p->m_p->f();
}
