// from server: 82% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    Vector3* column(Vector3* result, int index) const;
};

extern float scale;
extern "C" double __cdecl atan2(double y, double x);
extern "C" double __cdecl asin(double x);

#pragma intrinsic(atan2, asin)
#pragma float_control(precise, off)

void angles(const Matrix3* matrix, float* heading, float* elevation)
{
    float factor = scale;
    Vector3 storage;
    const Vector3* v = matrix->column(&storage, 2);
    Vector3 scaled = {
        factor * v->x,
        factor * v->y,
        factor * v->z
    };
    *heading = (float)atan2(-scaled.x, -scaled.z);
    *elevation = (float)asin(scaled.y);
}
