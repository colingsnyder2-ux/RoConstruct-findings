// from server: 83% by king_originala
struct Vector3 {
    float x, y, z;
    __forceinline Vector3& operator=(const Vector3& v) {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }
};

extern const float halfScale;
extern const unsigned int rayTag;
extern const unsigned int sphereTag;
extern unsigned int savedFlags;

struct Ray;
struct Sphere;
extern Ray savedRay;
extern Sphere savedSphere;

extern "C" int __cdecl atexit(void (__cdecl*)());
extern void __cdecl destroySavedRay();
extern void __cdecl destroySavedSphere();

struct Ray {
    const unsigned int* tag;
    Vector3 origin;
    Vector3 direction;
    __forceinline ~Ray();
};

struct Sphere {
    const unsigned int* tag;
    Vector3 center;
    float radius;
    __forceinline ~Sphere();
};

struct Frame {
    Ray makeRay(const Vector3& point) const;
    Vector3 pointToWorld(const Vector3& point) const;
};

struct Box {
    Vector3 low;
    Vector3 high;
    Sphere transform(const Frame& frame);
};

struct Dimensions {
    unsigned int tag;
    Vector3 size;
};

struct Object {
    char padding[0x9c];
    Dimensions* dimensions;
    const Frame& getFrame();
};

struct S {
    Object* object;
    Frame* frame;
    Vector3 point;
    void f(const Vector3& input);
};

extern bool __cdecl intersect(const Ray& ray, const Sphere& sphere,
                              Vector3& point);

__forceinline Ray::~Ray()
{
    if (!(savedFlags & 1)) {
        savedFlags |= 1;
        savedRay.tag = &rayTag;
        savedRay.origin.x = origin.x;
        savedRay.origin.y = origin.y;
        savedRay.origin.z = origin.z;
        savedRay.direction.x = direction.x;
        savedRay.direction.y = direction.y;
        savedRay.direction.z = direction.z;
        atexit(destroySavedRay);
    }
}

__forceinline Sphere::~Sphere()
{
    if (!(savedFlags & 2)) {
        savedFlags |= 2;
        savedSphere.tag = &sphereTag;
        savedSphere.center.x = center.x;
        savedSphere.center.y = center.y;
        savedSphere.center.z = center.z;
        savedSphere.radius = radius;
        atexit(destroySavedSphere);
    }
}

void S::f(const Vector3& input)
{
    const Vector3& size = object->dimensions->size;
    double x = size.x * (double)halfScale;
    double y = size.y * (double)halfScale;
    double z = size.z * (double)halfScale;

    Box box;
    box.low.x = (float)-x;
    box.low.y = (float)-y;
    box.low.z = (float)-z;
    box.high.x = (float)x;
    box.high.y = (float)y;
    box.high.z = (float)z;

    const Frame& world = object->getFrame();
    Ray ray = world.makeRay(input);
    Sphere sphere = box.transform(*frame);

    Vector3 hit;
    hit.x = 0.0f;
    hit.y = 0.0f;
    hit.z = 0.0f;

    if (intersect(ray, sphere, hit))
        point = world.pointToWorld(hit);
    else
        intersect(ray, sphere, hit);
}
