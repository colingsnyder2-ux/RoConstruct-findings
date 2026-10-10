// from server: 44% by colin
struct Vec3 {
    float x, y, z;
};

struct Mat3 {
    float m[9];
};

struct Accoutrement {
    char pad0[0x100];
    char pad1[0x100];
    void updateWeld(const Vec3& v);
};

extern "C" {
    void __stdcall func_005095d0(void* out, void* in);
    void __stdcall func_00509640(void* self, void* out, int idx);
    void __stdcall func_00509660(void* self, void* out, int idx);
    float __stdcall func_0050f3a0(float x);
    void __stdcall func_00582950(void* self, void* out);
}

extern float g_79fe50;

void Accoutrement::updateWeld(const Vec3& v)
{
    char buf[0x6c];
    Vec3* pv = (Vec3*)((char*)this + 0x100);
    func_005095d0(buf + 0x44, pv);
    float a = *(float*)((char*)pv + 0x24);
    float b = *(float*)((char*)pv + 0x28);
    float c = *(float*)((char*)pv + 0x2c);
    *(float*)(buf + 0x68) = a;
    *(float*)(buf + 0x6c) = b;
    *(float*)(buf + 0x70) = c;
    func_00509640(buf + 0x44, buf + 0x38, 0);
    func_00509640(buf + 0x44, buf + 0x2c, 1);
    Vec3* p = *(Vec3**)(buf + 0x74);
    float nx = p->x;
    float ny = p->y;
    float nz = p->z;
    float len = nx*nx + ny*ny + nz*nz;
    float inv = 1.0f / func_0050f3a0(len);
    float ux = -nx * inv;
    float uy = -ny * inv;
    float uz = -nz * inv;
    *(float*)(buf + 0x18) = ux;
    *(float*)(buf + 0x1c) = uy;
    *(float*)(buf + 0x20) = uz;
    float vx = *(float*)(buf + 0x34);
    float vy = *(float*)(buf + 0x38);
    float vz = *(float*)(buf + 0x30);
    float r0 = vy * uz - vz * uy;
    float r1 = vz * ux - vx * uz;
    float r2 = vx * uy - vy * ux;
    *(float*)(buf + 0x0c) = r0;
    *(float*)(buf + 0x10) = r1;
    *(float*)(buf + 0x14) = r2;
    float s = g_79fe50;
    func_0050f3a0(s);
    float q0 = r1 * uz - r2 * uy;
    float q1 = r2 * ux - r0 * uz;
    float q2 = r0 * uy - r1 * ux;
    *(float*)(buf + 0x24) = q0;
    *(float*)(buf + 0x28) = q1;
    *(float*)(buf + 0x2c) = q2;
    float s2 = g_79fe50;
    func_0050f3a0(s2);
    func_00509660(buf + 0x44, buf + 0x08, 0);
    func_00509660(buf + 0x44, buf + 0x20, 1);
    func_00509660(buf + 0x44, buf + 0x14, 2);
    func_00582950(this, buf + 0x44);
}
