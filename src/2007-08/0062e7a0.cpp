// from server: 35% by colin
struct Vector3 {
    float x, y, z;
};

struct AdornG3D {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
};

extern "C" void* __cdecl sub_5abc20(const char*);
extern "C" void* __cdecl sub_509750(void*, void*);
extern "C" void* __cdecl sub_5095d0(void*, void*);
extern "C" void* __cdecl sub_736ed0();

void AdornG3D_render(AdornG3D* self, const char* a, void* b, const float* c, const float* d, const float* e)
{
    char buf[0x64];
    void* p = sub_5abc20(a);
    void* q = sub_509750(p, buf + 0x18);
    sub_5095d0(q, buf + 0x3c);

    Vector3 v;
    v.x = self->f24;
    v.y = self->f28;
    v.z = self->f2c;

    void** vtbl = *(void***)b;
    void (__thiscall *fn34)(void*, Vector3*) = (void (__thiscall *)(void*, Vector3*))vtbl[0x34 / 4];
    fn34(b, &v);

    Vector3 w;
    w.x = c[0];
    w.y = c[1];
    w.z = c[2];

    float one = 1.0f;

    void* r = sub_736ed0();

    void** vtbl2 = *(void***)b;
    void (__thiscall *fn44)(void*, Vector3*, void*, float, float, float*) = (void (__thiscall *)(void*, Vector3*, void*, float, float, float*))vtbl2[0x44 / 4];
    fn44(b, &w, r, *d, *e, &one);
}
