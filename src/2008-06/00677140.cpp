// from server: 84% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

extern float defaultValue;
extern float distanceScale;
extern float distanceThreshold;

struct Vector3 {
    float x, y, z;
};

float __cdecl distanceValue(const Vector3* a, const Vector3* b)
{
    float x = a->x - b->x;
    float y = a->y - b->y;
    float z = a->z - b->z;
    float distance = (float)sqrt(x * x + y * y + z * z);
    float result = defaultValue;
    if (distance > distanceThreshold)
        result = distance * distanceScale;
    return result;
}
