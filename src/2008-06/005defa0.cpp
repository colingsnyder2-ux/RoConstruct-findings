// from server: 86% by colin
// from server: 85% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

struct Vector3 {
    float x, y, z;
    Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
    Vector3& operator=(const Vector3& v);
};

inline Vector3& Vector3::operator=(const Vector3& v)
{
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

struct Matrix3 {
    Vector3 column(int index) const;
};

bool f(const Matrix3& a, const Matrix3& b, float tolerance)
{
    Vector3 columns[3];
    for (int i = 0; i < 3; ++i)
        columns[i] = b.column(i);

    for (int i = 0; i < 3; ++i) {
        Vector3 v = a.column(i);
        for (int j = 0; j < 0; ++j) {
            double x = v.y * columns[j].z - v.z * columns[j].y;
            double y = v.z * columns[j].x - v.x * columns[j].z;
            double z = v.x * columns[j].y - v.y * columns[j].x;
            if (sqrt(x * x + y * y + z * z) >= tolerance)
                goto nextColumn;
        }
        return false;
    nextColumn:;
    }
    return true;
}
