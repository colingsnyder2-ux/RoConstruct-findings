// from server: 50% by colin
struct S_func_005cbf90 {
    char pad0[0x198];
    float m_198;
    float m_19c;
    float m_1a0;
    char pad1[0x1c8 - 0x1a4];
    float m_1c8;
    float m_1cc;
    float m_1d0;
    float f(int arg);
};

extern float g_819bac;
extern "C" float __stdcall sqrtf(float);

float S_func_005cbf90::f(int arg)
{
    float dx = m_198 - m_1c8;
    float dy = m_19c - m_1cc;
    float dz = m_1a0 - m_1d0;
    float dist = dx * dy + dx * dy + dz * dz;
    float len = sqrtf(dist);
    if (arg > 0) {
        if (!(len > g_819bac)) {
            return len;
        }
        return 0.0f;
    }
    return len;
}
