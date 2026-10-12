// from server: 58% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Primitive {
    char pad[0xa0];
    Body* body;
    const Vector3& getValue();
};

struct Dimensions {
    char pad[4];
    Vector3 value;
};

struct Box {
    Vector3 minimum;
    Vector3 maximum;
    Box translated(const Vector3& offset) const;
};

struct S_func_00598b60 {
    char pad[0x9c];
    Dimensions* dimensions;
    Box f();
};

Box S_func_00598b60::f()
{
    Vector3 half = {
        dimensions->value.x * 0.5f,
        dimensions->value.y * 0.5f,
        dimensions->value.z * 0.5f
    };
    Box bounds = {
        { -half.x, -half.y, -half.z },
        { half.x, half.y, half.z }
    };
    return bounds.translated(((Primitive*)this)->getValue());
}
