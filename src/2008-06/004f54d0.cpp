// from server: 27% by colin
//

struct Vec2 { float x, y; };
struct Vec4 { float x, y, z, w; };

extern "C" {
    void __cdecl sub_5EC1A0(void* dst, const void* src);
    void* __cdecl sub_6A0956(int size);
    void __cdecl sub_6A094A(void* p);
    float* __cdecl sub_509BA0();
    void __cdecl sub_548000(void* out, const void* a, const void* b, int c);
    void __cdecl sub_548640(void* p);
    void __cdecl sub_500EB0(void* self, int a, int b, int c, int d);
}

extern float g_819bac;

struct PBBBuilder {
    char pad0[4];
    int field4;
    void method(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

void PBBBuilder::method(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    char buf[0x6c];
    sub_5EC1A0(buf + 0x24, &field4);
    short w1 = *(short*)((char*)&a + 0);
    short w2 = *(short*)((char*)&a + 2);
    int n1 = w1 + 1;
    int n2 = w2 + 1;
    int total = n1 * n2;
    float f1 = (*(float*)((char*)&a + 0x14) - *(float*)((char*)&a + 0x0c)) / (float)n1;
    float f2 = (*(float*)((char*)&a + 0x18) - *(float*)((char*)&a + 0x10)) / (float)n2;
    float f3 = *(float*)((char*)&a + 0x2c) / *(float*)((char*)&a + 0x28);
    float f4 = *(float*)((char*)&a + 0x30) / *(float*)((char*)&a + 0x28);
    float* arr = (float*)sub_6A0956(total * 4);
    float acc1 = 0.0f;
    float acc2 = 0.0f;
    for (int i2 = 0; i2 <= w2; i2++) {
        float cur1 = *(float*)((char*)&a + 0x08);
        float cur2 = *(float*)((char*)&a + 0x1c);
        for (int j2 = 0; j2 <= w1; j2++) {
            float v2 = cur1;
            float v3 = cur2;
            float v5 = 1.0f;
            float r1, r2;
            if (v5 < v2) {
                r1 = v2 - v5;
                r2 = (v2 - v5) * *(float*)((char*)&a + 0x04);
            } else {
                r1 = v2 + v5;
                r2 = v2 + v5;
            }
            float* sh = sub_509BA0();
            float sx, sy;
            if (sh[0] == *(float*)((char*)&a + 0x18) && sh[1] == *(float*)((char*)&a + 0x1c)) {
                sx = *(float*)((char*)&a + 0x10);
                sy = *(float*)((char*)&a + 0x14);
            } else {
                sx = v2;
                sy = v3;
            }
            float m1 = sx * g_819bac;
            float m2 = sy * g_819bac;
            Vec2 p1, p2;
            sub_5EC1A0(&p1, &m1);
            sub_5EC1A0(&p2, &m2);
            Vec4 out;
            sub_548000(&out, &p1, &p2, 1);
            acc1 += out.x;
            acc2 += out.z;
            int off = (w2 + 1) * i2 + j2;
            ((int*)arr)[off] = (int)*(float*)&out;
            cur1 += f1;
            cur2 += f2;
        }
        acc1 += f3;
        acc2 += f4;
    }
    for (int i3 = 0; i3 < w2; i3++) {
        for (int j3 = 0; j3 < w1; j3++) {
            int o = (w1 + 1) * i3 + j3;
            int a1 = ((int*)arr)[o];
            int a2 = ((int*)arr)[o + 1];
            int a3 = ((int*)arr)[o + w1 + 1];
            int a4 = ((int*)arr)[o + w1 + 2];
            sub_500EB0(this, a1, a2, a3, a4);
        }
    }
    for (unsigned int i4 = 0; i4 < (unsigned int)total; i4++) {
        sub_548640(((void**)arr)[i4]);
    }
    sub_6A094A(arr);
}
