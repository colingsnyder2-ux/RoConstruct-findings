// from server: 76% by colin
// roc 2007-08 005995f0  unit: RBX::Camera  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005995f0
//
// 005995f0  8b442408             mov eax, dword ptr [esp + 8]
// 005995f4  56                   push esi
// 005995f5  8bf1                 mov esi, ecx
// 005995f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005995fb  50                   push eax
// 005995fc  51                   push ecx
// 005995fd  8d962c010000         lea edx, [esi + 0x12c]
// 00599603  52                   push edx
// 00599604  e8a7210100           call 0x5ab7b0
// 00599609  d98650010000         fld dword ptr [esi + 0x150]
// 0059960f  d8a680010000         fsub dword ptr [esi + 0x180]
// 00599615  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00599619  d98654010000         fld dword ptr [esi + 0x154]
// 0059961f  83c40c               add esp, 0xc
// 00599622  d8a684010000         fsub dword ptr [esi + 0x184]
// 00599628  d98658010000         fld dword ptr [esi + 0x158]
// 0059962e  d8a688010000         fsub dword ptr [esi + 0x188]
// 00599634  5e                   pop esi
// 00599635  d9c2                 fld st(2)
// 00599637  decb                 fmulp st(3)
// 00599639  dcc8                 fmul st(0), st(0)
// 0059963b  dec2                 faddp st(2)
// 0059963d  dcc8                 fmul st(0), st(0)
// 0059963f  dec1                 faddp st(1)
// 00599641  d9fa                 fsqrt 
// 00599643  d918                 fstp dword ptr [eax]
// 00599645  c20c00               ret 0xc

struct Camera {
    char pad[0x12c];
    char field12c[0x24];
    float field150;
    float field154;
    float field158;
    char pad15c[0x24];
    float field180;
    float field184;
    float field188;
    void func_005995f0(int a, int b, float* out);
};

extern "C" void __cdecl sub_5ab7b0(void*, int, int);

void Camera::func_005995f0(int a, int b, float* out)
{
    sub_5ab7b0(field12c, a, b);
    float dx = field150 - field180;
    float dy = field154 - field184;
    float dz = field158 - field188;
    *out = (float)(dx * dx + dy * dy + dz * dz);
}
