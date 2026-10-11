// from server: 32% by atomic.potato
struct S {
    char pad0[0x18];
    float m_18;
    unsigned int m_1c;
    int f(unsigned int);
};

extern float g_8ba1a8;
extern float g_8ba500;

int S::f(unsigned int a)
{
    if (a <= m_1c)
        return 0;
    float v = (float)(int)a;
    if ((int)a < 0)
        v += g_8ba1a8;
    v = v / m_18 + g_8ba500;
    if (v >= g_8ba1a8)
        return -1;
    return (int)v;
}
