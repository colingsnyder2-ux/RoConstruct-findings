// from server: 82% by king_originala
struct Vector3 {
    float x, y, z;

    Vector3();
    Vector3(float a, float b, float c);
};

__forceinline Vector3::Vector3()
{
}

__forceinline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct Cofm {
    const Vector3& getCofmInBody() const;
};

struct Body {
    unsigned char padding[0x28];
    Cofm* cofm;
};

struct Transform {
    Vector3 apply(const Vector3& value) const;
};

struct S {
    Body* body;
    unsigned char padding[8];
    Transform transform;

    Vector3 f() const;
};

Vector3 S::f() const
{
    const Vector3* value;
    if (body->cofm) {
        value = &body->cofm->getCofmInBody();
    } else {
        static const Vector3 zero(0.0f, 0.0f, 0.0f);
        value = &zero;
    }

    Vector3 negative;
    negative.x = -value->x;
    negative.y = -value->y;
    negative.z = -value->z;
    return transform.apply(negative);
}
