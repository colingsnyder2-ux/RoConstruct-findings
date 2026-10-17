// from server: 38% by colin
struct Vector3 {
    float x, y, z;
};

struct Ray {
    void* vtable;
    float originX, originY, originZ;
    float dirX, dirY, dirZ;
    Ray();
};

struct GCamera {
    float m[9];
    GCamera();
    GCamera(const GCamera&);
};

struct Humanoid;

struct Climbing {
    char pad0[8];
    Humanoid* humanoid;
    bool onStepImpl(float dt);
};

void* sub_5d9160(void* self);
bool sub_644a30(Climbing* self, float dt);
void sub_599360(void* self);
void sub_5187f0(void* self, Vector3* out);
int sub_6449e0(void* self);
Vector3* sub_5149b0();
void sub_510a30(Ray* self);
void sub_62dc10(Vector3* out, void* arg);
GCamera* sub_513e20();
void sub_513220(GCamera* self, GCamera* src);
Vector3* sub_5148e0();
Vector3* sub_5148b0();
void sub_518830(Vector3* a, Vector3* b, Vector3* c);
Vector3* sub_514940();
void* sub_57d210(void* self, Vector3* a, float f1, float f2, int i);
void sub_6773f0(void* a, void* b);

extern "C" float sqrtf(float);

extern float g_81c434;
extern float g_84ac8c;
extern float g_8378b8;
extern float g_8288b8;
extern float g_84ac88;
extern float g_81ccbc;
extern float g_8249f8;
extern void* g_8282c4;

bool Climbing::onStepImpl(float dt)
{
    void* obj = sub_5d9160(this->humanoid);
    if (!obj)
        return false;
    if (!sub_644a30(this, dt))
        return false;

    sub_599360(obj);

    Vector3 v28;
    sub_5187f0((char*)obj + 0x94, &v28);

    int r = sub_6449e0(this->humanoid);

    float f18 = 0.0f;
    float f44 = 0.0f;
    int i58 = r;
    bool b13 = true;
    bool bl = false;

    Vector3* pv = sub_5149b0();
    float f1c = pv->x;
    float f20 = pv->y;
    float f24 = pv->z;

    int i18 = 1;

    float f60 = v28.x * g_81c434;
    float f5c = v28.y * g_81c434;
    float f54 = v28.z * g_81c434;

    for (; i18 < 0x12; i18++) {
        float f38 = (float)i18 * g_84ac8c;
        float fa4 = f38 - g_8378b8;

        Ray ray;
        sub_510a30(&ray);

        float f40 = *(float*)((char*)obj + 0x94 + 0x24);
        float f50 = *(float*)((char*)obj + 0x94 + 0x28) + fa4;
        float f58 = *(float*)((char*)obj + 0x94 + 0x2c);

        Vector3 dir;
        dir.x = f60;
        dir.y = f5c;
        dir.z = f54;

        Vector3 origin;
        origin.x = f40;
        origin.y = f50;
        origin.z = f58;

        Vector3 hit;
        sub_62dc10(&hit, *(void**)((char*)this->humanoid + 0x104));

        float dx = hit.x - origin.x;
        float dy = hit.y - origin.y;
        float dz = hit.z - origin.z;
        float dist = dx*dx + dy*dy + dz*dz;
        dist = sqrtf(dist);

        if (dist < g_8288b8) {
            if (b13) {
                b13 = false;
                f18 = f38;
                bl = true;
                Vector3* p = sub_5148e0();
                f1c = p->x;
                f20 = p->y;
                f24 = p->z;
            }
        } else {
            if (bl) {
                bl = false;
                f44 = f38 - f18;
                Vector3* p = sub_5148b0();
                f1c = p->x;
                f20 = p->y;
                f24 = p->z;
            }
        }

        if (this->humanoid) {
            GCamera* cam = sub_513e20();
            GCamera local;
            sub_513220(&local, cam);

            Vector3 a;
            a.x = *(float*)((char*)obj + 0x94 + 0x24);
            a.y = *(float*)((char*)obj + 0x94 + 0x28);
            a.z = *(float*)((char*)obj + 0x94 + 0x2c);

            Vector3 b;
            b.x = hit.x - a.x;
            b.y = hit.y - a.y;
            b.z = hit.z - a.z;

            Vector3 c;
            c.x = f1c - a.x;
            c.y = f20 - a.y;
            c.z = f24 - a.z;

            Vector3 d;
            sub_518830(&d, &b, &c);

            Vector3 e;
            e.x = d.x;
            e.y = d.y;
            e.z = d.z;

            Vector3 f;
            f.x = f1c;
            f.y = f20;
            f.z = 1.0f;

            void** vt = *(void***)this->humanoid;
            void* fn = vt[21];
            ((void (__thiscall*)(void*, Vector3*, Vector3*, Vector3*))fn)(this->humanoid, &e, &f, &d);
        }
    }

    if (g_84ac88 > f18) {
        if (f44 >= 0.0f && f44 <= 0.0f) {
            return false;
        }
        if (this->humanoid) {
            Vector3 pos;
            pos.x = *(float*)((char*)obj + 0x94 + 0x24);
            pos.y = *(float*)((char*)obj + 0x94 + 0x28) + g_81ccbc;
            pos.z = *(float*)((char*)obj + 0x94 + 0x2c);

            void* p = sub_514940();
            void* q = sub_57d210(&pos, (Vector3*)p, 1.0f, g_8249f8, 1);
            sub_6773f0(q, this->humanoid);
        }
        return true;
    }
    return false;
}
