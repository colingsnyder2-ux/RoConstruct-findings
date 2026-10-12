// from server: 91% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Transform {
    char padding[0x24];
    Vector3 position;
};

struct Object {
    const Transform& getTransform();
};

extern Object* __cdecl findObject(void*);

struct ArrowTool {
    char padding[0x18];
    void* object;
    float distance(const Vector3& point);
};

float ArrowTool::distance(const Vector3& point)
{
    Object* p = findObject(object);
    if (p) {
        const Vector3& position = p->getTransform().position;
        float x = position.x - point.x;
        float y = position.y - point.y;
        float z = position.z - point.z;
        return (float)sqrt(x * y + x * y + z * z);
    }
    return 0.0f;
}
