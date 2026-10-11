// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Obj {
    char pad[0x10];
    void* field10;
    char pad2[0x2c8 - 0x14];
    void* field2c8;
};

struct BodyThrust {
    char pad[0x18];
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    void method(int, int);
};

void sub_5cab00(void* self, void** out);
void sub_599360(void* self);
void sub_612fb0(void* self, void* a, void* b);

void BodyThrust::method(int a, int b)
{
    void* local;
    sub_5cab00((char*)this + 0x10, &local);
    Obj* obj = *(Obj**)&local;
    void* esi = obj->field2c8;

    RefCounted* rc = (RefCounted*)local;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            void** vt = rc->vptr;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                void** vt2 = rc->vptr;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(rc);
            }
        }
    }

    sub_599360(esi);

    float* f = (float*)esi;
    float r1 = f[0x9c/4] * f18 + f[0x98/4] * f1c + f[0x94/4] * f20;
    float r2 = f[0xa8/4] * f18 + f[0xa4/4] * f1c + f[0xa0/4] * f20;
    float r3 = f[0xb4/4] * f18 + f[0xb0/4] * f1c + f[0xac/4] * f20;

    float v1 = r1;
    float v2 = r2;
    float v3 = r3;

    sub_599360(esi);

    float* g = (float*)esi;
    float q1 = g[0x9c/4] * f24 + g[0x98/4] * f28 + g[0x94/4] * f2c + g[0xb8/4];
    float q2 = g[0xa0/4] * f24 + g[0xa8/4] * f2c + g[0xa4/4] * f28 + g[0xbc/4];
    float q3 = g[0xac/4] * f24 + g[0xb4/4] * f2c + g[0xb0/4] * f28 + g[0xc0/4];

    void* vp = *(void**)((char*)esi + 0x10);
    void* ecx_val = *(void**)((char*)vp + 0x2c);
    if (ecx_val != 0) {
        sub_612fb0(ecx_val, &v1, &q1);
    }
}
