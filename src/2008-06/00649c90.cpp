// from server: 97% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3
{
    float x, y, z;

    Vector3(float a, float b, float c);
    Vector3(const Vector3& other);
    Vector3 direction() const;
};

inline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Vector3::Vector3(const Vector3& other)
    : x(other.x), y(other.y), z(other.z)
{
}

inline Vector3 Vector3::direction() const
{
    float inverse = 1.0f / (float)sqrt(x * x + y * y + z * z);
    return Vector3(x * inverse, y * inverse, z * inverse);
}

struct Ball
{
    Vector3 origin;
    Vector3 first;
    Vector3 unused;
    Vector3 second;

    Vector3 func_00649c90(int which);
};

Vector3 Ball::func_00649c90(int which)
{
    return which == 0
        ? Vector3(first.x - origin.x,
                  first.y - origin.y,
                  first.z - origin.z).direction()
        : Vector3(second.x - origin.x,
                  second.y - origin.y,
                  second.z - origin.z).direction();
}
