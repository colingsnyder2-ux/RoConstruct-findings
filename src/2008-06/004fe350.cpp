// from server: 23% by colin
struct CylinderBuilder {
    char pad0[4];
    int field4;
    void build(float, float, float, float, float, float, float, float, float, float, float, float, short, short, int);
};

extern "C" void __cdecl sub_5EC1E0(float*, float*);
extern "C" void* __cdecl sub_6A0956(unsigned int);
extern "C" void __cdecl sub_4FDBD0(void*, float*, float*, float*, float*, float*, float*);
extern "C" float* __cdecl sub_509BA0();
extern "C" void* __cdecl sub_548000(float*, float*, float*, int);
extern "C" void __cdecl sub_500EB0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_548640(void*);
extern "C" void __cdecl sub_6A094A(void*);

extern float g_819bac;

void CylinderBuilder::build(float a10, float a14, float a18, float a1c, float a20, float a24, float a28, float a2c, float a30, float a34, float a38, float a3c, short a40, short a42, int a44)
{
    float v0[3];
    sub_5EC1E0(v0, (float*)&this->field4);

    float f74 = v0[0]; if (f74 < 0) f74 = -f74;
    float f78 = v0[1]; if (f78 < 0) f78 = -f78;
    float f7c = v0[2]; if (f7c < 0) f7c = -f7c;

    int n40 = a40 + 1;
    int n42 = a42 + 1;
    int total = n40 * n42;

    float f44 = (a18 - a10) / (float)n40;
    float f4c = (a1c - a14) / (float)n42;
    float f50 = a2c / f7c;
    float f54 = a30 / f7c;

    void** arr = (void**)sub_6A0956((unsigned int)total * 4);

    float f1c = a10;
    float f20 = a24;
    int i = 0;
    while (i <= a40) {
        float f14 = a14;
        float f28 = a28;
        int j = 0;
        while (j <= a42) {
            float p1[3];
            float p2[3];
            p1[0] = f1c;
            p1[1] = f14;
            p1[2] = a20;
            p2[0] = f1c;
            p2[1] = f14;
            p2[2] = a20;

            float q1[3];
            float q2[3];
            q1[0] = f1c; q1[1] = f14; q1[2] = a20;
            q2[0] = f1c; q2[1] = f14; q2[2] = a20;

            float r1[3];
            float r2[3];
            r1[0] = f1c; r1[1] = f14; r1[2] = a20;
            r2[0] = f1c; r2[1] = f14; r2[2] = a20;

            sub_4FDBD0((char*)this + 8, p1, p2, q1, q2, r1, r2);

            float* sh = sub_509BA0();
            float sx, sy;
            if (sh[0] == a2c && sh[1] == a30) {
                sx = a24;
                sy = a28;
            } else {
                sx = f1c;
                sy = f14;
            }

            float m1[3];
            float m2[3];
            m1[0] = sx * g_819bac;
            m1[1] = sy * g_819bac;
            m1[2] = a20;
            m2[0] = sx * g_819bac;
            m2[1] = sy * g_819bac;
            m2[2] = a20;

            float u1[3];
            float u2[3];
            sub_5EC1E0(u1, m1);
            sub_5EC1E0(u2, m2);

            float w1[3];
            float w2[3];
            w1[0] = u1[0]; w1[1] = u1[1]; w1[2] = u1[2];
            w2[0] = u2[0]; w2[1] = u2[1]; w2[2] = u2[2];

            void* res = sub_548000(w1, w2, m1, 1);

            f1c += u1[0];
            f14 += u2[0];

            int idx = (a42 + 1) * j + i;
            arr[idx] = res;

            j++;
        }
        f1c += f44;
        f14 += f4c;
        i++;
    }

    int ii = 0;
    while (ii < a40) {
        int jj = 0;
        while (jj < a42) {
            int base = (a42 + 1) * ii + jj;
            void* a = arr[base];
            void* b = arr[base + 1];
            void* c = arr[base + a42 + 1];
            void* d = arr[base + a42 + 2];
            sub_500EB0((char*)this + 8, a, b, c, d);
            jj++;
        }
        ii++;
    }

    unsigned int k = 0;
    while (k < (unsigned int)total) {
        sub_548640(arr[k]);
        k++;
    }
    sub_6A094A(arr);
}
