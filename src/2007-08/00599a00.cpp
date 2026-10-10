// from server: 51% by colin
struct S_func_00599a00 {
    char pad0[0x150];
    float m_150;
    float m_154;
    float m_158;
    char pad1[0x180 - 0x15c];
    float m_180;
    float m_184;
    float m_188;
    bool f(float arg);
};

extern "C" float __stdcall sub_005997c0(float a, float b, float c, float d);
extern "C" void* __stdcall sub_00599480();
extern float g_00793760;

bool S_func_00599a00::f(float arg)
{
    float dx = m_180 - m_150;
    float dy = m_184 - m_154;
    float dz = m_188 - m_158;
    float dist = dx * dx + dy * dy + dz * dz;
    float len = 0.0f;
    len = dist;
    float sq = 0.0f;
    sq = len;
    float root = 0.0f;
    root = sq;
    float result = 0.0f;
    result = root;
    float tmp = 0.0f;
    tmp = result;
    float r = sub_005997c0(arg, tmp, 0.0f, 0.0f);
    float d = 0.0f;
    d = r;
    if (d == 0.0f) {
        return false;
    }
    float inv = 1.0f / d;
    float scale = inv - g_00793760;
    float ox = dx * scale;
    float oy = dy * scale;
    float oz = dz * scale;
    m_150 = m_150 - ox;
    m_154 = m_154 - oy;
    m_158 = m_158 - oz;
    void* p = sub_00599480();
    if (p) {
        void** vt = *(void***)p;
        typedef void (__stdcall *Fn)(void*);
        Fn fn = (Fn)vt[3];
        fn(p);
    }
    return true;
}
