// from server: 89% by king_originala
#pragma float_control(precise, off)

struct Ray;

struct Vector3 {
    float x, y, z;

    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}

    Ray makeRay(const Ray& source) const;
};

struct Ray {
    Vector3 origin;
    Vector3 direction;
    virtual ~Ray() {}
};

struct Primitive {
    const Vector3& getValue();
};

struct Faces {
    char storage[0x34];
    int get(int index);
};

struct SizeData {
    unsigned int tag;
    Vector3 size;
};

struct Box {
    Vector3 low;
    Vector3 high;

    Box(const Vector3& a, const Vector3& b)
        : low(a.x, a.y, a.z), high(b.x, b.y, b.z) {}
};

extern float halfScale;
extern float collisionTime;
extern bool collisionInside;

extern void __cdecl collide(
    const Vector3& origin,
    const Vector3& direction,
    const Box& box,
    Vector3& point,
    float& time,
    bool& inside);

struct S {
    char padding[0x1f4];
    Faces faces;
    char primitiveStorage[0x9c];
    SizeData* sizeData;

    int f(const Ray& source, int* faceIndex);
};

int S::f(const Ray& source, int* faceIndex)
{
    const Vector3& frame =
        reinterpret_cast<Primitive*>(primitiveStorage)->getValue();
    Ray ray = frame.makeRay(source);

    const Vector3& size = sizeData->size;
    float x = size.x * halfScale;
    float y = size.y * halfScale;
    float z = size.z * halfScale;
    Vector3 low(-x, -y, -z);
    Vector3 high(x, y, z);
    Vector3 point(0.0f, 0.0f, 0.0f);

    collide(ray.origin, ray.direction, Box(low, high), point,
            collisionTime, collisionInside);

    for (int i = 0; i < 3; ++i) {
        if (reinterpret_cast<float*>(&high)[i] ==
            reinterpret_cast<float*>(&point)[i]) {
            *faceIndex = i;
            return faces.get(i);
        }
        if (reinterpret_cast<float*>(&low)[i] ==
            reinterpret_cast<float*>(&point)[i]) {
            *faceIndex = i + 3;
            return faces.get(i + 3);
        }
    }
    return 0;
}
