// from server: 86% by king_originala
#pragma float_control(precise, off)

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern char property;

struct Vector
{
    float x, y, z;
    Vector() : x(0.0f), y(0.0f), z(0.0f) {}
};

struct S
{
    char padding0[0x1b8];
    int mode;
    char padding1[0x14];
    Vector direction;

    void notify(const void*);
    void f(const Vector&);
};

void S::f(const Vector& value)
{
    if (value.x == direction.x &&
        value.y == direction.y &&
        value.z == direction.z)
        return;

    static Vector zero;

    if (zero.x == value.x &&
        zero.y == value.y &&
        zero.z == value.z)
    {
        direction.x = value.x;
        direction.y = value.y;
        direction.z = value.z;
    }
    else
    {
        float x = value.x;
        float y = 0.0f;
        float z = value.z;
        float inverse = 1.0f / (float)sqrt(x * x + z * z);

        direction.x = x * inverse;
        direction.y = y * inverse;
        direction.z = z * inverse;
        mode = 3;
    }

    notify(&property);
}
