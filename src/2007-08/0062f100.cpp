// from server: 84% by Viper
struct Vector3 {
    float x, y, z;
};

struct AdornG3D {
};

extern "C" float __cdecl sqrtf_helper(float);

extern float g_someFloat;
extern double g_doubleA;
extern double g_doubleB;

float __cdecl distanceTo(const Vector3& a, const Vector3& b) {
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
