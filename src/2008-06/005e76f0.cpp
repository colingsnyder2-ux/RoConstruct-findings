// from server: 86% by king_originala
struct Vector {
    float x, y, z;
};

struct Bounds {
    Vector low;
    Vector high;
};

struct Data {
    int header;
    Vector size;
};

struct Result;
struct Transform;

extern float scale;
extern void __cdecl build(Result*, const Bounds&, const Transform&);

struct Ball {
    char padding[0x9c];
    Data* data;

    Result* compute(Result*, const Transform&);
};

Result* Ball::compute(Result* result, const Transform& transform)
{
    const Vector& size = data->size;
    double x = (double)size.x * scale;
    double y = (double)size.y * scale;
    double z = (double)size.z * scale;
    Bounds bounds = {
        { (float)-x, (float)-y, (float)-z },
        { (float)x, (float)y, (float)z }
    };
    build(result, bounds, transform);
    return result;
}
