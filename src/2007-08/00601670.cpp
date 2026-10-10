// from server: 53% by colin
struct Vec3 {
    float x, y, z;
};

struct RbxRay {
    Vec3 origin;
    Vec3 direction;
};

struct InputObject;

struct MouseCommand {
    char pad[0x24];
    Vec3 hitWorld;
};

extern float g_float_7a32e8;

extern "C" void __cdecl sub_00601630(RbxRay* out, InputObject* inputObject, void* workspace);
extern "C" void* __cdecl sub_00509640(void* a, void* b);
extern "C" void* __cdecl sub_0050a500();

struct Helper {
    void sub_005095d0(void* arg);
};

RbxRay* sub_00601670(MouseCommand* self, InputObject* inputObject, void* workspace, int a4)
{
    RbxRay unitRay;
    Vec3 scaled;
    Vec3 result;

    sub_00601630(&unitRay, inputObject, workspace);

    float f = g_float_7a32e8;
    float f2 = f;

    void* p = sub_00509640(&f2, &f);
    float* pf = (float*)p;

    scaled.x = pf[0] * f;
    scaled.y = pf[1] * f;
    scaled.z = pf[2] * f;

    result.x = scaled.x + unitRay.origin.x;
    result.y = scaled.y + unitRay.origin.y;
    result.z = scaled.z + unitRay.origin.z;

    void* q = sub_0050a500();
    ((Helper*)self)->sub_005095d0(q);

    self->hitWorld.x = result.x;
    self->hitWorld.y = result.y;
    self->hitWorld.z = result.z;

    return (RbxRay*)self;
}
