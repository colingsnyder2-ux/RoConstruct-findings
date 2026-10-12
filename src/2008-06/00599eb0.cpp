// from server: 69% by king_originala
struct Vector3
{
    float x, y, z;
    Vector3(float a, float b, float c);
};

inline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

extern Vector3 __cdecl roundVector(const Vector3&);
extern const float scale1;
extern const float scale2;

struct S
{
    char padding[0x1e0];
    int mode;
    Vector3 f(const Vector3&);
};

Vector3 S::f(const Vector3& v)
{
    float z = maximum(1.0f, v.z);
    float y = maximum(1.0f, v.y);
    float x = maximum(1.0f, v.x);
    Vector3 clamped(x, y, z);
    Vector3 rounded = roundVector(clamped);
    Vector3 result(rounded.x, rounded.y, rounded.z);

    switch (mode)
    {
    case 1:
        result.y *= scale1;
        break;
    case 2:
        result.y *= scale2;
        break;
    }

    return result;
}
