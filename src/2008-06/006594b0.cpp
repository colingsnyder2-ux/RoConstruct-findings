// from server: 59% by king_originala
extern int scaleBase;

struct Vector3 {
    float x, y, z;
};

struct Bounds {
    Vector3 low, high;
};

Bounds* __cdecl makeBounds(Bounds* result, int level, const Vector3& position)
{
    double highX = position.x + 1.0;
    double highY = position.y + 1.0;
    double highZ = position.z + 1.0;
    double scale = scaleBase << level;

    highX *= scale;
    highY *= scale;
    highZ *= scale;

    double lowX = position.x * scale;
    double lowY = position.y * scale;
    double lowZ = position.z * scale;

    result->low.x = (float)lowX;
    result->low.y = (float)lowY;
    result->low.z = (float)lowZ;
    result->high.x = (float)highX;
    result->high.y = (float)highY;
    result->high.z = (float)highZ;
    return result;
}
