// from server: 84% by colin
struct Vec3 {
    float x;
    float y;
    float z;
};

struct S {
    void* field0;
    void* field4;
    void method(Vec3* out, Vec3* in);
};

extern float g_008bd12c;
extern float g_008bd130;
extern float g_008bd134;
extern int g_008bd138;

extern void func_005e10b0(S* self, Vec3* v);
extern bool func_005e1250(S* self, Vec3* v);
extern void func_005e1530(S* self, Vec3* out, Vec3* in);

void S::method(Vec3* out, Vec3* in) {
    Vec3 tmp;
    tmp.x = 0.0f;
    tmp.y = 0.0f;
    tmp.z = 0.0f;

    if (this->field4 == 0) {
        if (!(g_008bd138 & 1)) {
            g_008bd138 |= 1;
            g_008bd12c = 0.0f;
            g_008bd130 = 0.0f;
            g_008bd134 = 0.0f;
        }
        out->x = g_008bd12c;
        out->y = g_008bd130;
        out->z = g_008bd134;
        return;
    }

    if (!(g_008bd138 & 1)) {
        g_008bd138 |= 1;
        g_008bd12c = 0.0f;
        g_008bd130 = 0.0f;
        g_008bd134 = 0.0f;
    }

    if (!(g_008bd12c == in->x && g_008bd130 == in->y && g_008bd134 == in->z)) {
        func_005e10b0(this, in);
        tmp.x = in->x + tmp.x;
        tmp.y = in->y + tmp.y;
        tmp.z = in->z + tmp.z;
    }

    if (func_005e1250(this, in)) {
        func_005e1530(this, &tmp, in);
    }

    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
}
