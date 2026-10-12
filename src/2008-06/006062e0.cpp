// from server: 19% by colin




struct Vector3 {
    float x, y, z;
};

extern "C" float __stdcall G3D_Vector3_dot(const Vector3* a, const Vector3* b, float* out);
extern "C" float __cdecl atan2f(float y, float x);

struct Connector {
    char pad0[0xc];
    void* a;
    void* b;
    void* c;
    void* d;
    int   count;
    float angle;
    void update(Vector3* outDir, float* outAngle, float* outDelta);
};

void Connector::update(Vector3* outDir, float* outAngle, float* outDelta)
{
    Vector3* pa = (Vector3*)a;
    Vector3* pb = (Vector3*)b;
    Vector3* pc = (Vector3*)c;
    Vector3* pd = (Vector3*)d;

    Vector3 v1;
    v1.x = pb->x - pa->x;
    v1.y = pb->y - pa->y;
    v1.z = pb->z - pa->z;

    float len1;
    G3D_Vector3_dot(&v1, &v1, &len1);

    Vector3 v2;
    v2.x = pc->x - pa->x;
    v2.y = pc->y - pa->y;
    v2.z = pc->z - pa->z;

    Vector3 v3;
    v3.x = pd->x - pa->x;
    v3.y = pd->y - pa->y;
    v3.z = pd->z - pa->z;

    float cross1x = v1.y * v2.z - v1.z * v2.y;
    float cross1y = v1.z * v2.x - v1.x * v2.z;
    float cross1z = v1.x * v2.y - v1.y * v2.x;

    float cross2x = v1.y * v3.z - v1.z * v3.y;
    float cross2y = v1.z * v3.x - v1.x * v3.z;
    float cross2z = v1.x * v3.y - v1.y * v3.x;

    float cross3x = v2.y * v3.z - v2.z * v3.y;
    float cross3y = v2.z * v3.x - v2.x * v3.z;
    float cross3z = v2.x * v3.y - v2.y * v3.x;

    float num = cross1x * cross3x + cross1y * cross3y + cross1z * cross3z;
    float den = cross1x * cross2x + cross1y * cross2y + cross1z * cross2z;

    float ang = atan2f(num, den);

    float oldAngle = angle;
    if (oldAngle < 0.0f) {
        if (oldAngle < -3.14159265358979323846f) {
            count--;
        }
    } else {
        if (oldAngle > 3.14159265358979323846f) {
            count++;
        }
    }

    float c = (float)count;
    float twoPi = 6.28318530717958647692f;
    float result = ang + c * twoPi;
    *outAngle = result;
    *outDelta = result - angle;
    angle = result;
}
