// from server: 77% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Entry {
    unsigned int data[2];
};

struct Container {
    char pad[12];
    Entry* begin;
    Entry* end;
};

struct Vector {
    float x, y, z;
    Vector(const Vector&);
};

inline Vector::Vector(const Vector& v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Bounds {
    Vector minimum;
    Vector maximum;
    Bounds(const Bounds&);
};

inline Bounds::Bounds(const Bounds& b)
    : minimum(b.minimum), maximum(b.maximum)
{
}

extern const float half;

Bounds __cdecl getBounds(const Container*);
Vector __cdecl transform(const Vector&);

struct S {
    void f(Container*);
    Vector getPosition();
    void apply(Container*, Vector, int);
};

void S::f(Container* container)
{
    if (static_cast<unsigned int>(container->end - container->begin) > 0) {
        Bounds bounds = getBounds(container);
        Vector position = getPosition();

        position.x = position.x -
            (bounds.minimum.x + bounds.maximum.x) * half;
        position.y = position.y - bounds.minimum.y;
        position.z = position.z -
            (bounds.minimum.z + bounds.maximum.z) * half;

        Vector result = transform(position);
        apply(container, result, 0);
    }
}
