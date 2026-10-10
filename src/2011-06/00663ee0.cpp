// from server: 71% by atomic.potato
struct CoreScript
{
    char pad0[3];
    unsigned char m_03;
    char pad1[3];
    unsigned char m_07;
    int f();
};

int CoreScript::f()
{
    if (m_03 == 0 && m_07 != 0)
        return 1;
    return 0;
}
