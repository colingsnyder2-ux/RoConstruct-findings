// from server: 38% by colin
//

struct S {
    int f(int, int, int, int, int, int, int, int, int, int, int, int, int, int);
    char pad[4];
};

extern "C" void __cdecl sub_5EC1C0(float*, float*);
extern "C" void* __cdecl sub_6A0956(unsigned int);
extern "C" float* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(float*, float*, float*, int);
extern "C" void __cdecl sub_500EB0(int, int, int, int);
extern "C" void __cdecl sub_548640(void*);
extern "C" void __cdecl sub_6A094A(void*);

extern float g_826e38;
extern float g_819bac;

int S::f(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    float v[8];
    sub_5EC1C0((float*)((char*)this + 4), v);

    float f0 = v[1];
    if (f0 < 0) f0 = -f0;
    float f1 = v[2];
    if (f1 < 0) f1 = -f1;
    float f2 = v[3];
    if (f2 < 0) f2 = -f2;

    int w0 = *(short*)((char*)&a12 + 0);
    int w1 = *(short*)((char*)&a12 + 2);
    int w2 = *(short*)((char*)&a13 + 0);
    int w3 = *(short*)((char*)&a13 + 2);

    int n0 = w0 + 1;
    int n1 = w1 + 1;
    int total = n0 * n1;

    float d0 = (*(float*)((char*)&a10 + 0) - *(float*)((char*)&a9 + 0)) / (float)n0;
    float d1 = (*(float*)((char*)&a10 + 4) - *(float*)((char*)&a9 + 4)) / (float)n1;

    float e0 = *(float*)((char*)&a11 + 0) / (float)n0;
    float e1 = *(float*)((char*)&a11 + 4) / (float)n1;

    int* arr = (int*)sub_6A0956((unsigned int)total * 4);

    float base0 = *(float*)((char*)&a9 + 0);
    float base1 = *(float*)((char*)&a9 + 4);
    float acc0 = 0.0f;
    float acc1 = 0.0f;

    int i = 0;
    while (i <= w2) {
        float row0 = base0;
        float row1 = base1;
        int j = 0;
        while (j <= w3) {
            float p0 = row0;
            float p1 = row1;
            float p2 = 0.0f;
            float p3 = 1.0f;

            float t0 = p0;
            float t1 = p1;
            float t2 = p2;
            float t3 = p3;

            if (t0 < 0.0f) t0 = t0 - g_826e38;
            else t0 = t0 + g_826e38;
            if (t1 < 0.0f) t1 = t1 - g_826e38;
            else t1 = t1 + g_826e38;

            float u0 = t0;
            float u1 = t1;

            float q[2];
            for (int k = 0; k < 2; k++) {
                if (k == 0) {
                    if (*(char*)((char*)&a13 + 0) != 0)
                        q[k] = u0 / (float)n0 * e0;
                    else
                        q[k] = e0;
                } else {
                    if (*(char*)((char*)&a13 + 0) != 0)
                        q[k] = u1 / (float)n1 * e1;
                    else
                        q[k] = e1;
                }
            }

            float* sh = sub_509BA0();
            float sx, sy;
            if (sh[0] == *(float*)((char*)&a10 + 0) && sh[1] == *(float*)((char*)&a10 + 4)) {
                sx = *(float*)((char*)&a10 + 4);
                sy = *(float*)((char*)&a10 + 8);
            } else {
                sx = u0;
                sy = u1;
            }

            float r0 = sx * g_819bac;
            float r1 = sy * g_819bac;

            float out0[4];
            float out1[4];
            sub_5EC1C0(&r0, out0);
            sub_5EC1C0(&r1, out1);
            sub_548000(out0, out1, q, 1);

            acc0 = acc0 + out0[0];
            acc1 = acc1 + out0[1];

            int idx = (w3 + 1) * i + j;
            arr[idx] = (int)out0[0];

            row0 = row0 + d0;
            row1 = row1 + d1;
            j++;
        }
        base0 = base0 + e0;
        base1 = base1 + e1;
        i++;
    }

    int m = 0;
    while (m < w2) {
        int n = 0;
        while (n < w3) {
            int idx = (w3 + 1) * m + n;
            sub_500EB0(arr[idx], arr[idx + 1], arr[idx + w3 + 1], arr[idx + w3 + 2]);
            n++;
        }
        m++;
    }

    unsigned int cnt = (unsigned int)total;
    for (unsigned int k = 0; k < cnt; k++) {
        sub_548640((void*)arr[k]);
    }
    sub_6A094A(arr);
    return 0;
}
