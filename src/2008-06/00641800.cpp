// from server: 14% by colin
struct Vector3 {
    float x, y, z;
};

struct CFrame {
    float rotation[9];
    Vector3 translation;
};

struct GCamera {
    float m[9];
    Vector3 translation;
    void getCoordinateFrame(CFrame* out);
    void setCoordinateFrame(const CFrame& cf);
    void lookAt(const Vector3& target, const Vector3& up);
    void setPosition(const Vector3& pos);
    Vector3 getPosition() const;
    Vector3 getLookVector() const;
    void setLookVector(const Vector3& v);
};

extern "C" {
    void __cdecl func_5183c0(float);
    void __cdecl func_513240(void*, int);
    void __cdecl func_5185f0(void*, const Vector3*);
    void __cdecl func_5cbe70(void*, const Vector3*);
    void __cdecl func_5dec60(void*, const Vector3*);
    void __cdecl func_501ca0(void*, const Vector3*);
    double __cdecl sqrt(double);
}

extern float g_826918;
extern float g_874d88;
extern float g_84a5f8;

struct Humanoid {
    char pad0[4];
    void* ptr4;
    char pad8[0x2c];
    unsigned char flag3d;
    float field40;
    unsigned char flag44;
    Vector3 field48;
    char pad54[0x24];
    GCamera camera;

    bool computeForce(const Vector3& pos, const Vector3& dir, float dt, void* out);
    void updateCamera(const Vector3& pos, const Vector3& dir, float dt, void* out);
};

bool Humanoid::computeForce(const Vector3& pos, const Vector3& dir, float dt, void* out)
{
    Vector3 delta;
    delta.x = dir.x - pos.x;
    delta.y = dir.y - pos.y;
    delta.z = dir.z - pos.z;

    Vector3 negDelta;
    negDelta.x = pos.x - dir.x;
    negDelta.y = pos.y - dir.y;
    negDelta.z = pos.z - dir.z;

    float dist = (float)sqrt(negDelta.x * negDelta.x + negDelta.y * negDelta.y + negDelta.z * negDelta.z);

    void* vtable = *(void**)this;
    void* obj = *(void**)((char*)this + 4);
    void* vtable2 = *(void**)((char*)obj + 4);
    void* fn = *(void**)((char*)vtable2 + (int)this + 4);
    void* fnptr = *(void**)fn;

    if (dist > g_84a5f8) {
        CFrame cf;
        ((void (__thiscall*)(void*, CFrame*))fnptr)((char*)vtable2 + (int)this + 4, &cf);
        Vector3 oldPos = cf.translation;
        Vector3 newPos = pos;
        Vector3 diff;
        diff.x = newPos.x - oldPos.x;
        diff.y = newPos.y - oldPos.y;
        diff.z = newPos.z - oldPos.z;
        Vector3* p = (Vector3*)out;
        p->x = diff.x + pos.x;
        p->y = diff.y + pos.y;
        p->z = diff.z + pos.z;
    } else {
        CFrame cf;
        ((void (__thiscall*)(void*, CFrame*))fnptr)((char*)vtable2 + (int)this + 4, &cf);
        Vector3 oldPos = cf.translation;
        Vector3 newPos = pos;
        Vector3 diff;
        diff.x = newPos.x - oldPos.x;
        diff.y = newPos.y - oldPos.y;
        diff.z = newPos.z - oldPos.z;
        Vector3* p = (Vector3*)out;
        p->x = diff.x + pos.x;
        p->y = diff.y + pos.y;
        p->z = diff.z + pos.z;
    }

    return true;
}

void Humanoid::updateCamera(const Vector3& pos, const Vector3& dir, float dt, void* out)
{
    Vector3 delta;
    delta.x = dir.x - pos.x;
    delta.y = dir.y - pos.y;
    delta.z = dir.z - pos.z;

    Vector3 negDelta;
    negDelta.x = pos.x - dir.x;
    negDelta.y = pos.y - dir.y;
    negDelta.z = pos.z - dir.z;

    float dist = (float)sqrt(negDelta.x * negDelta.x + negDelta.y * negDelta.y + negDelta.z * negDelta.z);

    void* vtable = *(void**)this;
    void* obj = *(void**)((char*)this + 4);
    void* vtable2 = *(void**)((char*)obj + 4);
    void* fn = *(void**)((char*)vtable2 + (int)this + 4);
    void* fnptr = *(void**)fn;

    if (dist > g_84a5f8) {
        CFrame cf;
        ((void (__thiscall*)(void*, CFrame*))fnptr)((char*)vtable2 + (int)this + 4, &cf);
        Vector3 oldPos = cf.translation;
        Vector3 newPos = pos;
        Vector3 diff;
        diff.x = newPos.x - oldPos.x;
        diff.y = newPos.y - oldPos.y;
        diff.z = newPos.z - oldPos.z;
        Vector3* p = (Vector3*)out;
        p->x = diff.x + pos.x;
        p->y = diff.y + pos.y;
        p->z = diff.z + pos.z;
    } else {
        CFrame cf;
        ((void (__thiscall*)(void*, CFrame*))fnptr)((char*)vtable2 + (int)this + 4, &cf);
        Vector3 oldPos = cf.translation;
        Vector3 newPos = pos;
        Vector3 diff;
        diff.x = newPos.x - oldPos.x;
        diff.y = newPos.y - oldPos.y;
        diff.z = newPos.z - oldPos.z;
        Vector3* p = (Vector3*)out;
        p->x = diff.x + pos.x;
        p->y = diff.y + pos.y;
        p->z = diff.z + pos.z;
    }
}
