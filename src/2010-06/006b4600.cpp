// from server: 87% by atomic.potato
struct S_func_006b4600 {
    char pad0[372];
    float m_x;
    float m_y;
    float m_z;
    void f(float *a1);
};

void S_func_006b4600::f(float *a1)
{
    a1[0] = m_x;
    a1[1] = m_y;
    a1[2] = m_z;
}
