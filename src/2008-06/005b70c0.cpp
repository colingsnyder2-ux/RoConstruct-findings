// from server: 56% by colin
struct Vector3
{
    float x;
    float y;
    float z;
};

extern "C" bool __cdecl isNan(float value);
extern "C" bool __cdecl isNanVector(const Vector3* value);
extern "C" Vector3* __cdecl makeVector(Vector3* result, float a, float b);

extern float g_float_826de0;
extern float g_float_837604;

struct SoundService
{
    bool __cdecl computeListener(Vector3* out);
};

bool SoundService::computeListener(Vector3* out)
{
    Vector3 v;
    v.x = out->x;
    v.y = out->y;
    v.z = out->z;

    if (isNan(v.x))
        v.x = 0.0f;
    if (isNan(v.y))
        v.y = 0.0f;
    if (isNan(v.z))
        v.z = 0.0f;

    if (isNanVector(&v))
        return false;

    Vector3 tmp;
    makeVector(&tmp, g_float_837604, g_float_826de0);

    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
    return true;
}
