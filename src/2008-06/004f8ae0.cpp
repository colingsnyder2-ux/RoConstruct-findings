// from server: 28% by colin
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };

extern "C" {
    void __cdecl sub_5ec220(void* dst, const void* src);
    void* __cdecl sub_6a0956(unsigned int size);
    void __cdecl sub_6a094a(void* p);
    float* __cdecl sub_509ba0();
    void __cdecl sub_548000(void* a, void* b, void* c, int d);
    void __cdecl sub_500eb0(void* self, void* a, void* b, void* c, void* d);
    void __cdecl sub_548640(void* p);
}

extern float g_819bac;

struct WedgeBuilder {
    char pad0[4];
    int field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

void WedgeBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    char buf[0x6c];
    int* p = (int*)buf;

    sub_5ec220(buf + 0x24, &field4);

    short s1 = *(short*)((char*)&a + 0);
    short s2 = *(short*)((char*)&a + 2);
    int n1 = s1 + 1;
    int n2 = s2 + 1;
    int total = n1 * n2;

    float f1 = *(float*)((char*)&a + 0x2c);
    float f2 = *(float*)((char*)&a + 0x24);
    float f3 = *(float*)((char*)&a + 0x30);
    float f4 = *(float*)((char*)&a + 0x28);
    float f5 = *(float*)((char*)&a + 0x44);
    float f6 = *(float*)((char*)&a + 0x48);

    float r1 = (f1 - f2) / (float)n1;
    float r2 = (f3 - f4) / (float)n2;
    float r3 = f5 / (float)n1;
    float r4 = f6 / (float)n2;

    void* arr = sub_6a0956(total * 4);

    float fa = f2;
    float fb = f4;
    float fc = 0.0f;
    float fd = 0.0f;

    int outer = 0;
    while (outer <= s2) {
        float fe = fa;
        float ff = fb;
        int inner = 0;
        while (inner <= s1) {
            float fg = f1;
            float fh = fe;
            float fi = ff;
            float fj = f3;
            float fk = 1.0f;

            if (fk < fi) {
                fi = fi - fk;
            } else {
                fi = fi + fk;
            }

            if (fh > fj) {
                fh = fh - fj;
            } else {
                fh = fh + fj;
            }

            float* sh = sub_509ba0();
            float sx = sh[0];
            float sy = sh[1];

            float px, py;
            if (sx == f5 && sy == f6) {
                px = f3;
                py = f4;
            } else {
                px = fh;
                py = fi;
            }

            float m1 = px * g_819bac;
            float m2 = py * g_819bac;

            float v1[4];
            float v2[4];
            v1[0] = fh; v1[1] = fi; v1[2] = fk; v1[3] = 1.0f;
            v2[0] = m1; v2[1] = m2; v2[2] = 1.0f; v2[3] = 1.0f;

            sub_5ec220(buf + 0x54, v1);
            sub_5ec220(buf + 0x64, v2);

            void* res;
            sub_548000(&res, buf + 0x54, buf + 0x64, 1);

            fe = fe + r1;
            ff = ff + r2;

            int idx = (s2 + 1) * outer + inner;
            ((void**)arr)[idx] = res;

            inner++;
        }
        fa = fa + r3;
        fb = fb + r4;
        outer++;
    }

    int cnt = total;
    for (int q = 0; q < cnt; q++) {
        sub_548640(((void**)arr)[q]);
    }
    sub_6a094a(arr);
}
