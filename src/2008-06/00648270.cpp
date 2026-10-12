// from server: 74% by king_originala
#pragma float_control(precise, off)
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern float limit;

struct Vector {
    float x, y, z;
    Vector() {}
    Vector(float a, float b, float c) : x(a), y(b), z(c) {}
    __forceinline Vector absolute() const;
};

struct Frame {
    float rotation[9];
    Vector translation;
    Vector transform(const Vector& v) const;
};

struct Block {
    char padding[16];
    Vector* vectors;
    float radius;
    Vector bounds(const Frame& frame) const;
};

__forceinline Vector Vector::absolute() const
{
    return Vector((float)fabs(x), (float)fabs(y), (float)fabs(z));
}

static __forceinline const float& maximum(const float& a, const float& b)
{
    return a < b ? b : a;
}

Vector Block::bounds(const Frame& frame) const
{
    if (radius < limit)
        return Vector(radius, radius, radius);

    const Vector* axis = vectors;
    Vector result = frame.transform(*axis).absolute();
    ++axis;

    for (int i = 3; i != 0; --i, ++axis) {
        Vector extent(
            frame.rotation[0] * axis->x +
            frame.rotation[1] * axis->y +
            frame.rotation[2] * axis->z,
            frame.rotation[3] * axis->x +
            frame.rotation[4] * axis->y +
            frame.rotation[5] * axis->z,
            frame.rotation[6] * axis->x +
            frame.rotation[7] * axis->y +
            frame.rotation[8] * axis->z);

        extent = extent.absolute();
        result.z = maximum(extent.z, result.z);
        result.y = maximum(extent.y, result.y);
        result.x = maximum(extent.x, result.x);
    }

    return Vector(result.x, result.y, result.z);
}
