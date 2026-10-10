// from server: 34% by colin
struct VWidget {
    char pad[0x20];
    int field20;
    int field24;
    int field28;
    int field2c;
    void sub_601110(int);
    void sub_601260(int, int, int, int);
};

extern "C" int __cdecl sub_736ed0();
extern "C" int __cdecl sub_50b0b0();
extern "C" int __cdecl sub_50b120();
extern "C" int __cdecl sub_474f70(int, int, int, int, int);
extern "C" int __cdecl sub_4d04c0(int, int, int, int, int);

extern float g_797e9c;

void VWidget::sub_601260(int a1, int a2, int a3, int a4)
{
    if (*(unsigned char*)&a1 == 0) {
        float v[4];
        v[0] = 1.0f;
        v[1] = 1.0f;
        v[2] = 1.0f;
        v[3] = g_797e9c;
        int r = sub_736ed0();
        int zero = 0;
        sub_474f70(field24, (int)&zero, a2, (int)&v[0], r);
        sub_601110(a2);
        return;
    }

    if (a2 == 0) {
        int r1 = sub_736ed0();
        int r2 = sub_736ed0();
        int zero = 0;
        sub_474f70(field20, (int)&zero, a2, r2, r1);
        sub_601110(a2);
        return;
    }

    if (a2 == 1 || a2 == 3) {
        float* p = (float*)sub_50b120();
        float v[4];
        v[0] = p[0];
        v[1] = p[1];
        v[2] = p[2];
        v[3] = 1.0f;
        int r = sub_736ed0();
        int zero = 0;
        sub_474f70(field28, (int)&zero, a2, (int)&v[0], r);
        sub_601110(a2);
        return;
    }

    float* p = (float*)sub_50b0b0();
    float v[4];
    v[0] = p[0];
    v[1] = p[1];
    v[2] = p[2];
    v[3] = 1.0f;
    int r = sub_736ed0();
    sub_4d04c0((int)&field2c, (int)&v[0], a2, (int)&v[0], r);
    sub_601110(a2);
}
