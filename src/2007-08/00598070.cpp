// from server: 53% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vector3 {
    float x, y, z;
};

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct CFrame {
    float m[12];
};

struct Box {
    float m[12];
};

struct CollisionDetection {
    char pad[0x18];
    char field18[0x44];
    char field5c[0x34];
    Vector3 separatingAxisForSolidBoxSolidBox(int separatingAxisIndex, const Box& box1, const Box& box2, Vector3* out);
};

extern "C" void __cdecl sub_5FC7F0(void* out, void* in);
extern "C" void* __cdecl sub_4F7500(void* a, void* b, void* c);

Vector3 CollisionDetection::separatingAxisForSolidBoxSolidBox(int separatingAxisIndex, const Box& box1, const Box& box2, Vector3* out) {
    out->x = 0.0f;
    out->y = 0.0f;
    out->z = 0.0f;

    void* p1 = 0;
    void* p2 = 0;

    sub_5FC7F0(&p1, &field18);
    sub_5FC7F0(&p2, &field5c);

    if (p1 != 0 && p2 != 0) {
        CFrame cf1;
        CFrame cf2;

        void** vt1 = *(void***)((char*)p1 + 0xec);
        void* fn1 = vt1[2];
        ((void (__thiscall*)(void*, CFrame*))fn1)((char*)p1 + 0xec, &cf1);

        void** vt2 = *(void***)((char*)p2 + 0xec);
        void* fn2 = vt2[2];
        ((void (__thiscall*)(void*, CFrame*))fn2)((char*)p2 + 0xec, &cf2);

        Vector3 v1;
        v1.x = cf1.m[9];
        v1.y = cf1.m[10];
        v1.z = cf1.m[11];

        Vector3 v2;
        v2.x = cf2.m[9];
        v2.y = cf2.m[10];
        v2.z = cf2.m[11];

        Vector3* result = (Vector3*)sub_4F7500(&v1, &v2, &cf1);
        out->x = result->x;
        out->y = result->y;
        out->z = result->z;
    }

    if (p2 != 0) {
        RefCounted* r = (RefCounted*)p2;
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void** vt = (void**)r->vptr;
            ((void (__thiscall*)(void*))vt[1])(r);
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                void** vt2 = (void**)r->vptr;
                ((void (__thiscall*)(void*))vt2[2])(r);
            }
        }
    }

    if (p1 != 0) {
        RefCounted* r = (RefCounted*)p1;
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void** vt = (void**)r->vptr;
            ((void (__thiscall*)(void*))vt[1])(r);
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                void** vt2 = (void**)r->vptr;
                ((void (__thiscall*)(void*))vt2[2])(r);
            }
        }
    }

    return *out;
}
