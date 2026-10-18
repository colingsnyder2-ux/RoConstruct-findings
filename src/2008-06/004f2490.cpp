// from server: 30% by colin




extern "C" void __cdecl sub_5EC200(float* dst, const float* src);
extern "C" void* __cdecl sub_6A0956(unsigned int size);
extern "C" void __cdecl sub_6A094A(void* p);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(float* out, const float* a, const float* b, int flag);

extern float g_826e38;
extern float g_819bac;

struct VMaterialBase {
    int field0;
    float field4;
    void Build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n);
};

void VMaterialBase::Build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n)
{
    float v[4];
    sub_5EC200(v, &field4);

    float ax = v[0] < 0 ? -v[0] : v[0];
    float ay = v[1] < 0 ? -v[1] : v[1];
    float az = v[2] < 0 ? -v[2] : v[2];

    int w = *(short*)((char*)&a + 0);
    int hh = *(short*)((char*)&a + 2);
    int ww = w + 1;
    int hhh = hh + 1;
    int count = ww * hhh;

    float f0 = ((float)e - (float)c) / (float)count;
    float f1 = ((float)f - (float)d) / (float)count;
    float f2 = (float)g / (float)count;
    float f3 = (float)h / (float)count;

    void* arr = sub_6A0956(count * 4);

    float base0 = (float)c;
    float base1 = (float)d;
    float step0 = (float)i;
    float step1 = (float)j;

    int rows = *(short*)((char*)&a + 2);
    int cols = *(short*)((char*)&a + 0);

    float acc0 = 0.0f;
    float acc1 = 0.0f;

    int r = 0;
    while (r <= rows) {
        float rowAcc0 = acc0;
        float rowAcc1 = acc1;
        int cc = 0;
        while (cc <= cols) {
            float p0 = base0 + rowAcc0;
            float p1 = base1 + rowAcc1;
            float p2 = 1.0f;

            float t0, t1;
            if (p0 < 0.0f) {
                t0 = p0 + g_826e38;
            } else {
                t0 = p0 - g_826e38;
            }
            if (p1 < 0.0f) {
                t1 = p1 + g_826e38;
            } else {
                t1 = p1 - g_826e38;
            }

            float uv[2];
            for (int q = 0; q < 2; q++) {
                if (*(unsigned char*)((char*)&a + 0x10 + q)) {
                    float val = (q == 0 ? t0 : t1);
                    uv[q] = val / (q == 0 ? f2 : f3) * (q == 0 ? step0 : step1);
                } else {
                    uv[q] = (q == 0 ? step0 : step1);
                }
            }

            float* sh = (float*)sub_509BA0();
            float s0, s1;
            if (sh[0] == (float)k && sh[1] == (float)l) {
                s0 = (float)f;
                s1 = (float)g;
            } else {
                s0 = p0;
                s1 = p1;
            }

            float out0 = s0 * g_819bac;
            float out1 = s1 * g_819bac;

            float tmp[4];
            sub_5EC200(tmp, &out0);
            float tmp2[4];
            sub_5EC200(tmp2, &out1);

            float res[4];
            sub_548000(res, tmp, tmp2, 1);

            rowAcc0 += res[0];
            rowAcc1 += res[1];

            int idx = (*(short*)((char*)&a + 0x12) + 1) * r + cc;
            ((void**)arr)[idx] = (void*)(int)res[0];

            cc++;
        }
        acc0 += step0;
        acc1 += step1;
        r++;
    }

    int total = count;
    for (int q = 0; q < total; q++) {
        sub_548640(((void**)arr)[q]);
    }
    sub_6A094A(arr);
}
