// from server: 69% by king_originala
struct Vector {
    float x, y, z;
    Vector();
    Vector(const Vector&);
};

inline Vector::Vector() : x(0.0f), y(0.0f), z(0.0f) {}

inline Vector::Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}

struct Matrix {
    float m[9];
    Vector multiply(const Vector& v) const;
};

inline Vector Matrix::multiply(const Vector& v) const
{
    Vector result;
    result.x = m[0] * v.x + m[1] * v.y + m[2] * v.z;
    result.y = m[3] * v.x + m[4] * v.y + m[5] * v.z;
    result.z = m[6] * v.x + m[7] * v.y + m[8] * v.z;
    return result;
}

extern void* matrixType;
extern void* vectorType;

extern "C" void* __cdecl checkObject(void*, int, void*);
extern "C" int __cdecl lua_gettop(void*);
extern "C" void __cdecl pushVector(void*, Vector);

int __cdecl transformVectors(void* state)
{
    const Matrix* matrix =
        static_cast<const Matrix*>(checkObject(state, 1, matrixType));
    int count = lua_gettop(state) - 1;

    if (count == 0) {
        static const Vector zero;
        pushVector(state, matrix->multiply(zero));
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        const Vector* vector =
            static_cast<const Vector*>(checkObject(state, i + 2, vectorType));
        pushVector(state, matrix->multiply(*vector));
    }

    return count;
}
