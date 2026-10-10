// from server: 95% by atomic.potato
struct S_func_00666bc0 {
    char pad[6];
    unsigned char m_enabled;
    unsigned char m_value;
    int f();
};

int S_func_00666bc0::f()
{
    if (m_enabled)
        return 1;
    return -(int)m_value;
}
