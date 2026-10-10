// from server: 55% by colin
struct AssemblyStage {
    float field0;
    float field4;
    float field8;
    float fieldC;
    float field10;
    float field14;
    float field18;
    bool onEngineChanging(void* p);
};

extern "C" void __cdecl sub_5AB780(float* out, float* in);
extern "C" void __cdecl sub_5AC270(float* out, float* in);
extern "C" void* __cdecl sub_5AA880(void* self, void* p);
extern "C" float __cdecl sub_628390(float* v);

bool AssemblyStage::onEngineChanging(void* p)
{
    float a[3];
    float b[3];
    a[0] = field0 - *(float*)((char*)p + 0x24);
    a[1] = field4 - *(float*)((char*)p + 0x28);
    a[2] = field8 - *(float*)((char*)p + 0x2c);
    sub_5AB780(a, b);
    sub_5AC270(b, a);

    if (!(a[0] > *(float*)((char*)p + 0x34)))
        return false;

    float* q = (float*)sub_5AA880((char*)p + 0x34, b);
    float s = *(float*)((char*)p + 0x34);

    float v[4];
    v[0] = fieldC - q[0] * s;
    v[1] = field10 - q[1] * s;
    v[2] = field14 - q[2] * s;
    v[3] = field18 - q[3] * s;

    float d = sub_628390(v);
    if (!(d > *(float*)((char*)p + 0x34)))
        return false;

    return true;
}
