// from server: 81% by king_originala
struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
};

struct Vector {
    float x, y, z;
};

struct Transform {
    Matrix rotation;
    Vector translation;
    Transform();
    inline Transform(const Transform&);
};

inline Transform::Transform(const Transform& other)
    : rotation(other.rotation)
{
    translation.x = other.translation.x;
    translation.y = other.translation.y;
    translation.z = other.translation.z;
}

extern float __cdecl readNumber(void*, int);
extern Matrix __cdecl makeRotation(float, float, float);
extern void __cdecl pushTransform(void*, Transform);

int __cdecl f(void* state)
{
    Transform value;
    pushTransform(state, (value.rotation = makeRotation(
        readNumber(state, 1),
        readNumber(state, 2),
        readNumber(state, 3)), value));
    return 1;
}
