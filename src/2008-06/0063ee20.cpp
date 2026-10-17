// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" double __cdecl floor(double);

struct Vec3 { float x, y, z; };

struct RefCounted {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    volatile long refCount;
    volatile long refCount2;
};

struct Obj24 {
    char pad[4];
    void* ptr;
};

struct Helper20 {
    void* get();
};

struct ResizeTool {
    char pad0[0x20];
    Helper20 helper20;
    Obj24* obj24;
    int field2c;
    Vec3 vec30;
    int field40;
    void capturedDrag(int axisDelta);
    void doResize(int arg);
};

extern "C" void* __cdecl sub_5cab00(void* result, Helper20* self);
extern "C" void __cdecl sub_518830(void* result, void* a, void* b);
extern "C" void* __cdecl sub_615d00(void* self, void* result, void* input);
extern "C" void __cdecl sub_5df270(void* result, void* a, void* b);

void ResizeTool::doResize(int arg)
{
    if (!obj24) return;
    if (!obj24->ptr) return;

    void* tmp;
    sub_5cab00(&tmp, &helper20);
    void* p = *(void**)tmp;
    int off = *(int*)((char*)p + 0x134);
    char* base = (char*)p + 0x134 + off;
    void** vt = *(void***)base;
    void* vres;
    ((void (__thiscall*)(void*, void*))vt[0])(base, &vres);

    float* farr = (float*)vres;

    int ecx = field2c;
    int q = ecx / 3;
    int rem = ecx - q * 3;
    int idx = rem;

    float a = farr[idx];
    float b = farr[idx + 3];
    float c = farr[idx + 6];

    int m = 1 - 2 * q;
    float fm = (float)m;

    Vec3 scaled;
    scaled.x = a * fm;
    scaled.y = b * fm;
    scaled.z = c * fm;

    RefCounted* rc = (RefCounted*)tmp;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            rc->vf1();
            if (_InterlockedExchangeAdd(&rc->refCount2, -1) == 1) {
                rc->vf2();
            }
        }
    }

    Vec3 zero;
    sub_518830(&zero, &vec30, &scaled);

    void* r2;
    sub_615d00(this, &r2, &zero);

    Vec3 r3;
    sub_5df270(&r3, &r2, &zero);

    float dx = r3.x - vec30.x;
    float dy = r3.y - vec30.y;
    float dz = r3.z - vec30.z;

    float dot = dx * scaled.x + dy * scaled.y + dz * scaled.z;
    float val = dot - (float)field40;

    if (val >= 1.0f) {
        int delta = (int)floor((double)val);
        field40 += delta;
        capturedDrag(delta);
    } else if (val <= -1.0f) {
        int delta = -(int)floor((double)(-val));
        field40 += delta;
        capturedDrag(delta);
    }
}
