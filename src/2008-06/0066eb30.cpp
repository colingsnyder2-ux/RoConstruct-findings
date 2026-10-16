// from server: 81% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct GettingUp {
    Vector3 field0;
    Vector3 fieldC;
    void construct(const Vector3* v);
};

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern unsigned int g_96f050;

void GettingUp::construct(const Vector3* v)
{
    field0.x = v->x;
    field0.y = v->y;
    field0.z = v->z;
    if (!(g_96f050 & 1)) {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }
    fieldC.x = g_96f044;
    fieldC.y = g_96f048;
    fieldC.z = g_96f04c;
}
