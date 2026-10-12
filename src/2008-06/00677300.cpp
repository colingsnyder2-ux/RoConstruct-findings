// from server: 68% by king_originala
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Dimensions {
    unsigned int reserved;
    Vector3 value;
};

struct Transform {
    unsigned int reserved;
    Vector3 position;
    Vector3 orientation;
};

struct Bounds {
    Vector3 low, high;
};

extern const unsigned int dataD4;
extern const unsigned int dataD8;
extern const float halfScale;

extern void __cdecl drawBounds(
    const Vector3*,
    const Vector3*,
    const Bounds*,
    const void*,
    const unsigned int*,
    const unsigned int*);

void __cdecl drawScaledBounds(
    const Dimensions* dimensions,
    const Transform* transform,
    const void* context,
    float scale)
{
    float x = dimensions->value.x * scale;
    float y = dimensions->value.y * scale;
    float z = dimensions->value.z * scale;

    x *= halfScale;
    y *= halfScale;
    z *= halfScale;

    Bounds bounds = { { -x, -y, -z }, { x, y, z } };

    drawBounds(&transform->position, &transform->orientation,
               &bounds, context, &dataD4, &dataD8);
}
