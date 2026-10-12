// from server: 90% by king_originala
#pragma float_control(precise, off)
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

struct Vector3 {
    float x, y, z;
};

struct Transform {
    char padding[36];
    Vector3 position;
};

struct Object {
    const Transform* getTransform();
};

extern Object* __cdecl resolve(void*);
extern const double threshold;

struct S {
    char padding[24];
    void* object;
    int f(const Vector3& point);
};

int S::f(const Vector3& point)
{
    if (resolve(object)) {
        Object* p = resolve(object);
        float distance;
        if (p) {
            const Vector3& position = p->getTransform()->position;
            float x = position.x - point.x;
            float y = position.y - point.y;
            float z = position.z - point.z;
            distance = (float)sqrt(x * z + x * z + y * y);
        } else {
            distance = 0.0f;
        }
        if (distance < threshold)
            return 1;
    }
    return 0;
}
