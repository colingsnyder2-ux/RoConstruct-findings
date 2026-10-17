// from server: 24% by colin
struct Vector3 {
    float x, y, z;
};

struct WedgeBuilder {
    char pad0[4];
    int field4;
    void build(int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __cdecl sub_5EC1C0(Vector3* out, const Vector3* in);
    void* __cdecl sub_6A0956(unsigned int size);
    float* __cdecl sub_509BA0();
    void __cdecl sub_548000(void* out, const Vector3* a, const Vector3* b, int c);
    void __cdecl sub_500EB0(void* self, void* a, void* b, void* c, void* d);
    void __cdecl sub_548640(void* p);
    void __cdecl sub_6A094A(void* p);
}

extern float g_float_819BAC;

void WedgeBuilder::build(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    Vector3 v1;
    sub_5EC1C0(&v1, (const Vector3*)&field4);

    short w1 = *(short*)((char*)&a1 + 0);
    short w2 = *(short*)((char*)&a1 + 2);
    short w3 = *(short*)((char*)&a1 + 4);
    short w4 = *(short*)((char*)&a1 + 6);

    int n1 = w1 + 1;
    int n2 = w2 + 1;
    int total = n1 * n2;

    float f1 = (*(float*)((char*)&a1 + 8) - *(float*)((char*)&a1 + 0)) / (float)w1;
    float f2 = (*(float*)((char*)&a1 + 12) - *(float*)((char*)&a1 + 4)) / (float)w2;
    float f3 = *(float*)((char*)&a1 + 16) / (float)w1;
    float f4 = *(float*)((char*)&a1 + 20) / (float)w2;

    void** arr = (void**)sub_6A0956(total * 4);

    float base1 = *(float*)((char*)&a1 + 0);
    float base2 = *(float*)((char*)&a1 + 4);
    float base3 = *(float*)((char*)&a1 + 8);
    float base4 = *(float*)((char*)&a1 + 12);

    int i = 0;
    float acc1 = 0.0f;
    float acc2 = 0.0f;
    while (i <= w3) {
        int j = 0;
        float cur1 = base1;
        float cur2 = base2;
        while (j <= w4) {
            Vector3 p;
            p.x = cur1;
            p.y = cur2;
            p.z = base3;

            float t1 = cur1;
            float t2 = cur2;

            float* sh = sub_509BA0();
            if (sh[0] == *(float*)((char*)&a1 + 24) && sh[1] == *(float*)((char*)&a1 + 28)) {
                t1 = *(float*)((char*)&a1 + 32);
                t2 = *(float*)((char*)&a1 + 36);
            }

            Vector3 q;
            q.x = t1 * g_float_819BAC;
            q.y = t2 * g_float_819BAC;
            q.z = 0.0f;

            Vector3 r;
            sub_5EC1C0(&r, &q);

            Vector3 s;
            sub_5EC1C0(&s, &p);

            void* out;
            sub_548000(&out, &s, &r, 1);

            acc1 += p.x;
            acc2 += p.z;

            int idx = (w4 + 1) * i + j;
            arr[idx] = out;

            j++;
            cur1 += f1;
            cur2 += f2;
        }
        i++;
        base1 += f3;
        base2 += f4;
    }

    int k = 0;
    while (k < w3) {
        int m = 0;
        while (m < w4) {
            int idx = (w4 + 1) * k + m;
            sub_500EB0(this, arr[idx], arr[idx + 1], arr[idx + w4 + 1], arr[idx + w4 + 2]);
            m++;
        }
        k++;
    }

    unsigned int cnt = (unsigned int)total;
    for (unsigned int n = 0; n < cnt; n++) {
        sub_548640(arr[n]);
    }
    sub_6A094A(arr);
}
