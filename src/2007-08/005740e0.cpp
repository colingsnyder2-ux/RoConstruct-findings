// from server: 62% by colin
// roc 2007-08 005740e0  unit: RBX::PartInstance  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005740e0
//
// 005740e0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 005740e6  8b4060               mov eax, dword ptr [eax + 0x60]
// 005740e9  d94004               fld dword ptr [eax + 4]
// 005740ec  83c004               add eax, 4
// 005740ef  d9059c7e7900         fld dword ptr [0x797e9c]
// 005740f5  dcc9                 fmul st(1), st(0)
// 005740f7  d94004               fld dword ptr [eax + 4]
// 005740fa  d8c9                 fmul st(1)
// 005740fc  d94008               fld dword ptr [eax + 8]
// 005740ff  8b442404             mov eax, dword ptr [esp + 4]
// 00574103  deca                 fmulp st(2)
// 00574105  d9c2                 fld st(2)
// 00574107  d9e0                 fchs 
// 00574109  d9c1                 fld st(1)
// 0057410b  d9e0                 fchs 
// 0057410d  d9c3                 fld st(3)
// 0057410f  d9e0                 fchs 
// 00574111  d9ca                 fxch st(2)
// 00574113  d918                 fstp dword ptr [eax]
// 00574115  d95804               fstp dword ptr [eax + 4]
// 00574118  d95808               fstp dword ptr [eax + 8]
// 0057411b  d9ca                 fxch st(2)
// 0057411d  d9580c               fstp dword ptr [eax + 0xc]
// 00574120  d9c9                 fxch st(1)
// 00574122  d95810               fstp dword ptr [eax + 0x10]
// 00574125  d95814               fstp dword ptr [eax + 0x14]
// 00574128  c20400               ret 4

struct PartInstance {
    char pad0[0x1d8];
    void* m_ptr;
    void getOrientation(float* out);
};

extern float g_scale;

void PartInstance::getOrientation(float* out)
{
    float* p = (float*)((char*)m_ptr + 0x60);
    float x = p[0] * g_scale;
    float y = p[1] * g_scale;
    float z = p[2] * g_scale;
    out[0] = -x;
    out[1] = -y;
    out[2] = -z;
    out[3] = x;
    out[4] = y;
    out[5] = z;
}
