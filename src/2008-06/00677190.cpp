// from server: 99% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3(float a, float b, float c);
};

inline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c) {}

struct Ray {
    void* table;
    Vector3 origin;
    Vector3 direction;
};

extern float centerX;
extern float centerY;
extern float centerZ;
extern const float radiusFactor;
extern Vector3 intersectionNormal;
extern "C" const volatile double* infinityValue;

struct Sphere {
    virtual ~Sphere();
    Vector3 center;
    float radius;
    Sphere(double r);
};

inline Sphere::Sphere(double r)
    : center(centerX, centerY, centerZ), radius((float)r) {}

inline Sphere::~Sphere() {}

extern double __cdecl intersectSphere(
    const Vector3* origin,
    const Vector3* direction,
    const Sphere* sphere,
    Vector3* point,
    Vector3* normal);

bool __cdecl intersects(
    const Vector3& size,
    const Ray& ray,
    Vector3& point,
    float scale)
{
    Sphere sphere((double)size.y * scale * radiusFactor);
    static const double infinity = *infinityValue;

    return intersectSphere(
        &ray.origin,
        &ray.direction,
        &sphere,
        &point,
        &intersectionNormal) != infinity;
}
