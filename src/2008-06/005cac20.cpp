// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vec3 {
    float x, y, z;
};

struct Mat34 {
    float m[12];
};

extern void G1_func_005cab00(void* out, void* self);
extern void G1_func_00501ca0(void* out, void* a, void* b);

struct VControllerService {
    char pad0[0x18];
    char field18[0x44];
    char field5c[0x44];
    void getPosition(Vec3* out);
};

void VControllerService::getPosition(Vec3* out)
{
    void* p1 = 0;
    void* p2 = 0;
    out->x = 0.0f;
    out->y = 0.0f;
    out->z = 0.0f;

    G1_func_005cab00(&p1, &this->field18);
    G1_func_005cab00(&p2, &this->field5c);

    if (p1 != 0 && p2 != 0) {
        Mat34 m1;
        Mat34 m2;
        void** vtbl1 = *(void***)((char*)p1 + 0x134);
        void* fn1 = vtbl1[2];
        ((void (__thiscall*)(void*, void*))fn1)((char*)p1 + 0x134, &m1);

        void** vtbl2 = *(void***)((char*)p2 + 0x134);
        void* fn2 = vtbl2[2];
        ((void (__thiscall*)(void*, void*))fn2)((char*)p2 + 0x134, &m2);

        Vec3 pos;
        pos.x = *(float*)((char*)&m2 + 0x24);
        pos.y = *(float*)((char*)&m2 + 0x28);
        pos.z = *(float*)((char*)&m2 + 0x2c);

        Vec3 result;
        G1_func_00501ca0(&result, &m1, &pos);
        out->x = result.x;
        out->y = result.y;
        out->z = result.z;
    }

    if (p2 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p2 + 4), -1) == 1) {
            void** vtbl = *(void***)p2;
            ((void (__thiscall*)(void*))vtbl[1])(p2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p2 + 8), -1) == 1) {
                void** vtbl2 = *(void***)p2;
                ((void (__thiscall*)(void*))vtbl2[2])(p2);
            }
        }
    }

    if (p1 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p1 + 4), -1) == 1) {
            void** vtbl = *(void***)p1;
            ((void (__thiscall*)(void*))vtbl[1])(p1);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p1 + 8), -1) == 1) {
                void** vtbl2 = *(void***)p1;
                ((void (__thiscall*)(void*))vtbl2[2])(p1);
            }
        }
    }
}
