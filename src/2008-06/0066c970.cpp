// from server: 93% by king_originala
#pragma float_control(precise, off)
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

struct Vector3 {
    float x, y, z;
    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }
};

extern const Vector3& __cdecl zeroVector();

struct Ray {
    unsigned int tag;
    Vector3 origin, direction;
    ~Ray();
};

Ray::~Ray()
{
    tag = 0;
}

struct Plane {
    unsigned int tag;
    Vector3 normal;
    float distance;
    ~Plane();
};

Plane::~Plane()
{
    tag = 0;
}

struct Box {
    Vector3 low, high;
    Plane face(int index) const;
};

struct Transform {
    float m[3][3];
    Vector3 translation;
    Ray transformRay(const Ray& ray) const;
};

struct Geometry {
    unsigned int tag;
    Vector3 size;
};

struct Object {
    char padding[0x9c];
    Geometry* geometry;
    const Transform& getTransform() const;
};

struct FaceList {
    int* data;
    int count;
    int* find(int value) const;
};

inline int* FaceList::find(int value) const
{
    for (int i = 0; i < count; ++i) {
        if (data[i] == value)
            return data + i;
    }
    return data + count;
}

struct Result {
    Object* object;
    int face;
    Vector3 position, normal;
    Result();
};

inline Result::Result()
    : object(0), face(6), position(zeroVector()), normal(zeroVector())
{
}

extern bool __cdecl intersect(const Ray*, const Plane*, Vector3*);

struct S {
    char padding[0x44];
    Ray ray;
    Result findFace(Object* object, const FaceList* excluded);
};

Result S::findFace(Object* object, const FaceList* excluded)
{
    Result result;
    result.object = object;

    const Vector3& size = object->geometry->size;
    Vector3 half(size.x * 0.5f, size.y * 0.5f, size.z * 0.5f);
    Box box;
    box.low = Vector3(-half.x, -half.y, -half.z);
    box.high = half;

    const Transform& transform = object->getTransform();
    Ray localRay = transform.transformRay(ray);
    float bestDistance = 0.0f;
    bool found = false;

    for (int i = 0; i < 6; ++i) {
        if (excluded && excluded->find(i) != excluded->data + excluded->count)
            continue;

        Plane plane = box.face(i);
        if (!(plane.normal.y * localRay.origin.y +
              plane.normal.z * localRay.origin.z +
              plane.normal.x * localRay.origin.x >= plane.distance))
            continue;

        Vector3 point(0.0f, 0.0f, 0.0f);
        if (!intersect(&localRay, &plane, &point))
            continue;

        Vector3 world(
            point.x * transform.m[0][0] +
            point.y * transform.m[0][1] +
            point.z * transform.m[0][2] + transform.translation.x,
            point.x * transform.m[1][0] +
            point.y * transform.m[1][1] +
            point.z * transform.m[1][2] + transform.translation.y,
            point.x * transform.m[2][0] +
            point.y * transform.m[2][1] +
            point.z * transform.m[2][2] + transform.translation.z);

        Vector3 delta(ray.origin.x - world.x,
                      ray.origin.y - world.y,
                      ray.origin.z - world.z);
        float distance = (float)sqrt(delta.x * delta.x +
                                    delta.y * delta.y +
                                    delta.z * delta.z);
        if (distance > bestDistance) {
            bestDistance = distance;
            result.face = i;
            found = true;
            result.position = world;
        }
    }

    return found ? result : Result();
}
