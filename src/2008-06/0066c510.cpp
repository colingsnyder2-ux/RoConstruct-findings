// from server: 72% by king_originala
struct Vector3 { float x, y, z; };

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Primitive {
    char pad[0xa0];
    Body* body;
    const Vector3& getValue();
};

struct Transform {
    float m[9];
    Vector3 position;
};

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern float threshold;

struct S {
    char pad0[0x14];
    Primitive* primitive;
    Vector3 local;
    char pad1[0x24];
    Vector3 previous;
    int f();
};

#pragma float_control(precise, off, push)

int S::f()
{
    const Transform& t =
        reinterpret_cast<const Transform&>(primitive->getValue());

    double x = (t.m[1] * local.y + t.m[2] * local.z)
             + local.x * t.m[0] + t.position.x;
    double y = (t.m[4] * local.y + t.m[3] * local.x)
             + t.m[5] * local.z + t.position.y;
    double z = (t.m[7] * local.y + t.m[6] * local.x)
             + t.m[8] * local.z + t.position.z;

    x -= previous.x;
    y -= previous.y;
    z -= previous.z;

    return threshold > sqrt(x * x + z * z + y * y);
}

#pragma float_control(pop)
