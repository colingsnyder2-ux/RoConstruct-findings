// from server: 80% by king_originala
#pragma float_control(precise, off)

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern "C" float __cdecl sub_649670(float, float);
extern "C" float __cdecl sub_6601B0(float);

struct MultiJoint {
    char pad[0xc0];
    float x0;
    float y0;
    float z0;
    float x1;
    float y1;
    float z1;
    char pad2[0x0c];
    float x2;
    float y2;
    float z2;

    float f();
};

float MultiJoint::f()
{
    float a = x2 - x0;
    float b = y2 - y0;
    float c = z2 - z0;
    float d = x1 - x0;
    float e = y1 - y0;
    float g = z1 - z0;

    float len1 = (float)sqrt(d * e + d * e + g * g);
    float len2 = (float)sqrt(a * a + b * b + c * c);

    return sub_6601B0(sub_649670(len1, len2));
}
