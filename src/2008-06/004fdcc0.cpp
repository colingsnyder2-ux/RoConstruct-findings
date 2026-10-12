// from server: 82% by king_originala
extern "C" double __cdecl fabs(double);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(fabs, sqrt)
#pragma float_control(precise, off, push)

struct Vector2 {
    float x, y;
    float length() const;
};

inline float Vector2::length() const
{
    return (float)sqrt(x * x + y * y);
}

struct Vector3 {
    float x, y, z;
    Vector2 xy() const;
};

struct CylinderBuilder {
    float radius;
    void adjust(Vector3& v, int, int, const Vector3& size, int);
};

void CylinderBuilder::adjust(Vector3& v, int, int, const Vector3& size, int)
{
    float scale;
    if (fabs(v.y) >= fabs(v.x)) {
        if (v.y == 0.0f) {
            scale = 0.0f;
        } else {
            float magnitude = (float)fabs(v.y);
            scale = magnitude / v.xy().length()
                  * (1.0f - radius / size.y);
        }
    } else {
        if (v.x == 0.0f) {
            scale = 0.0f;
        } else {
            float magnitude = (float)fabs(v.x);
            scale = magnitude / v.xy().length()
                  * (1.0f - radius / size.x);
        }
    }
    v.x *= scale;
    v.y *= scale;
}

#pragma float_control(pop)
