// from server: 22% by colin
struct VMaterialBase {
    int f(int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void __cdecl sub_5EC1A0(float*, float*);
extern "C" void* __cdecl sub_6A0956(unsigned int);
extern "C" float* __cdecl sub_509BA0();
extern "C" int __cdecl sub_548000(float*, float*, float*, int);
extern "C" void __cdecl sub_500EB0(int, int, int, int);
extern "C" void __cdecl sub_548640(int);
extern "C" void __cdecl sub_6A094A(void*);

extern float g_826E38;
extern float g_819BAC;

int VMaterialBase::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    float v[8];
    float t0, t1;
    float u0, u1;
    float w0, w1;

    sub_5EC1A0(v, (float*)((char*)this + 4));

    float f0 = v[0]; if (f0 < 0) f0 = -f0;
    float f1 = v[1]; if (f1 < 0) f1 = -f1;

    int n0 = a13 + 1;
    int n1 = a14 + 1;
    int total = n0 * n1;

    float d0 = (a9 - a8) / (float)n0;
    float d1 = (a10 - a9) / (float)n1;

    int* arr = (int*)sub_6A0956((unsigned int)total * 4);

    float base0 = (float)a8;
    float base1 = (float)a9;

    int i = 0;
    float acc0 = 0.0f;
    float acc1 = 0.0f;
    while (i <= a14) {
        int j = 0;
        float row0 = base0;
        float row1 = base1;
        while (j <= a13) {
            float p0 = row0;
            float p1 = row1;
            float p2 = 0.0f;
            float p3 = 1.0f;
            if (p3 < p2) {
                p2 = p2 - g_826E38;
            } else {
                p2 = p2 + g_826E38;
            }
            float p4 = p2;
            float p5 = p3 - a9;
            float uv0 = (p4 != 0.0f) ? (p4 / f0) * a5 : a5;
            float uv1 = (p5 != 0.0f) ? (p5 / f1) * a6 : a6;
            float* sh = sub_509BA0();
            float s0, s1;
            if (sh[0] == a7 && sh[1] == a8) {
                s0 = a10;
                s1 = a11;
            } else {
                s0 = p0;
                s1 = p1;
            }
            t0 = s0 * g_819BAC;
            t1 = s1 * g_819BAC;
            sub_5EC1A0(&u0, &t0);
            sub_5EC1A0(&w0, &u0);
            int idx = sub_548000(&w0, &u0, &t0, 1);
            acc0 += u0;
            acc1 += u1;
            arr[j + i * (a13 + 1)] = idx;
            j++;
        }
        acc0 += d0;
        acc1 += d1;
        i++;
    }

    int k = 0;
    while (k < a14) {
        int l = 0;
        while (l < a13) {
            int idx0 = l + k * (a13 + 1);
            int idx1 = idx0 + 1;
            int idx2 = idx0 + (a13 + 1);
            int idx3 = idx2 + 1;
            sub_500EB0(arr[idx0], arr[idx1], arr[idx2], arr[idx3]);
            l++;
        }
        k++;
    }

    int mm = 0;
    while (mm < total) {
        sub_548640(arr[mm]);
        mm++;
    }

    sub_6A094A(arr);
    return 0;
}
