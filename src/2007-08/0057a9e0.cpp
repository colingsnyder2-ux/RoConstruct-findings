// from server: 85% by colin
// roc 2007-08 0057a9e0  unit: RBX::SpecialShape  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a9e0
//
// 0057a9e0  83ec10               sub esp, 0x10
// 0057a9e3  d905e8327a00         fld dword ptr [0x7a32e8]
// 0057a9e9  6a02                 push 2
// 0057a9eb  8d442408             lea eax, [esp + 8]
// 0057a9ef  d95c2404             fstp dword ptr [esp + 4]
// 0057a9f3  50                   push eax
// 0057a9f4  e847ecf8ff           call 0x509640
// 0057a9f9  d900                 fld dword ptr [eax]
// 0057a9fb  d90424               fld dword ptr [esp]
// 0057a9fe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057aa02  dcc9                 fmul st(1), st(0)
// 0057aa04  d9c9                 fxch st(1)
// 0057aa06  d919                 fstp dword ptr [ecx]
// 0057aa08  d94004               fld dword ptr [eax + 4]
// 0057aa0b  d8c9                 fmul st(1)
// 0057aa0d  d95904               fstp dword ptr [ecx + 4]
// 0057aa10  d84808               fmul dword ptr [eax + 8]
// 0057aa13  8bc1                 mov eax, ecx
// 0057aa15  d95908               fstp dword ptr [ecx + 8]
// 0057aa18  83c410               add esp, 0x10
// 0057aa1b  c20400               ret 4

extern float G_007a32e8;

struct Vec3
{
    float x;
    float y;
    float z;
};

extern "C" Vec3* __cdecl func_00509640(int a, float* b);

struct SpecialShape
{
    Vec3* func_0057a9e0(Vec3* out);
};

Vec3* SpecialShape::func_0057a9e0(Vec3* out)
{
    float tmp[2];
    tmp[0] = G_007a32e8;
    Vec3* v = func_00509640(2, &tmp[1]);
    float scale = tmp[0];
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}
