// from server: 81% by colin
struct Vector3 {
    float x, y, z;
};

struct AdornG3D {
    float distanceTo(const Vector3& a, const Vector3& b);
};

extern "C" float __cdecl sqrtf_helper(float);

extern float g_someFloat;
extern double g_doubleA;
extern double g_doubleB;

float AdornG3D::distanceTo(const Vector3& a, const Vector3& b) {
    Vector3 d;
    d.x = a.x - b.x;
    d.y = a.y - b.y;
    d.z = a.z - b.z;
    float lenSq = d.x * d.x + d.y * d.y + d.z * d.z;
    float len = sqrtf_helper(lenSq);
    float result = g_someFloat;
    if (len > g_doubleB) {
        result = (float)(len * g_doubleA);
    }
    return result;
}
