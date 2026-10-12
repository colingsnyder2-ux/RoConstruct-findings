// from server: 51% by king_originala
struct Vector
{
    float x, y, z;
};

extern const Vector& __cdecl getVector();

struct Ray
{
    Vector origin;
    Vector direction;
};

struct Bounds
{
    Vector low;
    Vector high;
    ~Bounds() {}
};

extern bool __cdecl intersect(const Ray*, const Bounds*, void*, void*);

struct S
{
    bool accepts(const Ray*);
    Bounds getBounds(void*);
    bool f(void*, void*, void*);
};

bool S::f(void* input, void* output1, void* output2)
{
    Ray ray;
    const Vector& origin = getVector();
    ray.origin.x = origin.x;
    ray.origin.y = origin.y;
    ray.origin.z = origin.z;

    const Vector& direction = getVector();
    ray.direction.x = -direction.x;
    ray.direction.y = -direction.y;
    ray.direction.z = -direction.z;

    if (accepts(&ray) &&
        intersect(&ray, &getBounds(input), output1, output2))
        return true;

    return false;
}
