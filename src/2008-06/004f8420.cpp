// from server: 29% by colin
//

struct Vec4 { float x, y, z, w; };

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
    void build(short a, short b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m);
};

void WedgeBuilder::build(short a, short b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m)
{
    char buf[0x6c];

    sub_5ec220(buf + 0x24, &field4);

    int n1 = (int)a + 1;
    int n2 = (int)b + 1;
    int total = n1 * n2;

    float r1 = (e - c) / (float)n1;
    float r2 = (f - d) / (float)n2;
    float r3 = g / (float)n1;
    float r4 = h / (float)n2;

    void** arr = (void**)sub_6a0956(total * 4);

    float fa = c;
    float fb = d;
    float fc = 0.0f;
    float fd = 0.0f;

    int outer = 0;
    while (outer <= (int)b) {
        float fe = fa;
        float ff = fb;
        int inner = 0;
        while (inner <= (int)a) {
            float fh = fe;
            float fi = ff;
            float fj = e;
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
            if (sx == g && sy == h) {
                px = e;
                py = f;
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

            int idx = (int)b * outer + inner;
            arr[idx] = res;

            inner++;
        }
        fa = fa + r3;
        fb = fb + r4;
        outer++;
    }

    for (int q = 0; q < total; q++) {
        sub_548640(arr[q]);
    }
    sub_6a094a(arr);
}
