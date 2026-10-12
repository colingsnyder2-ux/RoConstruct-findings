// from server: 81% by king_originala
extern "C" double __cdecl sin(double);
extern "C" double __cdecl cos(double);
extern "C" double __cdecl sqrt(double);

#pragma intrinsic(sin, cos, sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct S {
    char padding[36];
    Vector3 position;
    void lookAt(const Vector3&);
};

void __cdecl f(S* object, float yaw, float pitch)
{
    float y = (float)sin(pitch);
    float horizontal = (float)sqrt(1.0f - y * y);
    float x = -((float)sin(yaw) * horizontal);
    float z = -((float)cos(yaw) * horizontal);
    float inverseLength = 1.0f / (float)sqrt(x * x + z * z + y * y);

    Vector3 target;
    target.x = object->position.x + x * inverseLength;
    target.y = object->position.y + y * inverseLength;
    target.z = object->position.z + z * inverseLength;
    object->lookAt(target);
}
