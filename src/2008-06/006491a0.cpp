// from server: 72% by king_originala
#pragma float_control(precise, off)

struct Vector {
    float x, y, z;

    Vector();
    static const Vector& zero();
};

inline Vector::Vector() : x(0.0f), y(0.0f), z(0.0f) {}

inline const Vector& Vector::zero()
{
    static Vector value;
    return value;
}

struct Ray {
    void* table;
    Vector origin;
    Vector direction;
};

struct Sphere {
    Vector center;
    float radius;

    Sphere(const Vector&, float);
    virtual ~Sphere();
};

inline Sphere::Sphere(const Vector& position, float size)
    : center(position), radius(size)
{
}

inline Sphere::~Sphere()
{
}

extern const double* infinitySource;
extern Vector normalOutput;

extern double __cdecl intersectSphere(
    const Vector*, const Vector*, const Sphere*, Vector*, Vector*);

struct Ball {
    char padding[0x10];
    float radius;

    bool intersect(const Ray&, Vector&, bool&) const;
};

bool Ball::intersect(const Ray& ray, Vector& point, bool& inside) const
{
    inside = radius * radius >=
        ray.origin.x * ray.origin.x +
        ray.origin.y * ray.origin.y +
        ray.origin.z * ray.origin.z;

    Sphere sphere(Vector::zero(), radius);
    static double infinity = *infinitySource;

    return intersectSphere(
        &ray.origin, &ray.direction, &sphere, &point, &normalOutput)
        != infinity;
}
