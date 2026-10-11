// from server: 57% by colin
struct MultiJoint {
    char pad[0xc0];
    float x0;
    float y0;
    float z0;
    float x1;
    float y1;
    float z1;
    char pad2[0x18];
    float x2;
    float y2;
    float z2;
    float f();
};

extern "C" float __cdecl sub_649670(float, float);
extern "C" float __cdecl sub_6601B0(float);

float MultiJoint::f()
{
    float a = x2 - x0;
    float b = y2 - y0;
    float c = z2 - z0;
    float d = x1 - x0;
    float e = y1 - y0;
    float g = z1 - z0;

    float len1 = d * e + d * e + g * g;
    float len2 = a * a + b * b + c * c;

    float r1 = sub_649670(len1, len2);
    return sub_6601B0(r1);
}
