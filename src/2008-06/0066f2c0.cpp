// from server: 35% by colin
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };

extern float g_81e704;
extern float g_837878;
extern float g_81c3b8;
extern float g_826918;
extern float g_82ca40;
extern int g_97a504;

extern void *__cdecl func_793d50_helper();
extern void *__cdecl func_5d90a0_helper();

struct S {
    char pad0[0xe4];
    float f_e4;
    char pad_e8[0x20];
    float f_108;
    float f_10c;
    float f_110;

    void *getSomething();
    void method_643a70(Vec3 *out, float dt);
    void method_643b60(Vec3 *out);
    float method_643360();
    bool method_643330();
    void method_66eb90(float dt);
};

extern "C" void *__cdecl func_793d50();
extern "C" void *__cdecl func_5d90a0(void *);
extern "C" void __cdecl func_5df0c0(float *dst, float val);
extern "C" void __cdecl func_5185f0(Vec2 *out, Vec3 *in);
extern "C" float __cdecl func_5de650(Vec3 *in);
extern "C" float __cdecl func_5d91a0(void *);
extern "C" float __cdecl func_5cbec0(float);
extern "C" void __cdecl func_5e8200(void *self, float *val);
extern "C" bool __cdecl func_6662f0(void *self);
extern "C" void *__cdecl func_66eb30(void *self, void *arg);
extern "C" void __cdecl func_5e7760(void *self, void *arg);
extern "C" void *__cdecl func_56b620(void *self);
extern "C" void __cdecl func_4937f0(void *self, float *val);

void S::method_66eb90(float dt)
{
    void *a = func_793d50();
    void *b = func_5d90a0(a);
    if (!b)
        return;

    Vec3 v1;
    method_643a70(&v1, dt);
    Vec3 v2;
    method_643b60(&v2);

    float base = method_643360() - g_81e704;

    float dx = v1.x + v2.x;
    float dy = v1.y + v2.y;
    float dz = v1.z + v2.z;

    float diff = base - f_10c;
    float absdiff = diff < 0 ? -diff : diff;
    if (absdiff > g_837878) {
        if (diff > 0.0f) {
            dy = dy + 1.0f;
        } else {
            if (diff < 0.0f)
                dy = dy + g_81c3b8;
        }
    }

    f_108 += dx * dt;
    f_10c += dy * dt;
    f_110 += dz * dt;

    void *c = func_793d50();
    if (*(unsigned char *)((char *)c + 0x1e8) & 0x10) {
        void *d = func_793d50();
        float val = *(float *)((char *)d + 0x1b0) * g_826918 * dt;
        func_5df0c0(&f_e4, val);
    } else {
        Vec2 v2d;
        func_5185f0(&v2d, &v1);
        if (v2d.x != 0.0f || v2d.y != 0.0f) {
            void *e = func_793d50();
            float f = func_5de650(&v1);
            float g = func_5d91a0(e);
            float h = func_5cbec0(g - f);
            float val = h * g_82ca40 * dt;
            func_5df0c0(&f_e4, val);
        }
    }

    func_5e8200(b, &f_e4);

    if (!func_6662f0(&v1)) {
        void *r = func_66eb30(&v1, &v1);
        func_5e7760(b, r);
    }

    if (method_643330()) {
        void *f2 = func_793d50();
        void *arg = f2 ? (char *)f2 + 0x14 : 0;
        float len = v1.x * v1.x + v1.y * v1.y + v1.z * v1.z;
        void *res = func_56b620((void *)g_97a504);
        if (res) {
            float sq = len;
            float root = 0.0f;
            if (sq >= 0.0f) {
                float x = sq;
                float y = x;
                float z = y;
                float w = z;
                float v = w;
                float u = v;
                float t = u;
                float s = t;
                float r2 = s;
                float q = r2;
                float p = q;
                float o = p;
                float n = o;
                float m = n;
                float l = m;
                float k = l;
                float j = k;
                float i = j;
                float h2 = i;
                float g2 = h2;
                float f3 = g2;
                float e2 = f3;
                float d2 = e2;
                float c2 = d2;
                float b2 = c2;
                float a2 = b2;
                root = a2;
            }
            func_4937f0((char *)res + 0x10, &root);
        }
    }

    method_66eb90(dt);
}
