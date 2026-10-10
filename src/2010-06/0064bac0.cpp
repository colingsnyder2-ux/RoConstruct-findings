// from server: 95% by atomic.potato
struct S_func_0064bac0 {
    char pad0[6];
    unsigned char m_flag;
    unsigned char m_value;
    int f();
};

int S_func_0064bac0::f()
{
    if (m_flag)
        return 1;
    return -(int)m_value;
}
