// from server: 92% by colin
struct S_func_007b76e0 {
    char pad0[4];
    char m_field4;
    char pad5[3];
    int m_field8;
    int m_fieldc;
    float m_field10;
    float m_field14;
    float m_field18;
    float m_field1c;
    float m_field20;
    float m_field24;
    float m_field28;
    S_func_007b76e0* f(S_func_007b76e0* other);
};

extern "C" int __stdcall sub_00598fa0(int* self, int value);

S_func_007b76e0* S_func_007b76e0::f(S_func_007b76e0* other)
{
    m_field4 = other->m_field4;
    sub_00598fa0(&m_field8, other->m_field8);
    sub_00598fa0(&m_fieldc, other->m_fieldc);
    m_field10 = other->m_field10;
    m_field14 = other->m_field14;
    m_field18 = other->m_field18;
    m_field1c = other->m_field1c;
    m_field20 = other->m_field20;
    m_field24 = other->m_field24;
    m_field28 = other->m_field28;
    return this;
}
