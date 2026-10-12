// from server: 79% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

struct Box {
    float x0, y0, z0;
    float x1, y1, z1;
    bool overlaps(const Box* other, float tolerance) const;
};

struct Primitive {
    const Box* get();
    const Vector3& getValue();
};

extern float tolerance;

int __cdecl classify(const Vector3& v, const Matrix3& m);
int __cdecl test1(Primitive*, Primitive*, int, int);
int __cdecl test2(Primitive*, Primitive*, int, int);
int __cdecl test3(Primitive*, Primitive*, int, int);
int __cdecl test4(Primitive*, Primitive*, int, int);

int __cdecl compare(Primitive* a, Primitive* b)
{
    const Box* first = a->get();
    const Box* second = b->get();
    if (first->overlaps(second, tolerance))
        return 0;

    const Matrix3& ma =
        reinterpret_cast<const Matrix3&>(a->getValue());
    const Matrix3& mb =
        reinterpret_cast<const Matrix3&>(b->getValue());

    int result;
    for (int i = 0; i < 6; ++i) {
        int column = i % 3;
        float scale = float(1 - 2 * (i / 3));
        Vector3 normal = {
            -(ma.m[column] * scale),
            -(ma.m[column + 3] * scale),
            -(ma.m[column + 6] * scale)
        };
        int direction = classify(normal, mb);
        if ((result = test1(a, b, i, direction)) ||
            (result = test2(a, b, i, direction)) ||
            (result = test3(a, b, i, direction)) ||
            (result = test4(a, b, i, direction)))
            break;
    }
    return result;
}
