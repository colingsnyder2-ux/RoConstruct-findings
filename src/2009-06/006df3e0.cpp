// from server: 63% by colin
struct Effect {
    char pad[0x24];
    float x;
    float y;
    float z;
    Effect* __cdecl init(const float* a, const float* b, float s);
};

extern "C" void __stdcall sub_6df3a0(float* out, const float* a, const float* b);
extern "C" void __fastcall sub_577bb0(const float* base, int idx, float* out);
extern "C" float* __cdecl sub_578790();
extern "C" void __fastcall sub_499f80(void* self, const void* src);

extern float g_8cc040;

Effect* Effect::init(const float* a, const float* b, float s)
{
    float tmp[3];
    sub_6df3a0(tmp, a, b);

    float scale = g_8cc040;
    float v[3];
    sub_577bb0(tmp, 2, v);

    float rx = v[0] * scale * s + a[0];
    float ry = v[1] * scale * s + a[1];
    float rz = v[2] * scale * s + a[2];

    float* q = sub_578790();
    sub_499f80(this, q);

    this->x = rx;
    this->y = ry;
    this->z = rz;
    return this;
}
