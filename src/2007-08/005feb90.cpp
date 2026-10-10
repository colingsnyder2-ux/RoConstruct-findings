// from server: 38% by colin
struct Vector3 {
    float x, y, z;
};

struct AxisMoveTool {
    char pad0[0x14];
    void* field14;
    bool hitTest(const Vector3&, Vector3&);
};

extern "C" void* __fastcall sub_4f3fe0();
extern "C" void __fastcall sub_5095d0(void*, void*);
extern "C" void* __fastcall sub_50a500();
extern "C" void* __fastcall sub_50b150();
extern "C" void __fastcall sub_62ef10(void*, void*, void*, void*);
extern float flt_797e9c;

bool AxisMoveTool::hitTest(const Vector3& ray, Vector3& hitPoint)
{
    Vector3 origin;
    Vector3* p = (Vector3*)sub_4f3fe0();
    origin.x = p->x;
    origin.y = p->y;
    origin.z = p->z;

    Vector3 dir;
    p = (Vector3*)sub_4f3fe0();
    dir.x = -p->x;
    dir.y = -p->y;
    dir.z = -p->z;

    if (!((AxisMoveTool*)((char*)this - 4))->hitTest(*(Vector3*)&origin, *(Vector3*)&dir))
        return false;

    Vector3 sum;
    sum.x = dir.x + origin.x;
    sum.y = dir.y + origin.y;
    sum.z = dir.z + origin.z;

    Vector3 scaled;
    scaled.x = sum.x * flt_797e9c;
    scaled.y = sum.y * flt_797e9c;
    scaled.z = sum.z * flt_797e9c;

    void* tmp = sub_50a500();
    sub_5095d0(&scaled, tmp);

    Vector3 diff;
    diff.x = dir.x - origin.x;
    diff.y = dir.y - origin.y;
    diff.z = dir.z - origin.z;

    void* tmp2 = sub_50b150();
    void* v = (void*)((char*)field14 + 0x228);
    void* vtbl = *(void**)v;
    void* result = ((void* (__thiscall*)(void*, void*, void*))*(void**)((char*)vtbl + 8))(v, tmp2, &diff);
    sub_62ef10(&scaled, &diff, result, tmp);
    return true;
}
