// from server: 66% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(float a, float b, float c);
    Vector3 operator*(float s) const;
    Vector3 operator-() const;
};

__forceinline Vector3::Vector3() {}
__forceinline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c) {}
__forceinline Vector3 Vector3::operator*(float s) const
{
    return Vector3(x * s, y * s, z * s);
}
__forceinline Vector3 Vector3::operator-() const
{
    return Vector3(-x, -y, -z);
}

struct RayCache {
    const void* tag;
    Vector3 origin;
    Vector3 direction;
    ~RayCache();
};

struct SphereCache {
    const void* tag;
    Vector3 center;
    float radius;
    ~SphereCache();
};

extern const char rayTag;
extern const char sphereTag;
extern const float halfScale;

struct Ray {
    const void* tag;
    Vector3 origin;
    Vector3 direction;
};

struct Sphere {
    const void* tag;
    Vector3 center;
    float radius;
};

struct Frame {
    Ray makeRay(const Vector3* value);
    Vector3* pointToWorld(Vector3* result, const Vector3* value);
};

struct Box {
    Vector3 low;
    Vector3 high;
    Sphere transformed(const Frame* frame);
};

struct Size {
    unsigned int tag;
    Vector3 value;
};

struct Primitive {
    char padding[0x9c];
    Size* size;
    const Vector3& getValue();
};

extern bool __cdecl intersect(const Ray*, const Sphere*, Vector3*);

struct S {
    Primitive* primitive;
    Frame* frame;
    Vector3 point;
    void f(const Vector3* value);
};

void S::f(const Vector3* value)
{
    Vector3 half = primitive->size->value * halfScale;
    Box bounds = { -half, half };

    Frame* source = (Frame*)&primitive->getValue();
    Ray ray = source->makeRay(value);
    Sphere sphere = bounds.transformed(frame);

    Vector3 hit(0.0f, 0.0f, 0.0f);
    if (intersect(&ray, &sphere, &hit)) {
        Vector3 result;
        const Vector3* p = source->pointToWorld(&result, &hit);
        point.x = p->x;
        point.y = p->y;
        point.z = p->z;
    } else {
        intersect(&ray, &sphere, &hit);
    }

    static RayCache savedRay = {
        &rayTag,
        Vector3(ray.origin.x, ray.origin.y, ray.origin.z),
        Vector3(ray.direction.x, ray.direction.y, ray.direction.z)
    };
    static SphereCache savedSphere = {
        &sphereTag,
        Vector3(sphere.center.x, sphere.center.y, sphere.center.z),
        sphere.radius
    };
}
