// from server: 43% by colin
// roc 2007-08 005ddfe0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ddfe0
//
// 005ddfe0  8b442408             mov eax, dword ptr [esp + 8]
// 005ddfe4  d900                 fld dword ptr [eax]
// 005ddfe6  d9e8                 fld1 
// 005ddfe8  dcc1                 fadd st(1), st(0)
// 005ddfea  d94004               fld dword ptr [eax + 4]
// 005ddfed  d8c1                 fadd st(1)
// 005ddfef  d94008               fld dword ptr [eax + 8]
// 005ddff2  dec2                 faddp st(2)
// 005ddff4  d905b8347a00         fld dword ptr [0x7a34b8]
// 005ddffa  dccb                 fmul st(3), st(0)
// 005ddffc  dcc9                 fmul st(1), st(0)
// 005ddffe  dcca                 fmul st(2), st(0)
// 005de000  d900                 fld dword ptr [eax]
// 005de002  d8c9                 fmul st(1)
// 005de004  d94004               fld dword ptr [eax + 4]
// 005de007  d8ca                 fmul st(2)
// 005de009  d94008               fld dword ptr [eax + 8]
// 005de00c  8b442404             mov eax, dword ptr [esp + 4]
// 005de010  decb                 fmulp st(3)
// 005de012  d9c9                 fxch st(1)
// 005de014  d918                 fstp dword ptr [eax]
// 005de016  d95804               fstp dword ptr [eax + 4]
// 005de019  d95808               fstp dword ptr [eax + 8]
// 005de01c  d9ca                 fxch st(2)
// 005de01e  d9580c               fstp dword ptr [eax + 0xc]
// 005de021  d9c9                 fxch st(1)
// 005de023  d95810               fstp dword ptr [eax + 0x10]
// 005de026  d95814               fstp dword ptr [eax + 0x14]
// 005de029  c3                   ret 

struct S {
    void f(float* out, const float* in);
};

void S::f(float* out, const float* in)
{
    float a = in[0];
    float b = in[1];
    float c = in[2];
    float s = 1.0f;
    float t = a + s;
    float u = b + t;
    float v = c + u;
    float k = *(float*)0x7a34b8;
    float x = t * k;
    float y = u * k;
    float z = v * k;
    float p = in[0];
    float q = in[1];
    float r = in[2];
    float m = p * x;
    float n = q * y;
    float o = r * z;
    out[0] = m;
    out[1] = n;
    out[2] = o;
    out[3] = x;
    out[4] = y;
    out[5] = z;
}
