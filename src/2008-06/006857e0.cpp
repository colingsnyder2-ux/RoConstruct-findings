// from server: 80% by colin
struct S_func_006857e0 {
    char pad0[0xfc];
    float m_fc;
    char pad1[0x10c - 0xfc - 4];
    float m_10c;
    char pad2[0x11c - 0x10c - 4];
    float m_11c;
    float* f();
};

float* S_func_006857e0::f()
{
    static unsigned int flag = 0;
    static float g28;
    static float g2c;
    static float g30;
    if (!(flag & 1)) {
        flag |= 1;
        g28 = m_10c;
        g30 = m_fc;
        g2c = m_11c;
    }
    return &g28;
}
