// from server: 22% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vector3 {
    float x, y, z;
};

struct Vector2 {
    float x, y;
};

struct Matrix3 {
    float m[9];
};

struct CoordinateFrame {
    Vector3 translation;
    Matrix3 rotation;
};

struct Ray {
    Vector3 origin;
    Vector3 direction;
};

struct GCamera {
    char pad[0x18];
    float fov;
    char pad2[0x9c - 0x1c];
    Vector3 viewport;
};

struct RefCounted {
    void* vptr;
    volatile long refcount1;
    volatile long refcount2;
};

struct GroupDragTool {
    char pad[0x14];
    GCamera* camera;
    float f18;
    float f1c;
    float f20;
    int i24;
    int i28;
    Vector3 v2c;
    char pad3[0x54 - 0x38];
    Vector3 v54;
    int i60;
    void* ptr64;

    void func();
};

extern "C" void* __cdecl sub_5E82C0(void*);
extern "C" void __cdecl sub_513220(void*, void*);
extern "C" void __cdecl sub_5DE2F0(void*, void*, void*);
extern "C" void* __cdecl sub_513510(void*, void*, void*);
extern "C" void __cdecl sub_513350(void*, void*, void*);
extern "C" void __cdecl sub_5DF0A0(void*);
extern "C" void __cdecl sub_5E8200(void*, void*);
extern "C" void* __cdecl sub_5DE560(void*, void*);
extern "C" void __cdecl sub_518830(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_518970(void*, void*, void*);
extern "C" void __cdecl sub_60FE40(void*, void*, void*);
extern "C" void __cdecl sub_5DF380(void*, void*, void*);
extern "C" void __cdecl sub_4A6100(void*, void*, void*);
extern "C" void* __cdecl sub_5CAB00(void*);
extern "C" void __cdecl sub_59D8A0(void*, void*);
extern "C" void __cdecl sub_66D710(void*);

extern float g_819bac;
extern float g_8163a4;

void GroupDragTool::func()
{
    void* a = sub_5E82C0(*(void**)((char*)this + 0x24));
    int i28 = *(int*)((char*)this + 0x28);
    int q = i28 / 3;
    int r = i28 - q * 3;
    float* arr = (float*)a;
    float f0 = arr[r];
    float f1 = arr[r + 3];
    int t = 1 - q * 2;
    float ft = (float)t;
    float v14 = ft * f0;
    float v70 = ft * f1;
    float v60 = ft * arr[r + 6];

    void* cam = sub_5E82C0(*(void**)((char*)this + 0x14));

    char buf1[0x90];
    sub_513220(buf1, cam);

    char buf2[0x90];
    sub_5DE2F0(buf2, buf1, a);

    char buf3[0x90];
    char buf4[0x90];
    void* m = sub_513510(buf3, buf4, buf2);
    sub_513350(m, buf3, buf4);

    char buf5[0x90];
    void* m2 = sub_513510(buf5, buf3, buf4);
    sub_513350(m2, buf5, a);

    char buf6[0x90];
    sub_5DF0A0(buf6);

    void* cam2 = sub_5E82C0(*(void**)((char*)this + 0x14));
    char buf7[0x90];
    sub_513220(buf7, buf6);

    float* p = (float*)((char*)cam2 + 0x24);
    Vector3 vv;
    vv.x = p[0];
    vv.y = p[1];
    vv.z = p[2];

    Vector3 out;
    sub_5E8200(*(void**)((char*)this + 0x14), &out);

    float n14 = -v14;
    float n70 = -v70;
    float n60 = -v60;

    void* res = sub_5DE560(&n14, &n70);
    *(int*)((char*)this + 0x60) = (int)res;

    float ax = vv.x * *(float*)((char*)this + 0x18);
    float ay = vv.y * *(float*)((char*)this + 0x1c);
    float az = vv.z * *(float*)((char*)this + 0x20);
    float bx = out.x * *(float*)((char*)this + 0x18);
    float by = out.y * *(float*)((char*)this + 0x1c);
    float bz = out.z * *(float*)((char*)this + 0x20);

    Vector3 v1, v2, v3;
    v1.x = ax + ay + az + *(float*)((char*)this + 0x54);
    v1.y = bx + by + bz + *(float*)((char*)this + 0x58);
    v1.z = 0;

    sub_518830(&v1, &v2, &v3, 0, 0);

    char buf8[0x90];
    char buf9[0x90];
    sub_518970(&buf8, &buf9, &v1);

    GCamera* c = *(GCamera**)((char*)this + 0x14);
    float* vp = (float*)((char*)c + 0x9c);
    float sx = vp[0] * g_819bac;
    float sy = vp[1] * g_819bac;
    float sz = vp[2] * g_819bac;

    float nx = -sx;
    float ny = -sy;
    float nz = -sz;

    int i60 = *(int*)((char*)this + 0x60);
    float m1[6];
    m1[0] = nx;
    m1[1] = ny;
    m1[2] = nz;
    m1[3] = sx;
    m1[4] = sy;
    m1[5] = sz;

    sub_60FE40(&m1, &buf8, (void*)i60);

    void* p64 = *(void**)((char*)this + 0x64);
    char buf10[0x90];
    sub_5DF380(&buf10, &buf8, p64);

    float g = g_8163a4;
    float a1 = buf10[0] * g;
    float a2 = buf10[1] * g;
    float a3 = buf10[2] * g;
    float b1 = buf10[3] * g;
    float b2 = buf10[4] * g;
    float b3 = buf10[5] * g;

    float c1[3], c2[3];
    c1[0] = a1; c1[1] = a2; c1[2] = a3;
    c2[0] = b1; c2[1] = b2; c2[2] = b3;

    sub_4A6100(&c1, &c2, &buf10);

    float r1 = c1[0] * buf10[0] + c1[1] * buf10[1] + c1[2] * buf10[2];
    float r2 = c2[0] * buf10[0] + c2[1] * buf10[1] + c2[2] * buf10[2];

    float f1v = r1 + v1.x;
    float f2v = r2 + v1.y;

    float f3v = v1.z * buf10[0] + v1.z * buf10[1] + v1.z * buf10[2];

    float f4v = f1v - *(float*)((char*)this + 0x2c);
    float f5v = f2v - *(float*)((char*)this + 0x30);
    float f6v = f3v - *(float*)((char*)this + 0x34);

    Vector3 final;
    final.x = f4v;
    final.y = f5v;
    final.z = f6v;

    void* rr = sub_5CAB00(&final);
    void* obj = *(void**)rr;
    sub_59D8A0(obj, &final);

    void* p64b = *(void**)((char*)this + 0x64);
    if (p64b) {
        RefCounted* rc = (RefCounted*)p64b;
        if (_InterlockedExchangeAdd(&rc->refcount1, -1) == 1) {
            void** vt = *(void***)rc;
            ((void(__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->refcount2, -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void(__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }

    sub_66D710(this);
}
