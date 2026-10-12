// from server: 91% by king_originala
struct Vector {
    float x, y, z;
};

struct Matrix {
    Vector* column(Vector* result, int index) const;
};

extern const float factor;
extern const float angleOffset;
extern const float angleScale;
extern const double sectorScale;

extern "C" double __cdecl atan2(double y, double x);
extern "C" double __cdecl floor(double value);

#pragma intrinsic(atan2)
#pragma float_control(precise, off)

int direction(const Matrix* matrix)
{
    float scale = factor;
    Vector result;
    const Vector* v = matrix->column(&result, 2);
    return (int)floor(
        (atan2(-(v->x * scale), -(v->z * scale)) + angleOffset)
        * angleScale * sectorScale) % 4;
}
