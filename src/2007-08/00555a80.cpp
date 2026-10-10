// from server: 51% by colin
struct VStarterPackService {
    char pad[0x114];
    int field114;
    int field118;
    short field11c;
    short field11e;

    int method(int arg);
};

extern float g_8c1e64;
extern float g_8c1e68;

extern "C" void* __cdecl sub_501570();
extern "C" void* __cdecl sub_59c830(void*, void*, void*, void*, void*, void*);

int VStarterPackService::method(int arg)
{
    float v0 = g_8c1e64;
    float v1 = g_8c1e68;

    void* p1 = sub_501570();
    float f0 = *(float*)p1;
    float f1 = *(float*)((char*)p1 + 4);

    float local8 = v0;
    float localc = v1;
    float local10 = f0;
    float local14 = f1;

    void** vtbl = *(void***)this;
    void* (__thiscall *fn)(void*, void*) = (void* (__thiscall *)(void*, void*))vtbl[0x60 / 4];
    void* result = fn(this, &local8);

    void* p2 = sub_501570();
    float g0 = *(float*)p2;
    float g1 = *(float*)((char*)p2 + 4);

    int i0 = (int)field11c;
    int i1 = (int)field11e;

    float a0 = *(float*)result;
    float a1 = *(float*)((char*)result + 4);

    float x0 = g0 + (float)i0;
    float x1 = g1 + (float)i1;

    float r0 = local8 - a0;
    float r1 = local14 - a1;

    float out0 = x0 - r0;
    float out1 = x1 - r1;

    float out2 = local10 - a0;
    float out3 = local14 - a1;

    void* p3 = sub_59c830(&out0, &out1, &out2, &out3, (void*)field114, (void*)field118);

    float* src = (float*)p3;
    float* dst = (float*)arg;
    dst[0] = src[0];
    dst[1] = src[1];

    return arg;
}
