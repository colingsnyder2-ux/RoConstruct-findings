// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct DataSource {
    const void* get();
};

struct Obj84 {
    char pad[0x84];
    float x;
    float y;
    float z;
};

struct Obj28 {
    char pad[0x28];
    void* p;
};

struct Obj10b {
    char pad[0x10];
    Obj28* p;
};

struct Obj10c {
    char pad[0x10];
    Obj84* p;
};

extern "C" void* __cdecl sub_5cab00(void* out, void* in);
extern "C" void __cdecl sub_599360(void* p);
extern "C" void __cdecl sub_65ff10(void* p);
extern "C" void* __cdecl sub_4a6100(void* a, void* b, void* c);
extern "C" void __cdecl sub_658d20(void* p);

struct BodyPosition {
    void step(float dt, int a, int b);
};

void BodyPosition::step(float dt, int a, int b)
{
    char buf[0x20];
    void* obj;
    void* edi;
    void* esi;
    float fx, fy, fz;
    float qx, qy, qz;
    float rx, ry, rz;
    float v;

    sub_5cab00(buf + 0xc, (char*)this + 0x10);
    esi = *(void**)(buf + 0x10);
    obj = *(void**)buf;
    edi = *(void**)((char*)obj + 0x2c8);

    if (esi) {
        long old = _InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1);
        if (old == 1) {
            void** vt = *(void***)esi;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(esi);
            old = _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1);
            if (old == 1) {
                void** vt2 = *(void***)esi;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(esi);
            }
        }
    }

    sub_599360(edi);

    fx = *(float*)((char*)this + 0x2c) - *(float*)((char*)edi + 0xb8);
    fy = *(float*)((char*)this + 0x30) - *(float*)((char*)edi + 0xbc);
    fz = *(float*)((char*)this + 0x34) - *(float*)((char*)edi + 0xc0);

    float t = *(float*)((char*)this + 0x18);
    fx *= t;
    fy *= t;
    fz *= t;

    sub_599360(edi);

    v = -*(float*)((char*)this + 0x1c);
    qx = *(float*)((char*)edi + 0xc4) * v;
    qy = *(float*)((char*)edi + 0xc8) * v;
    qz = *(float*)((char*)edi + 0xcc) * v;

    rx = qx + fx;
    ry = qy + fy;
    rz = qz + fz;

    Obj10b* o10 = *(Obj10b**)((char*)edi + 0x10);
    Obj28* o28 = o10->p;
    void* ecx = o28->p;

    float scale;
    if (ecx) {
        sub_65ff10(ecx);
        scale = 0.0f;
    } else {
        scale = *(float*)((char*)o28 + 0x8c);
    }

    float sx = rx * scale;
    float sy = ry * scale;
    float sz = rz * scale;

    *(float*)((char*)this + 0x38) = sx;
    *(float*)((char*)this + 0x3c) = sy;
    *(float*)((char*)this + 0x40) = sz;

    float nx = -*(float*)((char*)this + 0x20);
    float ny = -*(float*)((char*)this + 0x24);
    float nz = -*(float*)((char*)this + 0x28);

    float* res = (float*)sub_4a6100(&nx, &sx, &sy);
    *(float*)((char*)this + 0x38) = res[0];
    *(float*)((char*)this + 0x3c) = res[1];
    *(float*)((char*)this + 0x40) = res[2];

    Obj10c* o10c = *(Obj10c**)((char*)edi + 0x10);
    Obj84* o84 = o10c->p;
    if (o84) {
        if (*(char*)((char*)o84 + 8)) {
            sub_658d20(o84);
        }
        o84->x += *(float*)((char*)this + 0x38);
        o84->y += *(float*)((char*)this + 0x3c);
        o84->z += *(float*)((char*)this + 0x40);
    }
}
