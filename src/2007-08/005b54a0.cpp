// from server: 47% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Primitive {
    char pad[8];
    Vector3 size;
    Vector3 clipToSafeSize(const Vector3& newSize);
};

extern float g_safeSizeX;
extern float g_safeSizeY;

extern "C" double __stdcall sqrt(double);

Vector3 Primitive::clipToSafeSize(const Vector3& newSize)
{
    Vector3 result;
    float sx = g_safeSizeX;
    float sy = g_safeSizeY;
    float sz = g_safeSizeX;

    float nx = newSize.x;
    float ny = newSize.y;
    float nz = newSize.z;

    if (nx > sx)
        sx = nx;
    if (ny > sy)
        sy = ny;
    if (nz > sz)
        sz = nz;

    result.x = sx;
    result.y = sy;
    result.z = sz;

    float ratio = (newSize.x * newSize.y * newSize.z) / (sx * sy * sz);
    if (ratio > g_safeSizeY)
    {
        result.y = (float)sqrt((double)ratio);
    }
    return result;
}
