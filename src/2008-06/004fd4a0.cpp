// from server: 68% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" double __cdecl fabs(double);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(fabs, sqrt)

struct Vector2 {
    float x, y;
};

struct Vector3 {
    float x, y, z;
    Vector2 xy() const;
};

void normalize(Vector3& v)
{
    float scale;
    if (fabs(v.x) > fabs(v.y)) {
        if (v.x == 0.0f) {
            v.x *= 0.0f;
            v.y *= 0.0f;
            return;
        }
        scale = (float)fabs(v.x);
    } else {
        if (v.y == 0.0f) {
            v.x *= 0.0f;
            v.y *= 0.0f;
            return;
        }
        scale = (float)fabs(v.y);
    }

    Vector2 p = v.xy();
    scale /= (float)sqrt(p.x * p.x + p.y * p.y);
    v.x *= scale;
    v.y *= scale;
}
