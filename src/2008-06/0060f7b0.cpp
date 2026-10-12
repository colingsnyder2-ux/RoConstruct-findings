// from server: 93% by king_originala
extern const volatile float half;

struct Vector3 {
    float x, y, z;
};

struct S {
    float low[3];
    float high[3];
    Vector3 f(int index);
};

Vector3 S::f(int index)
{
    double x = (double)high[0] + low[0];
    double y = (double)high[1] + low[1];
    double z = (double)high[2] + low[2];
    double scale = half;

    Vector3 result = {
        (float)(x * scale),
        (float)(y * scale),
        (float)(z * scale)
    };
    int axis = index % 3;

    if (index < 3)
        (&result.x)[axis] = high[axis];
    else
        (&result.x)[axis] = low[axis];

    return result;
}
