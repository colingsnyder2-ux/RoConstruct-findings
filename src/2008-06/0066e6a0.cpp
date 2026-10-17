// from server: 27% by colin
struct GCamera {
    float m[9];
    void getLookVector(float* out, int row);
    void getRightVector(float* out, int row);
    void getUpVector(float* out, int row);
    void lookAt(const float* eye, const float* target, const float* up);
    void copyFrom(const GCamera& other);
};

struct Body {
    char pad[0x90];
    float posX;
    float posY;
    float posZ;
};

struct Primitive {
    char pad[0x2c];
    Body* body;
};

struct Humanoid {
    char pad[0x10];
    Primitive* rootPrim;
};

struct GettingUp {
    char pad[0xa0];
    float fA0;
    float fA4;
    int run(int arg);
};

extern float g_847b7c;
extern float g_972898;
extern float g_97289c;
extern float g_9728a0;
extern int g_9728a4;

extern "C" void* __stdcall sub_793d50();
extern "C" void* __stdcall sub_5d9160();
extern "C" void* __stdcall sub_5d9180();
extern "C" void __stdcall sub_599360();
extern "C" void __stdcall sub_62e2e0();
extern "C" void __stdcall sub_5ddbb0(float* a, float* b);
extern "C" void __stdcall sub_658d20();
extern "C" void __stdcall sub_660170();
extern "C" void __stdcall sub_476580();
extern "C" void __stdcall sub_5134e0(GCamera* cam, float* eye, float* tgt, float* up, float* angle);

static float my_fabs(float v)
{
    if (v < 0.0f) return -v;
    return v;
}

int GettingUp::run(int arg)
{
    void* a = sub_793d50();
    void* b = sub_5d9160();
    if (!b) return 0;
    void* c = sub_793d50();
    void* d = sub_5d9180();
    if (!d) return 0;

    sub_599360();

    float v58, v5c, v54;
    ((GCamera*)((char*)b + 0x94))->getLookVector(&v58, 1);

    if (!(g_9728a4 & 1)) {
        g_9728a4 |= 1;
        g_972898 = 0.0f;
        g_97289c = 1.0f;
        g_9728a0 = 0.0f;
    }

    float x = g_972898;
    float y = g_97289c;
    float z = g_9728a0;

    float r0 = v5c * y - v58 * z;
    float r1 = v54 * z - v5c * x;
    float r2 = v58 * x - v54 * y;

    sub_599360();

    float p0 = *(float*)((char*)b + 0xd0);
    float p1 = *(float*)((char*)b + 0xd4);
    float p2 = *(float*)((char*)b + 0xd8);

    sub_62e2e0();
    float* m = (float*)d;
    float m0 = m[0], m1 = m[1], m2 = m[2];

    sub_599360();

    GCamera* cam = (GCamera*)((char*)d + 0x94);
    float out1[9];
    cam->getRightVector(out1, 0);
    float o1x = out1[0] * r0 + out1[1] * r1 + out1[2] * r2 + m0;
    float o1y = out1[3] * r0 + out1[4] * r1 + out1[5] * r2 + m1;
    float o1z = out1[6] * r0 + out1[7] * r1 + out1[8] * r2 + m2;

    float out2[9];
    cam->getRightVector(out2, 0);
    float o2x = out2[0] * p0 + out2[1] * p1 + out2[2] * p2 + m0;
    float o2y = out2[3] * p0 + out2[4] * p1 + out2[5] * p2 + m1;
    float o2z = out2[6] * p0 + out2[7] * p1 + out2[8] * p2 + m2;

    float out3[9];
    cam->getRightVector(out3, 0);
    float o3x = out3[0] * m0 + out3[1] * m1 + out3[2] * m2 + m0;
    float o3y = out3[3] * m0 + out3[4] * m1 + out3[5] * m2 + m1;
    float o3z = out3[6] * m0 + out3[7] * m1 + out3[8] * m2 + m2;

    Primitive* prim = *(Primitive**)((char*)d + 0x28);
    void* src;
    if (prim) {
        sub_660170();
        src = (void*)prim;
    } else {
        src = (char*)d + 0x68;
    }
    GCamera tmp;
    tmp.copyFrom(*(GCamera*)src);

    float negA0 = -fA0;
    float eye[3];
    eye[0] = o1x;
    eye[1] = o1y;
    eye[2] = o1z;
    float tgt[3];
    tgt[0] = o2x;
    tgt[1] = o2y;
    tgt[2] = o2z;
    float up[3];
    up[0] = o3x;
    up[1] = o3y;
    up[2] = o3z;
    float tmpf = negA0;
    sub_5134e0(&tmp, eye, tgt, up, &tmpf);
    sub_476580();

    float dx = o1x + o3x;
    float dy = o1y + o3y;
    float dz = o1z + o3z;

    Primitive* prim2 = *(Primitive**)((char*)d + 0x28);
    void* src2;
    if (prim2) {
        sub_660170();
        src2 = (void*)prim2;
    } else {
        src2 = (char*)d + 0x68;
    }
    GCamera tmp2;
    tmp2.copyFrom(*(GCamera*)src2);

    float diff[3];
    sub_5ddbb0((float*)&tmp2, diff);

    float lim = g_847b7c;
    for (int i = 0; i < 3; i++) {
        float a2 = diff[i];
        float b2 = (i == 0) ? dx : (i == 1) ? dy : dz;
        if (my_fabs(a2 - b2) * lim > lim) {
            diff[i] = a2;
        }
    }

    Humanoid* hum = *(Humanoid**)((char*)d + 0x10);
    float sA4 = fA4;
    float s0 = diff[0] * sA4;
    float s1 = diff[1] * sA4;
    float s2 = diff[2] * sA4;

    float q0 = s0 - o1x;
    float q1 = s1 - o1y;
    float q2 = s2 - o1z;

    float* mm = (float*)b;
    float w0 = mm[0] * q0 + mm[1] * q1 + mm[2] * q2 + mm[3];
    float w1 = mm[4] * q0 + mm[5] * q1 + mm[6] * q2 + mm[7];
    float w2 = mm[8] * q0 + mm[9] * q1 + mm[10] * q2 + mm[11];

    float f0 = w0 - o1x;
    float f1 = w1 - o1y;
    float f2 = w2 - o1z;

    Body* body = hum->rootPrim->body;
    if (body) {
        if (*(char*)((char*)body + 8)) {
            sub_658d20();
        }
        body->posX += f0;
        body->posY += f1;
        body->posZ += f2;
    }
    return 0;
}
