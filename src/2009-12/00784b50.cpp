// from server: 69% by atomic.potato
struct P_0076b770
{
    void f(int, int);
};

struct ScriptMouseCommand
{
    char pad[28];
    P_0076b770* m_p;
    int f(int);
};

int ScriptMouseCommand::f(int value)
{
    m_p->f(0, value);
    return value;
}
