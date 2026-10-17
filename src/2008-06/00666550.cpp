// from server: 46% by colin
struct DataSource {
    const void* get();
};

struct S_5d9160 {
    int f();
};

struct S_5d9180 {
    int f();
};

struct S_599360 {
    void f();
};

struct S_62e100 {
    void f(void* out);
};

struct S_62e140 {
    void f(void* v);
};

struct S_62e2a0 {
    void* f();
};

struct S_62e2e0 {
    void* f();
};

struct S_6060b0 {
    void f(void* v);
};

struct S_613f00 {
    float f();
};

struct S_65ff10 {
    float f();
};

struct S_643d30 {
    void* f();
};

struct S_66e6a0 {
    void f(float v);
};

struct S_793d50 {
    void* f();
};

struct S_612fb0 {
    void f(void* a, void* b);
};

struct S_614170 {
    void f();
};

struct S_666350 {
    void* f(void* out);
};

struct S_6663a0 {
    void* f(void* out);
};

extern "C" void __cdecl sub_4a6100(void* out, void* a, void* b);
extern "C" void __cdecl sub_518740(void* out, void* a, float b);

extern float g_826e6c;
extern float g_82746c;
extern float g_847b94;
extern float g_84cc18;
extern float g_84cc28;
extern float g_82711c;
extern unsigned char g_97d580;
extern unsigned char g_97d568;

struct S_func_00666550 {
    char pad[0xa8];
    float m_a8;
    char pad2[0x08];
    float m_b0;
    float m_b4;
    float m_b8;
    float m_bc;
    float m_c0;
    float m_c4;
    float m_c8;
    void f(float dt);
};

void S_func_00666550::f(float dt)
{
    S_66e6a0* p = (S_66e6a0*)this;
    p->f(dt);

    S_793d50* r = (S_793d50*)this;
    void* a = r->f();
    int b = ((S_5d9160*)a)->f();
    if (b == 0)
        return;

    void* a2 = r->f();
    int esi = ((S_5d9180*)a2)->f();
    if (esi == 0)
        return;

    ((S_599360*)esi)->f();

    void* a3 = r->f();
    float f1 = *(float*)((char*)a3 + 0x1b0);

    float tmp;
    ((S_62e100*)esi)->f(&tmp);

    float v = f1 * g_826e6c + m_c4 + m_b4 - *(float*)((char*)esi + 0xd4);
    v = v * tmp;
    v = v * g_84cc18;

    void* a4 = ((S_62e2e0*)esi)->f();
    v = v - *(float*)((char*)a4 + 4);

    float tmp2;
    ((S_62e100*)esi)->f(&tmp2);

    float f2 = *(float*)((char*)&tmp2 + 4) * g_84cc28;
    float neg = -f2;

    float chosen;
    if (v < neg) {
        chosen = neg;
    } else if (v > f2) {
        chosen = f2;
    } else {
        chosen = v;
    }

    float zero = 0.0f;
    float vec[3];
    vec[0] = zero;
    vec[1] = zero;
    vec[2] = zero;
    ((S_6060b0*)esi)->f(vec);

    void* ebp = ((S_643d30*)this)->f();

    float height;
    if (ebp != 0) {
        void* eax = *(void**)((char*)ebp + 0xa0);
        eax = *(void**)((char*)eax + 0x10);
        int ecx = *(int*)((char*)eax + 0x28);
        if (ecx != 0) {
            height = ((S_65ff10*)ecx)->f();
        } else {
            height = *(float*)((char*)eax + 0x8c);
        }
    } else {
        int ecx = *(int*)((char*)esi + 0x28);
        if (ecx != 0) {
            height = ((S_65ff10*)ecx)->f();
        } else {
            height = *(float*)((char*)esi + 0x8c);
        }
    }

    float h2;
    {
        int ecx = *(int*)((char*)esi + 0x28);
        if (ecx != 0) {
            h2 = ((S_65ff10*)ecx)->f();
        } else {
            h2 = *(float*)((char*)esi + 0x8c);
        }
    }

    float maxh = (h2 > height) ? h2 : height;

    if (zero == m_c8) {
    } else {
        ((S_599360*)b)->f();
        ((S_599360*)esi)->f();

        float d = (m_c8 - *(float*)((char*)b + 0xbc)) * g_82746c;
        float e = *(float*)((char*)esi + 0xc8) * g_847b94;
        float diff = d - e;

        if (diff > zero) {
            void* v3 = ((S_62e2a0*)esi)->f();
            float* pb = (float*)((char*)v3 + 4);
            float rate = ((S_613f00*)esi)->f();
            float ratio = *pb / rate;

            if (ratio <= diff) {
                float tmp3;
                ((S_666350*)0)->f(&tmp3);
                float f4 = *(float*)((char*)&tmp3 + 4);

                float sub = diff - ratio;
                float mn = (sub < f4) ? sub : f4;

                float vec2[3];
                vec2[0] = mn * chosen;
                vec2[1] = zero;
                vec2[2] = zero;
                ((S_62e140*)esi)->f(vec2);

                if (ebp != 0) {
                    void* eax = *(void**)((char*)ebp + 0xa0);
                    eax = *(void**)((char*)eax + 0x10);
                    int ecx = *(int*)((char*)eax + 0x2c);
                    if (ecx != 0) {
                        float vv[3];
                        vv[0] = zero;
                        vv[1] = -vec2[0];
                        vv[2] = zero;
                        ((S_612fb0*)ecx)->f(vv, &m_b4);
                    }
                }
            }
        }
    }

    float x = m_b8 + m_a8;
    float y = m_c0 + m_b0;

    int ecx2 = *(int*)((char*)esi + 0x10);
    int eax2 = *(int*)((char*)ecx2 + 0x2c);
    void* ebx;
    if (eax2 != 0) {
        ebx = (void*)((char*)eax2 + 0x3c);
    } else {
        if ((g_97d580 & 1) == 0) {
            g_97d580 |= 1;
            ((S_614170*)&g_97d568)->f();
        }
        ebx = &g_97d568;
    }

    float hh;
    {
        int ecx = *(int*)((char*)esi + 0x28);
        if (ecx != 0) {
            hh = ((S_65ff10*)ecx)->f();
        } else {
            hh = *(float*)((char*)esi + 0x8c);
        }
    }

    float out[3];
    void* v3 = ((S_62e2a0*)esi)->f();
    sub_518740(out, v3, hh);

    float dx = x - *(float*)ebx;
    float dy = y - *(float*)((char*)ebx + 4);
    float dz = *(float*)((char*)&out[2]) - *(float*)((char*)ebx + 8);

    float g = g_847b94;
    dx = dx * g;
    dy = dy * g;
    dz = dz * g;

    if (m_bc > zero) {
        float t = (m_bc - *(float*)((char*)ebx + 4)) * g;
        dy = t;
    }

    float vec3[3];
    vec3[0] = dx - out[0];
    vec3[1] = dy - out[1];
    vec3[2] = dz - out[2];

    float tmp4;
    ((S_666350*)0)->f(&tmp4);

    float tmp5;
    ((S_6663a0*)0)->f(&tmp5);

    float res[3];
    sub_4a6100(res, &tmp4, &tmp5);

    float rx = res[0] * chosen;
    float ry = res[1] * chosen;
    float rz = res[2] * chosen;

    if (ebp != 0) {
        float lim = g_82711c;
        if (*(float*)((char*)ebp + 0xb0) <= lim) {
            rx = rx * rx;
            ry = ry * rx;
            rz = rz * rx;
        }
    }

    float vec4[3];
    vec4[0] = rx;
    vec4[1] = ry;
    vec4[2] = rz;
    ((S_62e140*)esi)->f(vec4);

    if (ebp != 0) {
        void* eax = *(void**)((char*)ebp + 0xa0);
        eax = *(void**)((char*)eax + 0x10);
        int ecx = *(int*)((char*)eax + 0x2c);
        if (ecx != 0) {
            float vv[3];
            vv[0] = -vec4[0];
            vv[1] = -vec4[1];
            vv[2] = -vec4[2];
            ((S_612fb0*)ecx)->f(vv, &m_b4);
        }
    }
}
