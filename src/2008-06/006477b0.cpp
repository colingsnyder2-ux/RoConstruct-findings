// from server: 43% by king_originala
struct Vector3 {
    float x, y, z;
};

extern "C" void* __cdecl sub_5ddbd0(void*, const Vector3*);

struct GlueJoint {
    unsigned int reserved;
    float x, y, z;
    void* func(void* out, float mass);
};

void* GlueJoint::func(void* out, float mass)
{
    double a = x;
    double b = y;
    double c = z;
    double ab = a * b;
    float area = (ab + (b + a) * c) * *(const float*)0x81c434;
    double k = *(const float*)0x81c434;

    float c2 = c * c;
    float c3 = c * c * c;
    double t = *(const float*)0x826e68;
    float c3bt = c * c * c * b * t;
    double cb2 = c * b * b;
    float cb2f = cb2;
    float b2 = b * b;
    float b3 = b * b * b;
    float ab3t = b * b * b * a * t;
    double scale = mass / (area * k);

    Vector3 value;
    value.x = (c2 * b * a
             + t * b * cb2
             + c3 * a * cb2
             + cb2f * a
             + ab3t
             + c3bt) * scale;

    double a2 = a * a;
    float a3 = a2 * a;
    float a3cs = a2 * a * c * scale;
    float c2a = c * c * a;

    value.y = (a2 * b * a
             + c2a * b * cb2
             + a3 * b * cb2
             + c2a * a
             + a3cs
             + c3bt) * scale;

    value.z = (ab * b
             + b2 * c * a
             + ab * a * cb2
             + a3cs * cb2
             + a3 * c * a
             + ab3t) * scale;

    sub_5ddbd0(out, &value);
    return out;
}
