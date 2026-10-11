// from server: 28% by atomic.potato
// roc 2009-06 0066afa0  unit: RBX::Humanoid  size: 740 bytes

struct Vtbl {
    void* pad0[4];
    void* fn10;
    void* pad1[8];
    void* fn2c;
    void* pad2[1];
    void* fn34;
};

struct Obj {
    Vtbl* vt;
};

struct Vec3 { float x, y, z; };

struct Svc {
    char pad[0x44];
    Svc* next;
};

extern "C" {
    Svc* __cdecl func_004cab80(Svc* p);
    void __cdecl func_0052db40();
    void __cdecl func_00572eb0();
    void __cdecl func_005734b0();
    void __cdecl func_00575590();
    void __cdecl func_005763d0();
    void __cdecl func_00576510();
    void __cdecl func_00576580();
    void __cdecl func_0065d4b0();
    void __cdecl func_006666b0();
    void __cdecl func_00674e10();
    void __cdecl func_00677060();
}

extern float g_8ba73c;
extern float g_8bad4c;
extern float g_8be138;
extern float g_8befa0;
extern float g_8c5d38;
extern float g_8e305c;

struct Humanoid {
    char pad0[0x48];
    int field48;
    char pad1[0x128 - 0x4c];
    float field128;
    char pad2[0x1dc - 0x12c];
    float field1dc;
    float field1e0;

    void func(Obj* a, Obj* b);
};

void Humanoid::func(Obj* a, Obj* b)
{
    Svc* svc = func_004cab80((Svc*)this);
    if (!svc) return;

    Vec3 v38;
    func_0065d4b0();
    v38.x = 0.0f;
    v38.y = 0.0f;
    v38.z = 0.0f;

    void* vt = a->vt;
    void* fn10 = ((void**)vt)[4];
    Vec3 v14;
    ((void (__thiscall*)(Obj*, Vec3*))fn10)(a, &v14);

    v38.y += g_8befa0;

    Vec3 v3c;
    func_005734b0();
    func_00572eb0();

    float dx = 0.0f;
    float dy = 0.0f;
    float dz = 0.0f;
    float dist = 0.0f;
    dx = dx * dx + dy * dy + dz * dz;
    dist = 0.0f;

    if (dist <= g_8ba73c) return;
    if (g_8e305c <= this->field128) return;

    int ebx = 8;
    if (g_8c5d38 > dist) {
        ebx = 0xc;
    } else if (g_8be138 == dist) {
        ebx = 0xa;
    }

    void* p = func_004cab80((Svc*)this);
    Vec3 v28;
    if (p) {
        func_00674e10();
    } else {
        func_00576580();
    }
    v28.x = 0.0f;
    v28.y = 0.0f;
    v28.z = 0.0f;

    func_00576510();
    Vec3 v44;
    v44.x = 0.0f;
    v44.y = 0.0f;
    v44.z = 0.0f;

    int ebp = this->field48;
    void* vt2 = b->vt;
    void* fn34 = ((void**)vt2)[13];

    Vec3 v50;
    v50.x = 0.0f;
    v50.y = 0.0f;
    v50.z = 0.0f;

    func_00575590();
    ((void (__thiscall*)(Obj*, void*, void*, void*))fn34)(b, &v50, (char*)this + ebp + 0x54, 0);

    int ecx4 = ebx * 4;
    float f = (float)ecx4;
    float g = g_8bad4c;
    f = f * g;

    int eax2 = ebx;
    int edx2 = eax2 >> 31;
    eax2 = eax2 - edx2;
    eax2 = eax2 >> 1;

    float f2 = (float)eax2;
    float f3 = 0.0f;
    float f4 = 0.0f;
    float f5 = 0.0f;
    float f6 = 0.0f;
    float f7 = 0.0f;
    float f8 = 0.0f;
    float f9 = 0.0f;

    func_00677060();

    Vec3 v18;
    v18.x = 0.0f;
    v18.y = 0.0f;
    v18.z = 0.0f;

    Vec3 v34;
    v34.x = 0.0f;
    v34.y = 0.0f;
    v34.z = 0.0f;

    func_0052db40();

    void* vt3 = b->vt;
    void* fn2c = ((void**)vt3)[11];
    ((void (__thiscall*)(Obj*, void*, void*))fn2c)(b, &v34, &v18);

    func_005763d0();

    Vec3 v14b;
    v14b.x = 0.0f;
    v14b.y = 0.0f;
    v14b.z = 0.0f;

    Vec3 v54;
    v54.x = 0.0f;
    v54.y = 0.0f;
    v54.z = 0.0f;

    Vec3 v44b;
    v44b.x = 0.0f;
    v44b.y = 0.0f;
    v44b.z = 0.0f;

    func_0052db40();

    void* vt4 = b->vt;
    void* fn2c2 = ((void**)vt4)[11];
    ((void (__thiscall*)(Obj*, void*, void*))fn2c2)(b, &v44b, &v14b);
}
