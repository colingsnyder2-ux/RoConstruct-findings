// from server: 81% by colin
// roc 2007-08 005d1c30  unit: RBX::Tool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1c30
//
// 005d1c30  83ec10               sub esp, 0x10
// 005d1c33  d905e8327a00         fld dword ptr [0x7a32e8]
// 005d1c39  6a02                 push 2
// 005d1c3b  8d442408             lea eax, [esp + 8]
// 005d1c3f  d95c2404             fstp dword ptr [esp + 4]
// 005d1c43  50                   push eax
// 005d1c44  81c174010000         add ecx, 0x174
// 005d1c4a  e8f179f3ff           call 0x509640
// 005d1c4f  d900                 fld dword ptr [eax]
// 005d1c51  d90424               fld dword ptr [esp]
// 005d1c54  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d1c58  dcc9                 fmul st(1), st(0)
// 005d1c5a  d9c9                 fxch st(1)
// 005d1c5c  d919                 fstp dword ptr [ecx]
// 005d1c5e  d94004               fld dword ptr [eax + 4]
// 005d1c61  d8c9                 fmul st(1)
// 005d1c63  d95904               fstp dword ptr [ecx + 4]
// 005d1c66  d84808               fmul dword ptr [eax + 8]
// 005d1c69  8bc1                 mov eax, ecx
// 005d1c6b  d95908               fstp dword ptr [ecx + 8]
// 005d1c6e  83c410               add esp, 0x10
// 005d1c71  c20400               ret 4

struct Tool {
    char pad[0x174];
    int field_174;
    float* func_005d1c30(float* out);
};

extern float g_7a32e8;
extern float* __stdcall sub_509640(int* self, float* out, int n);

float* Tool::func_005d1c30(float* out)
{
    float tmp;
    tmp = g_7a32e8;
    float* p = sub_509640(&field_174, &tmp, 2);
    out[0] = p[0] * tmp;
    out[1] = p[1] * tmp;
    out[2] = p[2] * tmp;
    return out;
}
