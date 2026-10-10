// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

struct MegaDragger {
    char pad[0x84];
};

struct MouseCommand {
    char pad[0x14];
    void* mouse;
    char pad2[0x0c];
    void* part;
    void* part2;
    char pad3[0x34];
    void* workspace;
};

struct GroupDragTool : MouseCommand {
    char pad4[0x0c];
    Vector3 lastHit;
    bool update();
};

extern void __cdecl sub_5b5130(void* result, void* a, void* b);
extern void* __cdecl sub_60dc90(void* self, int idx);
extern void __cdecl sub_530100(void* self);
extern void __cdecl sub_5095d0(void* result, void* src);
extern void __cdecl sub_5ab230(void* result, void* a, void* b);
extern void* __cdecl sub_5fc7f0(void* self, void* out);
extern void __cdecl sub_577de0(void* self, void* out);

bool GroupDragTool::update() {
    volatile int zero = 0;
    char buf1[0x80];
    char buf2[0x80];
    Vector3 v1, v2;
    Vector3 diff;
    Matrix3 m1, m2;
    Vector3 out1, out2;
    Vector3 finalPos;
    Vector3 delta;
    void* ref;

    sub_5b5130(buf1, *(void**)((char*)this + 0x24), *(void**)((char*)this + 0x28));
    sub_5b5130(buf2, *(void**)((char*)this + 0x14), *(void**)((char*)this + 0x60));

    void* p1 = sub_60dc90(buf1, 0);
    v1.x = *(float*)p1;
    v1.y = *(float*)((char*)p1 + 4);
    v1.z = *(float*)((char*)p1 + 8);

    void* p2 = sub_60dc90(buf2, 0);
    v2.x = *(float*)p2;
    v2.y = *(float*)((char*)p2 + 4);
    v2.z = *(float*)((char*)p2 + 8);

    void* obj = *(void**)((char*)this + 0x24);
    MegaDragger* md = *(MegaDragger**)((char*)obj + 0x64);
    sub_530100(md);
    sub_5095d0(&m1, (char*)md + 0x84);

    diff.x = v1.x - v2.x;
    diff.y = v1.y - v2.y;
    diff.z = v1.z - v2.z;

    out1.x = m1.m[0]*diff.x + m1.m[3]*diff.y + m1.m[6]*diff.z;
    out1.y = m1.m[1]*diff.x + m1.m[4]*diff.y + m1.m[7]*diff.z;
    out1.z = m1.m[2]*diff.x + m1.m[5]*diff.y + m1.m[8]*diff.z;

    sub_5ab230(&out2, &out1, &v2);

    void* obj2 = *(void**)((char*)this + 0x14);
    MegaDragger* md2 = *(MegaDragger**)((char*)obj2 + 0x64);
    sub_530100(md2);
    sub_5095d0(&m2, (char*)md2 + 0x84);

    finalPos.x = m2.m[0]*out2.x + m2.m[3]*out2.y + m2.m[6]*out2.z + v2.x;
    finalPos.y = m2.m[1]*out2.x + m2.m[4]*out2.y + m2.m[7]*out2.z + v2.y;
    finalPos.z = m2.m[2]*out2.x + m2.m[5]*out2.y + m2.m[8]*out2.z + v2.z;

    delta.x = finalPos.x - v1.x;
    delta.y = finalPos.y - v1.y;
    delta.z = finalPos.z - v1.z;

    sub_530100(md2);
    sub_5095d0(&m2, (char*)md2 + 0x84);

    Vector3 worldPos;
    worldPos.x = *(float*)((char*)md2 + 0x84 + 0x24) + delta.x;
    worldPos.y = *(float*)((char*)md2 + 0x84 + 0x28) + delta.y;
    worldPos.z = *(float*)((char*)md2 + 0x84 + 0x2c) + delta.z;

    void* result = sub_5fc7f0(this, &worldPos);
    void* inner = *(void**)result;
    sub_577de0(inner, &ref);

    if (ref) {
        volatile long* rc = (volatile long*)((char*)ref + 4);
        if (_InterlockedExchangeAdd(rc, -1) == 1) {
            void** vt = *(void***)ref;
            ((void(__stdcall*)(void*))vt[1])(ref);
            volatile long* rc2 = (volatile long*)((char*)ref + 8);
            if (_InterlockedExchangeAdd(rc2, -1) == 1) {
                void** vt2 = *(void***)ref;
                ((void(__stdcall*)(void*))vt2[2])(ref);
            }
        }
    }

    if (lastHit.x == finalPos.x && lastHit.y == finalPos.y && lastHit.z == finalPos.z) {
        return false;
    }

    lastHit = finalPos;
    return true;
}
