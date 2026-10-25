// from server: 74% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast

namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    Vector3 operator+(const Vector3& v) const { return Vector3(x + v.x, y + v.y, z + v.z); }
    Vector3 operator-(const Vector3& v) const { return Vector3(x - v.x, y - v.y, z - v.z); }
    Vector3 operator*(float s) const { return Vector3(x * s, y * s, z * s); }
    float dot(const Vector3& v) const { return x * v.x + y * v.y + z * v.z; }
};
}

namespace RBX {
class RbxRay {
public:
    int reserved;
    G3D::Vector3 origin;
    G3D::Vector3 direction;
};

G3D::Vector3 closestPoint(const RbxRay& a, const RbxRay& b)
{
    G3D::Vector3 p1 = a.origin;
    G3D::Vector3 p2 = b.origin;
    G3D::Vector3 d1 = a.direction;
    G3D::Vector3 d2 = b.direction;
    float d = d1.dot(d2);
    G3D::Vector3 r = p2 - p1;
    float denom = 1.0f - d * d;
    if (denom > 1e-5)
    {
        float t = (-r.dot(d2) * d + r.dot(d1)) / denom;
        return p1 + d1 * t;
    }
    return p1;
}
}
