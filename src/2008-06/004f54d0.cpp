// from server: 25% by colin
struct PBBBuilder {
    char pad0[4];
    int field4;
    void build(int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __cdecl sub_5EC1E0(void*, void*);
    void* __cdecl sub_6A0956(unsigned int);
    float* __cdecl sub_509BA0();
    void __cdecl sub_548000(void*, void*, void*, int);
    void __cdecl sub_500EB0(void*, int, int, int, int);
    void __cdecl sub_548640(void*);
    void __cdecl sub_6A094A(void*);
}

extern float g_819BAC;

void PBBBuilder::build(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    char buf[0x6c];
    sub_5EC1E0(buf, &field4);

    short s1 = *(short*)((char*)&a1 + 0);
    short s2 = *(short*)((char*)&a1 + 2);
    int n1 = s1 + 1;
    int n2 = s2 + 1;
    int total = n1 * n2;

    float f1 = (float)s1;
    float f2 = (float)s2;

    float d1 = (*(float*)((char*)&a1 + 4) - *(float*)((char*)&a1 + 0)) / f1;
    float d2 = (*(float*)((char*)&a1 + 8) - *(float*)((char*)&a1 + 4)) / f2;

    float* arr = (float*)sub_6A0956((unsigned int)total * 4);

    float base1 = *(float*)((char*)&a1 + 4);
    float base2 = *(float*)((char*)&a1 + 8);

    int i = 0;
    float acc1 = 0.0f;
    while (i <= s2) {
        int j = 0;
        float acc2 = 0.0f;
        while (j <= s1) {
            float v1 = base1 + acc1;
            float v2 = base2 + acc2;
            float v3 = *(float*)((char*)&a1 + 12);
            float v4 = *(float*)((char*)&a1 + 16);
            float v5 = 1.0f;

            float t1, t2;
            if (v5 < v3) {
                t1 = v3 - v5;
                t2 = (v3 - v5) * *(float*)((char*)&a1 + 20);
            } else {
                t1 = v3 + v5;
                t2 = (v3 + v5) * *(float*)((char*)&a1 + 20);
            }

            float* sh = sub_509BA0();
            float u1, u2;
            if (sh[0] == *(float*)((char*)&a1 + 24) && sh[1] == *(float*)((char*)&a1 + 28)) {
                u1 = *(float*)((char*)&a1 + 32);
                u2 = *(float*)((char*)&a1 + 36);
            } else {
                u1 = v1;
                u2 = v2;
            }

            float m1 = u1 * g_819BAC;
            float m2 = u2 * g_819BAC;

            float p1[2], p2[2];
            sub_5EC1E0(p1, &v1);
            sub_5EC1E0(p2, &v2);

            char out[16];
            sub_548000(out, p1, p2, 1);

            acc1 += *(float*)(out + 0);
            acc2 += *(float*)(out + 4);

            int idx = (s2 + 1) * i + j;
            ((int*)arr)[idx] = *(int*)out;

            j++;
        }
        i++;
    }

    int k = 0;
    while (k < s2) {
        int m = 0;
        while (m < s1) {
            int idx0 = (s1 + 1) * k + m;
            int idx1 = idx0 + 1;
            int idx2 = idx0 + (s1 + 1);
            int idx3 = idx2 + 1;
            sub_500EB0((void*)this, ((int*)arr)[idx0], ((int*)arr)[idx1], ((int*)arr)[idx2], ((int*)arr)[idx3]);
            m++;
        }
        k++;
    }

    unsigned int cnt = (unsigned int)total;
    for (unsigned int q = 0; q < cnt; q++) {
        sub_548640((void*)((int*)arr)[q]);
    }
    sub_6A094A(arr);
}
