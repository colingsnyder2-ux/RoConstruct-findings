// from server: 49% by colin
struct Vec3 {
    float x, y, z;
};

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct Workspace {
    char pad0[0x3f8];
    bool flag3f8;
    void method(bool);
};

extern "C" double __cdecl acos(double);
extern const float tolerance;
extern "C" double __cdecl sqrt(double);

ServiceProvider* func_00491e50(Instance* p);
ServiceProvider* func_005a32e0(Instance* p);
void func_005de0f0(float* p);

struct Humanoid {
    char pad0[0x24];
    Vec3 pos;
    char pad1[0x3c - 0x30];
    bool flag3c;
    void method(Vec3* other, bool b);
};

void Humanoid::method(Vec3* other, bool b)
{
    float dx = pos.x - other->x;
    float dy = pos.y - other->y;
    float dz = pos.z - other->z;
    float dist = (float)sqrt(dx*dy + dx*dy + dz*dz);
    flag3c = (dist < tolerance) ? true : false;

    ServiceProvider* sp = func_00491e50((Instance*)this);
    if (sp) {
        ServiceProvider* ws = func_005a32e0((Instance*)sp);
        if (ws) {
            ((Workspace*)ws)->method(flag3c);
        }
    }

    if (flag3c) {
        float ax = other->x - pos.x;
        float az = other->z - pos.z;
        float len = (float)sqrt(ax*ax + az*az);
        float inv = 1.0f / len;
        float vx = ax * inv;
        float vz = az * inv;
        func_005de0f0(&vx);
    }

    bool c = !flag3c;
    void (Humanoid::*fn)(bool) = 0;
    (this->*(*(void (Humanoid::**)(bool))((char*)this + 0x2c)))(c);
}
