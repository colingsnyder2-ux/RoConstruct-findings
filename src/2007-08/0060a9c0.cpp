// from server: 61% by colin
struct WeldJoint {
    char pad[0xc0];
    float m_c0;
    float m_c4;
    float m_c8;
    float m_cc;
    float m_d0;
    float m_d4;
    char pad2[0xc];
    float m_e4;
    float m_e8;
    float m_ec;
    float compute();
};

extern "C" float __cdecl sub_608a00(float, float);
extern "C" float __cdecl sub_625140(float);

float WeldJoint::compute() {
    float a = m_e4 - m_c0;
    float b = m_e8 - m_c4;
    float c = m_ec - m_c8;
    float d = m_cc - m_c0;
    float e = m_d0 - m_c4;
    float f = m_d4 - m_c8;
    float r1 = sub_608a00(c * a + c * a + b * b, f * f + d * d + e * e);
    return sub_625140(r1);
}
