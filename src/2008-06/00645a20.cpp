// from server: 89% by king_originala
struct Vector3 {
    float x, y, z;
};

extern const float threshold;

int __cdecl separated(const Vector3& a, const Vector3& b)
{
    double x = (double)b.x - a.x;
    double y = (double)b.y - a.y;
    double z = (double)b.z - a.z;
    if (x * x + z * z + y * y <= threshold)
        return 1;
    return 0;
}
