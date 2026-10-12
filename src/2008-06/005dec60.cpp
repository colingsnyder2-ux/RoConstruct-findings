// from server: 91% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float values[9];
    Vector3* column(Vector3* output, int index) const;
    Matrix3& operator=(const Matrix3& other);
};

struct Transform {
    Matrix3 rotation;
    Vector3 translation;
};

extern const float scale;
extern "C" double __cdecl atan2(double y, double x);
#pragma intrinsic(atan2)
#pragma float_control(precise, off)

void __cdecl rotate(Transform* result, float yaw, float pitch);

Transform* __cdecl reconstruct(Transform* result, const Transform* source)
{
    float factor = scale;
    Vector3 storage;
    const Vector3* direction = source->rotation.column(&storage, 2);
    float yaw = (float)atan2(-(direction->x * factor),
                            -(direction->z * factor));

    result->rotation = source->rotation;
    result->translation.x = source->translation.x;
    result->translation.y = source->translation.y;
    result->translation.z = source->translation.z;

    rotate(result, yaw, 0.0f);
    return result;
}
