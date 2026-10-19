// from server: 39% by colin
struct S {
    char pad[0x1c];
    float f1c;
    char pad2[0xbc - 0x20];
    int m_bc;
    char pad3[0xcc - 0xc0];
    int m_cc;
    char pad4[0xd4 - 0xd0];
    int m_d4;
    int m_d8;
    void f();
};

extern "C" int __cdecl func_00598cd0(int);
extern "C" int __cdecl func_00598fa0(int, int);
extern "C" int __cdecl func_004ef2b0(int, int, int);
extern "C" int __cdecl func_004edeb0(int, int, int);
extern "C" int __cdecl func_004eedb0(int, int, int);
extern "C" int __cdecl func_004ee3b0(int, int, int);
extern "C" int __cdecl func_004ef7b0(int, int, int);
extern "C" int __cdecl func_004ee8b0(int, int, int);
extern "C" int __cdecl func_004dc4e0(int, int);

extern float g_819bac;
extern double g_826fd0;

void S::f()
{
    float a, b, c;
    if (m_bc == 0)
        return;
    int p = func_00598cd0(m_bc);
    a = *(float*)(p);
    b = *(float*)(p + 4);
    c = *(float*)(p + 8);
    int d = m_d4;
    if (d != 0) {
        a = a * *(float*)(d + 0x134);
        b = b * *(float*)(d + 0x138);
        c = c * *(float*)(d + 0x13c);
    }
    if (d == 0) {
        int t = *(int*)(m_bc + 0x1dc);
        int e = m_d8;
        if (t == 0) {
            int r = func_004eedb0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
            func_00598fa0(m_cc, r);
        } else if (t == 1) {
            int r = func_004edeb0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
            func_00598fa0(m_cc, r);
        } else if (t == 2) {
            int r = func_004ef2b0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
            func_00598fa0(m_cc, r);
        }
    } else {
        int t = *(int*)(d + 0x130);
        if (t <= 6) {
            int e = m_d8;
            int r;
            switch (t) {
            case 0:
                r = func_004ee3b0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
                break;
            case 1:
                r = func_004ef7b0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
                break;
            case 2:
                r = func_004ee8b0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
                break;
            case 3:
                r = func_004eedb0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
                break;
            case 4:
                r = func_004ef2b0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
                break;
            case 5:
                r = func_004edeb0(*(int*)(e + 0x140), e + 0x16c, (int)&a);
                break;
            default:
                r = 0;
                break;
            }
            func_004dc4e0(m_cc, r);
        }
    }
    float sq = (float)g_826fd0;
    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;
    float m = fa;
    if (fb > m) m = fb;
    if (fc > m) m = fc;
    f1c = m * sq * g_819bac;
}
