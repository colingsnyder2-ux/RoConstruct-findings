// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vector3 { float x, y, z; };

struct RefCounted {
    void** vptr;
    long refCount;
};

struct SharedPtr {
    void* ptr;
    void* control;
};

struct Primitive {
    char pad[0xa0];
    void* body;
    const Vector3& getValue();
};

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct FactoryProduct {
    void* vptr;
    long refCount;
};

struct GroupDragTool {
    void* vptr;
    void* megaDragger;
    char pad0[8];
    void* field10;
    void* field14;
    float fx18, fy1c, fz20;
    int field24;
    int field28;
    float fx2c, fy30, fz34;
    float fx38, fy3c, fz40;
    void construct(void* a, void* b, void* c, void* d);
};

extern "C" void* __cdecl func_510960();
extern "C" void* __cdecl func_5cab00(void* out, void* in);
extern "C" void __cdecl func_5e7760(void* self, void* arg);
extern "C" void* __cdecl func_5e82c0(void* self);
extern "C" void __cdecl func_614170(void* self);
extern "C" bool __cdecl func_66ce20(void* self);

void GroupDragTool::construct(void* a, void* b, void* c, void* d)
{
    void* p = d;
    this->field10 = a;
    *(void**)this = b;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 8), 1);
    }
    void* old = this->megaDragger;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
            void** vt = *(void***)old;
            ((void(__thiscall*)(void*))vt[2])(old);
        }
    }
    this->megaDragger = p;
    void* tmp;
    func_5cab00(&tmp, (char*)this + 0x44);
    void* v = *(void**)tmp;
    this->field14 = (char*)v + 0x228;
    void* q = *(void**)((char*)&tmp + 4);
    if (q) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)q + 4), -1) == 1) {
            void** vt = *(void***)q;
            ((void(__thiscall*)(void*))vt[1])(q);
            if (_InterlockedExchangeAdd((volatile long*)((char*)q + 8), -1) == 1) {
                void** vt2 = *(void***)q;
                ((void(__thiscall*)(void*))vt2[2])(q);
            }
        }
    }
    void* prim = (void*)func_5e82c0(this->field14);
    Vector3* hit = (Vector3*)c;
    Vector3* body = (Vector3*)((char*)prim + 0x24);
    float dx = hit->x - body->x;
    float dy = hit->y - body->y;
    float dz = hit->z - body->z;
    float* m = (float*)prim;
    float rx = m[0]*dx + m[4]*dy + m[8]*dz;
    float ry = m[1]*dx + m[5]*dy + m[9]*dz;
    float rz = m[2]*dx + m[6]*dy + m[10]*dz;
    this->fx18 = rx;
    this->fy1c = ry;
    this->fz20 = rz;
    if (!(*(volatile long*)0x97d580 & 1)) {
        *(volatile long*)0x97d580 |= 1;
        func_614170((void*)0x97d568);
    }
    func_5e7760(this->field14, (void*)0x97d568);
    Vector3* v1 = (Vector3*)func_510960();
    Vector3 tmp1 = *v1;
    Vector3* v2 = (Vector3*)func_510960();
    Vector3 tmp2 = *v2;
    this->field24 = 0;
    this->field28 = 6;
    this->fx2c = tmp1.x;
    this->fy30 = tmp1.y;
    this->fz34 = tmp1.z;
    this->fx38 = tmp2.x;
    this->fy3c = tmp2.y;
    this->fz40 = tmp2.z;
    void* tmp3;
    func_5cab00(&tmp3, (char*)this + 0x44);
    void* arg = *(void**)tmp3;
    func_66ce20(arg);
    void* r = *(void**)((char*)&tmp3 + 4);
    if (r) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
            void** vt = *(void***)r;
            ((void(__thiscall*)(void*))vt[1])(r);
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                void** vt2 = *(void***)r;
                ((void(__thiscall*)(void*))vt2[2])(r);
            }
        }
    }
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
            void** vt = *(void***)p;
            ((void(__thiscall*)(void*))vt[2])(p);
        }
    }
}
