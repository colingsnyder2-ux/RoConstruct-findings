// from server: 67% by king_originala
struct Vector3 {
    float x, y, z;
};

struct SizeData {
    float unused;
    Vector3 size;
};

struct RayData {
    float unused;
    Vector3 origin;
    Vector3 direction;
};

struct Bounds {
    Vector3 low;
    Vector3 high;
};

extern const float halfScale;
extern float output1;
extern float output2;

extern void __cdecl collide(
    const Vector3*, const Vector3*, const Bounds*,
    void*, float*, float*);

void __cdecl testBounds(
    const SizeData* size, const RayData* ray, void* result, float scale)
{
    double x = (double)size->size.x * scale;
    double y = (double)size->size.y * scale;
    double z = (double)size->size.z * scale;

    x *= halfScale;
    y *= halfScale;
    z *= halfScale;

    Bounds bounds = {
        { (float)-x, (float)-y, (float)-z },
        { (float)x, (float)y, (float)z }
    };

    collide(&ray->origin, &ray->direction, &bounds,
            result, &output1, &output2);
}
