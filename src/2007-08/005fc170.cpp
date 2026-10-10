// from server: 50% by colin
// roc 2007-08 005fc170  unit: RBX::RocketTool  size: 391 bytes

struct Vector3 {
    float x, y, z;
};

struct CFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float x, y, z;
};

struct Instance {
    char pad[0x24];
    Vector3 pos;
};

struct Tool {
    char pad[0x24];
    Vector3 pos;
    float f30, f34, f38, f3c, f40, f44;
};

extern float g_7a32e8;
extern float g_7a836c;
extern float g_8c7f8c;
extern float g_8c7f90;
extern float g_8c7f94;
extern float g_8c7f98;
extern float g_8c7f9c;
extern float g_8c7fa0;
extern unsigned char g_8c7fa4;

extern "C" int __cdecl sub_5e3dc0(int, int, Vector3*);
extern "C" void __cdecl sub_475050(CFrame*, int);
extern "C" void __cdecl sub_51df60(CFrame*, Vector3*);
extern "C" void __cdecl sub_4a5d30(int);
extern "C" void __cdecl sub_509640();
extern "C" void __cdecl sub_5095d0();

struct RocketTool {
    Tool* method(int a, int b, int c);
};

Tool* RocketTool::method(int a, int b, int c) {
    float vx = 0.0f, vy = 0.0f, vz = 0.0f;
    Vector3 v;
    v.x = 0.0f;
    v.y = 0.0f;
    v.z = 0.0f;
    int r = sub_5e3dc0(a, 0, &v);
    Tool* self = (Tool*)b;
    Vector3 dir;
    if (r != 0) {
        dir.x = v.x - self->pos.x;
        dir.y = v.y - self->pos.y;
        dir.z = v.z - self->pos.z;
        float len = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
        float inv = 1.0f / len;
        dir.x *= inv;
        dir.y *= inv;
        dir.z *= inv;
    } else {
        float f = g_7a32e8;
        CFrame cf;
        sub_509640();
        dir.x = cf.r00 * f;
        dir.y = cf.r10 * f;
        dir.z = cf.r20 * f;
    }
    CFrame out;
    sub_475050(&out, 0);
    sub_51df60(&out, &dir);
    float s = g_7a836c;
    Vector3 p;
    p.x = out.x * s + self->pos.x;
    p.y = out.y * s + self->pos.y;
    p.z = out.z * s + self->pos.z;
    if ((g_8c7fa4 & 1) == 0) {
        g_8c7fa4 |= 1;
        sub_4a5d30(0x8c7f8c);
    }
    sub_5095d0();
    self->pos.x = p.x;
    self->pos.y = p.y;
    self->pos.z = p.z;
    self->f30 = g_8c7f8c;
    self->f34 = g_8c7f90;
    self->f38 = g_8c7f94;
    self->f3c = g_8c7f98;
    self->f40 = g_8c7f9c;
    self->f44 = g_8c7fa0;
    return self;
}
