// from server: 21% by colin
struct VMaterialBase {
    int f(int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __cdecl sub_5EC220(void*, void*);
    void* __cdecl sub_6A0956(unsigned int);
    float* __cdecl sub_509BA0();
    void __cdecl sub_548000(void*, void*, void*, int);
    void __cdecl sub_500EB0(void*, int, int, int, int);
    void __cdecl sub_548640(void*);
    void __cdecl sub_6A094A(void*);
}

extern float g_826e38;
extern float g_819bac;

int VMaterialBase::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    char buf[0x78];
    float v[16];
    int i, j, k;
    int w, h;
    int* arr;
    float fx, fy, fz;
    float dx, dy;
    float u0, v0, u1, v1;
    float du, dv;
    float su, sv;
    float* shader;
    float sx, sy;
    int idx;

    sub_5EC220((char*)this + 4, buf + 0x2c);

    float ax = *(float*)(buf + 0x34);
    float ay = *(float*)(buf + 0x38);
    float az = *(float*)(buf + 0x3c);
    if (ax < 0) ax = -ax;
    if (ay < 0) ay = -ay;
    if (az < 0) az = -az;

    int ww = *(short*)(buf + 0x9c) + 1;
    int hh = *(short*)(buf + 0x9e) + 1;
    int total = ww * hh;

    float f1 = (*(float*)(buf + 0x7c) - *(float*)(buf + 0x74)) / (float)ww;
    float f2 = (*(float*)(buf + 0x80) - *(float*)(buf + 0x78)) / (float)hh;
    float f3 = *(float*)(buf + 0x94) / ax;
    float f4 = *(float*)(buf + 0x98) / ay;
    float f5 = *(float*)(buf + 0x9c) / az;

    arr = (int*)sub_6A0956(total * 4);

    float base_u = *(float*)(buf + 0x78);
    float base_v = *(float*)(buf + 0x8c);

    float acc_v = 0.0f;
    float acc_u = 0.0f;

    for (j = 0; j <= *(short*)(buf + 0x9e); j++) {
        float row_u = base_u;
        float row_v = base_v;
        for (i = 0; i <= *(short*)(buf + 0x9c); i++) {
            float uu = row_u;
            float vv = row_v;
            float ww2 = 1.0f;
            if (ww2 < uu) {
                uu = uu - 1.0f;
            } else {
                uu = uu + 1.0f;
            }
            float uu2 = uu - *(float*)(buf + 0x7c);
            float vv2 = vv - *(float*)(buf + 0x80);

            float tc[2];
            for (k = 0; k < 2; k++) {
                if (*(char*)(buf + 0x68 + k)) {
                    tc[k] = (k == 0 ? uu2 : vv2) / *(float*)(buf + 0x38 + k*4) * *(float*)(buf + 0x60 + k*4);
                } else {
                    tc[k] = *(float*)(buf + 0x60 + k*4);
                }
            }

            shader = sub_509BA0();
            float sx2, sy2;
            if (shader[0] == *(float*)(buf + 0x88) && shader[1] == *(float*)(buf + 0x8c)) {
                sx2 = *(float*)(buf + 0x80);
                sy2 = *(float*)(buf + 0x84);
            } else {
                sx2 = uu;
                sy2 = vv;
            }
            sx2 *= g_819bac;
            sy2 *= g_819bac;

            float p1[4], p2[4];
            sub_5EC220(&tc[0], p1);
            sub_5EC220(&sx2, p2);
            sub_548000(p2, p1, &v[0], 1);

            acc_u += v[0];
            acc_v += v[1];

            idx = (*(short*)(buf + 0xa2) + 1) * j + i;
            arr[idx] = (int)v[0];

            row_u += f1;
            row_v += f2;
        }
        acc_u += f3;
        acc_v += f4;
    }

    for (j = 0; j < *(short*)(buf + 0x9e); j++) {
        for (i = 0; i < *(short*)(buf + 0x9c); i++) {
            int a = (*(short*)(buf + 0x9c) + 1) * j + i;
            int b = a + *(short*)(buf + 0x9c) + 1;
            sub_500EB0(this, arr[a], arr[a+1], arr[b], arr[b+1]);
        }
    }

    for (k = 0; k < total; k++) {
        sub_548640((void*)arr[k]);
    }
    sub_6A094A(arr);
    return 0;
}
