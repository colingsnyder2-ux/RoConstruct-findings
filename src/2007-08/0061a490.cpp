// from server: 70% by colin
struct Vector3 {
    float x, y, z;
};

struct ContactConnector {
    void* vtable;
    int pad;
    Vector3 field_8;
    Vector3* computeNormal(Vector3* out, Vector3* arg);
};

extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern int g_8bd138;

Vector3* ContactConnector::computeNormal(Vector3* out, Vector3* arg)
{
    Vector3* src;
    void* p = *(void**)(*(char**)this + 0x1c);
    if (p) {
        src = ((Vector3* (__thiscall*)(void*))0x624d70)(p);
    } else {
        if (!(g_8bd138 & 1)) {
            g_8bd138 |= 1;
            g_8bd12c = 0.0f;
            g_8bd130 = 0.0f;
            g_8bd134 = 0.0f;
        }
        src = (Vector3*)&g_8bd12c;
    }

    Vector3 neg;
    neg.x = -src->x;
    neg.y = -src->y;
    neg.z = -src->z;

    return this->computeNormal(out, &neg);
}
