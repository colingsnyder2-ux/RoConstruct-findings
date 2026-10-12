// from server: 91% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3 clamp(const Vector3& low, const Vector3& high) const;
};

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Dimensions {
    char pad[4];
    Vector3 size;
};

struct Primitive {
    char pad[0x9c];
    Dimensions* dimensions;
    Body* body;
    const Vector3& getValue();
};

struct Frame {
    float rotation[9];
    Vector3 translation;
};

struct S {
    Primitive* primitive;
    char pad[4];
    Vector3 position;
    float f();
};

float S::f()
{
    const Vector3& size = primitive->dimensions->size;
    float hx = size.x * 0.5f;
    float hy = size.y * 0.5f;
    float hz = size.z * 0.5f;

    Vector3 low = { -hx, -hy, -hz };
    Vector3 high = { hx, hy, hz };

    const Frame& frame =
        *reinterpret_cast<const Frame*>(&primitive->getValue());

    float x = position.x - frame.translation.x;
    float y = position.y - frame.translation.y;
    float z = position.z - frame.translation.z;

    Vector3 local = {
        frame.rotation[6] * z + frame.rotation[3] * y + frame.rotation[0] * x,
        frame.rotation[7] * z + frame.rotation[4] * y + frame.rotation[1] * x,
        frame.rotation[8] * z + frame.rotation[5] * y + frame.rotation[2] * x
    };

    Vector3 nearest = local.clamp(low, high);
    float dx = local.x - nearest.x;
    float dy = local.y - nearest.y;
    float dz = local.z - nearest.z;

    return static_cast<float>(sqrt(dz * dz + dy * dy + dx * dx));
}
