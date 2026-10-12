// from server: 55% by king_originala
struct Vector {
    float x, y, z;
    Vector(float a, float b, float c);
};

inline Vector::Vector(float a, float b, float c) : x(a), y(b), z(c) {}

extern Vector __cdecl transform(const Vector&);
extern float __cdecl evaluate(const Vector&, const Vector&);
extern const float scale;

inline const float& maximum(const float& a, const float& b)
{
    return a < b ? b : a;
}

float __cdecl f(const Vector& input, const Vector& other)
{
    Vector v = transform(input);
    Vector limited(maximum(1.0f, v.x),
                   maximum(1.0f, v.y),
                   maximum(1.0f, v.z));
    float result = evaluate(limited, other);
    if (v.x < 1.0f)
        result *= v.x;
    return result * scale;
}
