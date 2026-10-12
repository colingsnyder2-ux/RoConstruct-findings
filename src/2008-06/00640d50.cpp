// from server: 48% by king_originala
struct Vector
{
    float x, y, z;
};

struct Ray
{
    Vector origin;
    Vector direction;
};

struct Temporary
{
    char data[24];
    ~Temporary() {}
};

extern const Vector& __cdecl getVector();
extern bool __cdecl testRay(const Ray*, const Temporary*, void*, void*);

struct S
{
    bool prepare(const Ray*);
    Temporary getTemporary(void*);
    bool f(void*, void*, void*);
};

bool S::f(void* input, void* a, void* b)
{
    Ray ray;
    ray.origin = getVector();

    const Vector& v = getVector();
    ray.direction.x = -v.x;
    ray.direction.y = -v.y;
    ray.direction.z = -v.z;

    if (prepare(&ray))
    {
        if (testRay(&ray, &getTemporary(input), a, b))
            return true;
    }

    return false;
}
