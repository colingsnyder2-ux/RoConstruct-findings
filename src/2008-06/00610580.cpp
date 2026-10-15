// from server: 84% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector3
{
    float x, y, z;
};

extern const float half;
extern const float scaleY;
extern Vector3 adjustment;
extern unsigned int adjustmentInitialized;

extern void __cdecl transformVector(
    Vector3* result, const Vector3* value, const Vector3* scale);
extern bool __cdecl testVector(Vector3* result, void* context);
extern Vector3* __cdecl multiplyVector(
    Vector3* result, const Vector3* value, const Vector3* scale);

void __cdecl subdivideVector(
    Vector3* result,
    const Vector3* start,
    const Vector3* end,
    const Vector3* scale,
    void* context)
{
    transformVector(result, end, scale);
    if (!testVector(result, context))
        return;

    double x = (double)start->x + end->x;
    double y = (double)start->y + end->y;
    double z = (double)start->z + end->z;

    Vector3 average = {
        (float)(x * half),
        (float)(y * half),
        (float)(z * half)
    };

    if (!(adjustmentInitialized & 1))
    {
        adjustmentInitialized |= 1;
        adjustment.x = 1.0f;
        adjustment.y = scaleY;
        adjustment.z = 1.0f;
    }

    Vector3 midpoint;
    multiplyVector(&midpoint, &average, &adjustment);

    transformVector(result, &midpoint, scale);
    bool accepted = testVector(result, context);

    if ((double)end->x == (double)midpoint.x &&
        (double)end->y == (double)midpoint.y &&
        (double)end->z == (double)midpoint.z)
    {
        if (accepted)
            transformVector(result, start, scale);
    }
    else if (accepted)
    {
        subdivideVector(result, start, &midpoint, scale, context);
    }
    else
    {
        subdivideVector(result, &midpoint, end, scale, context);
    }
}
