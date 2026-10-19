// from server: 31% by colin
//

struct VMaterialBase {
    int f(int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void __cdecl sub_5EC1E0(float*, float*);
extern "C" void* __cdecl sub_6A0956(unsigned int);
extern "C" float* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(float*, float*, float*, int);
extern "C" void __cdecl sub_500EB0(int, int, int, int);
extern "C" void __cdecl sub_548640(void*);
extern "C" void __cdecl sub_6A094A(void*);

extern float g_826e38;
extern float g_819bac;

int VMaterialBase::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    float v[16];
    sub_5EC1E0(v, (float*)((char*)this + 4));

    float f0 = v[1];
    float f1 = v[2];
    float f2 = v[3];
    if (f0 < 0) f0 = -f0;
    if (f1 < 0) f1 = -f1;
    if (f2 < 0) f2 = -f2;

    short s1 = *(short*)((char*)&a13 + 0);
    short s2 = *(short*)((char*)&a13 + 2);
    int n1 = s1 + 1;
    int n2 = s2 + 1;
    int total = n1 * n2;

    float d0 = (*(float*)((char*)&a9 + 4) - *(float*)((char*)&a9 + 0)) / (float)n1;
    float d1 = (*(float*)((char*)&a9 + 12) - *(float*)((char*)&a9 + 8)) / (float)n2;
    float d2 = *(float*)((char*)&a11 + 0) / f0;
    float d3 = *(float*)((char*)&a11 + 4) / f1;
    float d4 = *(float*)((char*)&a11 + 8) / f2;

    void** arr = (void**)sub_6A0956(total * 4);

    float base0 = *(float*)((char*)&a9 + 8);
    float base1 = *(float*)((char*)&a9 + 4);

    int i = 0;
    float acc0 = 0.0f;
    float acc1 = 0.0f;
    while (i <= s2) {
        int j = 0;
        float cur0 = *(float*)((char*)&a9 + 0);
        float cur1 = *(float*)((char*)&a9 + 8);
        while (j <= s1) {
            float p[4];
            p[0] = cur0;
            p[1] = cur1;
            p[2] = 1.0f;
            float t = p[2] - p[0];
            if (t < 0) t = -t;
            if (t > g_826e38) {
                p[3] = p[2] - g_826e38;
            } else {
                p[3] = p[2] + g_826e38;
            }
            p[3] = *(float*)((char*)&a9 + 4) - p[3];

            int k;
            for (k = 0; k < 2; k++) {
                if (*((unsigned char*)&a9 + 4 + k) != 0) {
                    p[k] = p[k] / v[k + 1] * v[k + 4];
                } else {
                    p[k] = v[k + 4];
                }
            }

            float* sh = sub_509BA0();
            float q0, q1;
            if (sh[0] == *(float*)((char*)&a9 + 8) && sh[1] == *(float*)((char*)&a9 + 12)) {
                q0 = *(float*)((char*)&a9 + 12);
                q1 = *(float*)((char*)&a9 + 16);
            } else {
                q0 = cur0;
                q1 = cur1;
            }
            q0 *= g_819bac;
            q1 *= g_819bac;

            float r0[4], r1[4];
            r0[0] = p[0]; r0[1] = p[1]; r0[2] = p[2]; r0[3] = p[3];
            r1[0] = q0; r1[1] = q1; r1[2] = 1.0f; r1[3] = 0.0f;
            sub_5EC1E0(r0, r0);
            sub_5EC1E0(r1, r1);

            float out[4];
            sub_548000(out, r0, r1, 1);

            acc0 += out[0];
            acc1 += out[1];

            int idx = (s2 + 1) * i + j;
            arr[idx] = (void*)0;
            j++;
            cur0 += d0;
            cur1 += d1;
        }
        i++;
        acc0 += d2;
        acc1 += d3;
    }

    int m = 0;
    while (m < s2) {
        int n = 0;
        while (n < s1) {
            int idx = (s1 + 1) * m + n;
            sub_500EB0((int)arr[idx], (int)arr[idx + 1], (int)arr[idx + s1 + 1], (int)arr[idx + s1 + 2]);
            n++;
        }
        m++;
    }

    unsigned int c = 0;
    while (c < (unsigned int)total) {
        sub_548640(arr[c]);
        c++;
    }
    sub_6A094A(arr);
    return 0;
}
