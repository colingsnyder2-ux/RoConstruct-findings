// from server: 77% by colin
struct S_func_005995f0 {
    char pad0[0x12c];
    char field_12c[0x24];
    float field_150;
    float field_154;
    float field_158;
    char pad15c[0x24];
    float field_180;
    float field_184;
    float field_188;
    void f(float* out, int a, int b);
};

extern "C" void __stdcall sub_005ab7b0(void*, int, int);

void S_func_005995f0::f(float* out, int a, int b)
{
    sub_005ab7b0(field_12c, a, b);
    float dx = field_150 - field_180;
    float dy = field_154 - field_184;
    float dz = field_158 - field_188;
    *out = (float)(dx * dx + dy * dy + dz * dz);
}
