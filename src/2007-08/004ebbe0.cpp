// from server: 22% by colin
// roc 2007-08 004ebbe0  unit: CylinderBuilder  size: 821 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ebbe0

struct CylinderBuilder {
    char pad0[4];
    int field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

extern "C" void __cdecl sub_5b99f0(void*, void*);
extern "C" void* __cdecl sub_62ff32(int);
extern "C" void* __cdecl sub_501570();
extern "C" void __cdecl sub_4eb780(void*, void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_4f5360(void*, void*, void*, int);
extern "C" void __cdecl sub_4eee30(void*, int, int, int, int);
extern "C" void __cdecl sub_4f54e0(void*);
extern "C" void __cdecl sub_62ff26(void*);

extern double dbl_795b48;

void CylinderBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    float fv[4];
    sub_5b99f0(&field4, fv);

    float t0 = fv[0];
    if (t0 < 0) t0 = -t0;
    float t1 = fv[1];
    if (t1 < 0) t1 = -t1;
    float t2 = fv[2];
    if (t2 < 0) t2 = -t2;

    int n0 = (short)i;
    int n1 = (short)j;
    int total = (n0 + 1) * (n1 + 1);

    float step0 = (float)((double)(*(float*)&d - *(float*)&c) / (double)n0);
    float step1 = (float)((double)(*(float*)&f - *(float*)&e) / (double)n1);
    float step2 = (float)((double)(*(float*)&h - *(float*)&g) / (double)n0);
    float step3 = (float)((double)(*(float*)&l - *(float*)&k) / (double)n1);

    void* arr = sub_62ff32(total * 4);

    float base0 = *(float*)&c;
    float base1 = *(float*)&e;
    float base2 = *(float*)&g;
    float base3 = *(float*)&k;

    int* p = (int*)arr;
    int row;
    for (row = 0; row <= n0; row++) {
        float cur0 = base0;
        float cur1 = base1;
        float cur2 = base2;
        float cur3 = base3;
        int col;
        for (col = 0; col <= n1; col++) {
            float v0 = cur0;
            float v1 = cur1;
            float v2 = cur2;
            float v3 = cur3;

            float tmp[4];
            tmp[0] = v0;
            tmp[1] = v1;
            tmp[2] = v2;
            tmp[3] = 1.0f;

            float out[4];
            sub_4eb780(&tmp[0], &out[0], &tmp[0], &out[0], &tmp[0], &out[0]);

            float* q = (float*)sub_501570();
            if (q[0] == *(float*)&g && q[1] == *(float*)&k) {
                v2 = *(float*)&g;
                v3 = *(float*)&k;
            }

            float u = v0 * (float)dbl_795b48;
            float w = v1 * (float)dbl_795b48;

            float uv[2];
            sub_5b99f0(&uv[0], &uv[0]);
            sub_5b99f0(&uv[0], &uv[0]);

            void* res = sub_4f5360(&uv[0], &uv[0], &uv[0], 1);
            *p = (int)res;
            p++;

            cur0 += step0;
            cur1 += step1;
            cur2 += step2;
            cur3 += step3;
        }
        base0 += step0;
        base1 += step1;
        base2 += step2;
        base3 += step3;
    }

    if (n0 > 0) {
        int* rp = (int*)arr;
        int* rp2 = (int*)arr + n1 + 2;
        int r;
        for (r = 0; r < n0; r++) {
            int cc;
            for (cc = 0; cc < n1; cc++) {
                int v0 = rp[0];
                int v1 = rp[1];
                int v2 = rp2[0];
                int v3 = rp2[1];
                sub_4eee30((void*)field4, v0, v1, v2, v3);
                rp++;
                rp2++;
            }
            rp += 1;
            rp2 += 1;
        }
    }

    int cnt = n0;
    unsigned int idx;
    for (idx = 0; idx < (unsigned int)cnt; idx++) {
        sub_4f54e0((void*)((int*)arr)[idx]);
    }

    sub_62ff26(arr);
}
