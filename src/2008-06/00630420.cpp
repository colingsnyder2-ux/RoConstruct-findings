// from server: 37% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct Inner {
    char pad0[0x10];
    void* ptr10;
    char pad14[0x28 - 0x14];
    void* ptr28;
    char pad2c[0x2c8 - 0x2c];
    void* ptr2c8;
};

struct Obj {
    char pad0[0x10];
    void* ptr10;
    char pad14[0x18 - 0x14];
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
};

struct Vec3 {
    float x, y, z;
};

struct Big {
    char pad0[0x10];
    void* ptr10;
    char pad14[0xd0 - 0x14];
    float fd0;
    float fd4;
    float fd8;
};

extern "C" void (__thiscall *sub_5cab00)(void* out, void* in);
extern "C" void __stdcall sub_599360(void* p);
extern "C" float __stdcall sub_65ff10(void* p);
extern "C" void __stdcall sub_658d20(void* p);
extern "C" Vec3* __stdcall sub_4a6100(Vec3* out, Vec3* a, Vec3* b);

struct BodyAngularVelocity {
    void method(int a, int b);
};

void BodyAngularVelocity::method(int a, int b)
{
    void* local;
    void* esi;
    void* ebx;
    float f14, f18, f1c;
    float scale;
    Vec3 tmp;
    Vec3 neg;
    Vec3 result;
    Inner* inner;
    Big* big;
    Obj* self;
    RefCounted* rc;
    void* obj2c8;
    void* p2c;
    float f;

    self = (Obj*)this;
    sub_5cab00((char*)this + 0x10, &local);
    esi = local;
    ebx = *(void**)(*(char**)&local);
    obj2c8 = *(void**)((char*)ebx + 0x2c8);

    if (esi != 0) {
        rc = (RefCounted*)esi;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** vt = *(void***)esi;
            ((void (__thiscall*)(void*))vt[1])(esi);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                void** vt2 = *(void***)esi;
                ((void (__thiscall*)(void*))vt2[2])(esi);
            }
        }
    }

    sub_599360(obj2c8);

    big = (Big*)obj2c8;
    f14 = self->f28 - big->fd0;
    f18 = self->f2c - big->fd4;
    f1c = self->f30 - big->fd8;

    inner = (Inner*)big->ptr10;
    if (inner->ptr28 != 0) {
        scale = sub_65ff10(inner->ptr28);
    } else {
        scale = *(float*)((char*)inner + 0x8c);
    }

    f14 *= scale;
    f18 *= scale;
    f1c *= scale;

    tmp.x = f14;
    tmp.y = f18;
    tmp.z = f1c;

    neg.x = -self->f18;
    neg.y = -self->f1c;
    neg.z = -self->f20;

    sub_4a6100(&result, &neg, &tmp);
    tmp = result;

    p2c = *(void**)((char*)big->ptr10 + 0x10);
    f = *(float*)((char*)p2c + 0x2c);
    if (f != 0.0f) {
        if (*(char*)((char*)p2c + 8) != 0) {
            sub_658d20(p2c);
        }
        *(float*)((char*)p2c + 0x90) += tmp.x;
        *(float*)((char*)p2c + 0x94) += tmp.y;
        *(float*)((char*)p2c + 0x98) += tmp.z;
    }
}
