// from server: 23% by colin
struct VMaterialBase {
    char pad0[4];
    int field4;
    int field8;
    void method_4f3260(
        int, int, int, int, int, int, int, int,
        int, int, int, int, int, int);
};

extern "C" int __stdcall sub_6784d0(int, int);
extern "C" int __stdcall sub_6a0956(int);
extern "C" int __stdcall sub_509ba0();
extern "C" int __stdcall sub_548000(int, int, int, int);
extern "C" int __stdcall sub_500eb0(int, int, int, int, int);
extern "C" int __stdcall sub_548640(int);
extern "C" int __stdcall sub_6a094a(int);

extern float g_819bac;
extern float g_826e38;

void VMaterialBase::method_4f3260(
    int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7,
    int a8, int a9, int a10, int a11, int a12, int a13)
{
    float buf[16];
    float f0, f1, f2;
    int i, j, k;
    int n0, n1, n2;
    int* arr;
    int total;
    float acc0, acc1;
    float step0, step1;
    float base0, base1;
    float tmp0, tmp1, tmp2;
    float* p;

    sub_6784d0((int)&field4, (int)buf);

    tmp0 = buf[1]; if (tmp0 < 0) tmp0 = -tmp0;
    tmp1 = buf[2]; if (tmp1 < 0) tmp1 = -tmp1;
    tmp2 = buf[3]; if (tmp2 < 0) tmp2 = -tmp2;

    n0 = (short)a10;
    n1 = (short)a11;
    n2 = (short)a12;

    n0 = n0 + 1;
    n1 = n1 + 1;
    total = n1 * n0;

    step0 = ((float)a6 - (float)a4) / (float)n0;
    step1 = ((float)a7 - (float)a5) / (float)n1;

    arr = (int*)sub_6a0956(total * 4);

    base0 = (float)a4;
    base1 = (float)a5;

    acc0 = 0.0f;
    acc1 = 0.0f;

    for (i = 0; i <= n2; i++) {
        float row0 = base0;
        float row1 = base1;
        for (j = 0; j <= n0; j++) {
            float v0, v1, v2;
            float u0, u1;
            float t;

            v0 = row0;
            v1 = row1;
            v2 = 0.0f;

            buf[0] = v0;
            buf[1] = v1;
            buf[2] = v2;
            buf[3] = 1.0f;

            if (v0 < 1.0f) {
                buf[4] = 1.0f - v0;
            } else {
                buf[4] = 0.0f;
            }
            buf[5] = (float)a6 - v0;

            for (k = 0; k < 2; k++) {
                if (*(unsigned char*)((char*)&a8 + k) != 0) {
                    buf[4 + k] = (buf[4 + k] / buf[8 + k]) * buf[12 + k];
                } else {
                    buf[4 + k] = buf[12 + k];
                }
            }

            p = (float*)sub_509ba0();
            if (p[0] == (float)a9 && p[1] == (float)a10) {
                u0 = (float)a7;
                u1 = (float)a8;
            } else {
                u0 = buf[0];
                u1 = buf[1];
            }

            u0 = u0 * g_819bac;
            u1 = u1 * g_819bac;
            buf[0] = u0;
            buf[1] = u1;

            sub_6784d0((int)&buf[4], (int)&buf[8]);
            sub_6784d0((int)&buf[8], (int)&buf[12]);

            t = (float)sub_548000((int)&buf[12], (int)&buf[8], (int)&buf[4], 1);

            acc0 = acc0 + buf[4];
            acc1 = acc1 + buf[5];

            arr[i * (n0 + 1) + j] = (int)t;

            row0 = row0 + step0;
            row1 = row1 + step1;
        }
        base0 = base0 + step0;
        base1 = base1 + step1;
    }

    for (i = 0; i < n2; i++) {
        for (j = 0; j < n0; j++) {
            int idx = i * (n0 + 1) + j;
            sub_500eb0((int)this, arr[idx], arr[idx + 1], arr[idx + n0 + 1], arr[idx + n0 + 2]);
        }
    }

    for (i = 0; i < total; i++) {
        sub_548640(arr[i]);
    }

    sub_6a094a((int)arr);
}
