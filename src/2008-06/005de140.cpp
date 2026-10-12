// from server: 87% by king_originala
extern "C" double __cdecl acos(double);

struct Vector3 {
    float x, y, z;
};

double __cdecl angle(const Vector3& a, const Vector3& b)
{
    double dot = a.z * b.z + a.y * b.y + a.x * b.x;
    if (1.0f <= dot)
        return 0.0f;
    if (-1.0f >= dot)
        return 3.14159265358979323846f;
    return acos(dot);
}
