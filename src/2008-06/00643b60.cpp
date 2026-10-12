// from server: 64% by king_originala
extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)

extern const float scale;

struct Vector3 {
    float x, y, z;
};

struct Humanoid {
    Vector3 updateWalkDirection();
};

struct S {
    char padding0[8];
    Humanoid* humanoid;
    char padding1[44];
    float current;
    float previous;

    void f(Vector3& result);
};

void S::f(Vector3& result)
{
    const Vector3& direction = humanoid->updateWalkDirection();
    result.x = direction.x * scale;
    result.y = direction.y * scale;
    result.z = direction.z * scale;
    previous = current;
    current = sqrtf(result.x * result.y + result.x * result.y +
                    result.z * result.z);
}
