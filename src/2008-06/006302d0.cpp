// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vec3 {
    float x, y, z;
};

struct RefCounted {
    void** vptr;
    long refcount;
    long weakrefcount;
};

struct Sub10 {
    char pad[0x10];
    int field10;
};

struct Sub10_28 {
    char pad[0x28];
    int field28;
};

struct Sub10_10 {
    char pad[0x10];
    int field10;
};

struct Sub10_10_2c {
    char pad[0x2c];
    int field2c;
};

struct Big {
    char pad0[0x10];
    Sub10* p10;
    char pad14[0xc4 - 0x14];
    float f_c4;
    float f_c8;
    float f_cc;
};

struct BodyVelocity {
    char pad0[0x10];
    int field10;
    char pad14[0x18 - 0x14];
    Vec3 v18;
    char pad24[0x28 - 0x24];
    float f28;
    float f2c;
    float f30;
    Vec3 v34;
    char pad40[0x2c8 - 0x40];
    int field2c8;

    void func(int, int);
};

int sub_5cab00(void* self, void* out);
void sub_599360(void* self);
void sub_65ff10(void* self);
void sub_658d20(void* self);
Vec3* sub_4a6100(void* self, Vec3* out, Vec3* in);

void BodyVelocity::func(int a, int b)
{
    void* local;
    sub_5cab00((char*)this + 0x10, &local);
    int* p = (int*)local;
    Big* ebx = (Big*)p[0x2c8 / 4];

    RefCounted* esi = (RefCounted*)local;
    if (esi != 0) {
        if (_InterlockedExchangeAdd(&esi->refcount, -1) == 1) {
            void** vt = esi->vptr;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(esi);
            if (_InterlockedExchangeAdd(&esi->weakrefcount, -1) == 1) {
                void** vt2 = esi->vptr;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(esi);
            }
        }
    }

    sub_599360(ebx);

    float dx = this->f28 - ebx->f_c4;
    float dy = this->f2c - ebx->f_c8;
    float dz = this->f30 - ebx->f_cc;

    Sub10* eax = ebx->p10;
    int ecx = ((Sub10_28*)eax)->field28;

    float mx = this->v18.x * dx;
    float my = this->v18.y * dy;
    float mz = this->v18.z * dz;

    float scale;
    if (ecx != 0) {
        sub_65ff10((void*)ecx);
        scale = 0.0f;
    } else {
        scale = *(float*)((char*)eax + 0x8c);
    }

    Vec3* esi2 = &this->v34;
    Vec3 neg;
    neg.x = -this->v18.x;
    neg.y = -this->v18.y;
    neg.z = -this->v18.z;

    Vec3 tmp;
    Vec3* r = sub_4a6100(esi2, &tmp, &neg);
    esi2->x = r->x;
    esi2->y = r->y;
    esi2->z = r->z;

    Sub10* edx = ebx->p10;
    Sub10_10* eax2 = (Sub10_10*)edx->field10;
    Sub10_10_2c* edi = (Sub10_10_2c*)eax2->field10;

    if (edi != 0) {
        if (*((char*)edi + 8) != 0) {
            sub_658d20(edi);
        }
        *(float*)((char*)edi + 0x84) += esi2->x;
        *(float*)((char*)edi + 0x88) += esi2->y;
        *(float*)((char*)edi + 0x8c) += esi2->z;
    }
}
