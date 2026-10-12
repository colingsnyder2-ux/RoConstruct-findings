// from server: 64% by king_originala
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
    Vector(float, float, float);
    Vector(const Vector&);
    Vector operator-(const Vector&) const;
};

inline Vector::Vector(float a, float b, float c) : x(a), y(b), z(c) {}
inline Vector::Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}

inline Vector Vector::operator-(const Vector& v) const
{
    return Vector(x - v.x, y - v.y, z - v.z);
}

struct Bounds {
    Vector minimum;
    Vector maximum;
    Bounds(const Bounds&);
};

inline Bounds::Bounds(const Bounds& b)
    : minimum(b.minimum), maximum(b.maximum) {}

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
        Vector result = transform(position - Vector(
            (bounds.minimum.x + bounds.maximum.x) * half,
            bounds.minimum.y,
            (bounds.minimum.z + bounds.maximum.z) * half));
        apply(container, result, 0);
    }
}
