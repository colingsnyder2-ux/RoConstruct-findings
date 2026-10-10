// from server: 72% by atomic.potato
struct SpecialShape_005a0090
{
    char pad[448];
    float m_value;
    double m_scale;
    double f();
};

double g_00817a88 = 0.0;

double SpecialShape_005a0090::f()
{
    return (1.0 / m_value) * m_scale * g_00817a88;
}
