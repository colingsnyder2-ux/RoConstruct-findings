// from server: 62% by Yeetserama
struct AdornG3D {
    char pad[0x38];
};

struct VTable {
    char pad[0x34];
    void (__thiscall *func)(void*, void*);
};

struct Obj {
    VTable* vt;
};

extern float g_795b48;
extern float g_7ab980;

void __stdcall sub_62e850(void*, void*, void*, void*, void*);

void AdornG3D_render(AdornG3D* self, Obj* obj, void* a3, void* a4, void* a5)
{
    obj->vt->func(obj, (char*)self + 0x38);

    float t = g_795b48;
    float v4 = *(float*)((char*)self + 4) * t;
    float v8 = *(float*)((char*)self + 8) * t;
    float vc = *(float*)((char*)self + 0xc) * t;

    float local[3];
    local[0] = v4;
    local[1] = v8;
    local[2] = vc;

    sub_62e850(obj, a3, a4, a5, local);
}
