// from server: 72% by colin
// roc 2007-08 00479b50  unit: seg_00470000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479b50

extern "C" void __stdcall glDepthMask(unsigned char);
extern "C" float __cdecl sub_50ADB0(float, float, float, float, float, float, float);

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Rect {
    float x0;
    float y0;
    float x1;
    float y1;
};

struct S {
    void sub_479690();
    void sub_475BB0(int);
    void sub_4739D0(int);
    void sub_4744B0();
    void sub_473780(int);
    void sub_475690(int);
    void sub_4744E0(int);
    void sub_475DF0(int);
    void sub_474590(int);
    int sub_475050();
    void method(int, int);
    char pad_000[0x70];
    int field_070;
    char pad_074[4];
    int field_078;
    char pad_07c[0x3e1 - 0x7c];
    unsigned char field_3E1;
};

void S::method(int a, int b)
{
    sub_479690();
    sub_475BB0(a);
    sub_4739D0(6);
    sub_4744B0();
    sub_473780(2);
    field_078 += 1;
    if (field_3E1 != 0) {
        field_070 += 1;
        glDepthMask(0);
        field_3E1 = 0;
    }
    sub_475690(b);
    sub_4744E0(sub_475050());
    sub_475DF0(sub_475050());

    Rect* r = (Rect*)b;
    float v0 = r->y0;
    float v1 = r->y1 - r->y0;
    float v2 = r->x0;
    float v3 = r->x1 - r->x0;
    float v4 = r->x0;

    float f1 = 1.0f;
    float f2 = *(float*)0x79646c;
    float f3 = v1 + v0;
    float f4 = v3 + v2;
    float f5 = v4;

    sub_474590((int)sub_50ADB0(f5, f4, f3, f2, f1, v1, v0));
}
