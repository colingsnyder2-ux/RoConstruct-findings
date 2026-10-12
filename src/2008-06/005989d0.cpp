// from server: 71% by king_originala




struct Vector {
    float x, y, z;
    Vector(float a, float b, float c);
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct Transform {
    float m[3][3];
    Vector t;
};

extern void __cdecl multiplyMatrix(const Transform*, const Transform*, Transform*);

void __cdecl combine(const Transform* a, const Transform* b, Transform* out)
{
    multiplyMatrix(a, b, out);

    out->t = Vector(
        (a->m[0][2] * b->t.z + a->m[0][1] * b->t.y)
            + b->t.x * a->m[0][0] + a->t.x,
        (a->m[1][2] * b->t.z + a->m[1][0] * b->t.x)
            + a->m[1][1] * b->t.y + a->t.y,
        (a->m[2][2] * b->t.z + a->m[2][0] * b->t.x)
            + a->m[2][1] * b->t.y + a->t.z);
}
