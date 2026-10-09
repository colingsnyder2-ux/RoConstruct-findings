// from server: 93% by colin
// roc 2007-08 00580f40  unit: RBX::Accoutrement  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580f40
//
// 00580f40  83ec10               sub esp, 0x10
// 00580f43  d905e8327a00         fld dword ptr [0x7a32e8]
// 00580f49  6a02                 push 2
// 00580f4b  8d442408             lea eax, [esp + 8]
// 00580f4f  d95c2404             fstp dword ptr [esp + 4]
// 00580f53  50                   push eax
// 00580f54  81c100010000         add ecx, 0x100
// 00580f5a  e8e186f8ff           call 0x509640
// 00580f5f  d900                 fld dword ptr [eax]
// 00580f61  d90424               fld dword ptr [esp]
// 00580f64  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00580f68  dcc9                 fmul st(1), st(0)
// 00580f6a  d9c9                 fxch st(1)
// 00580f6c  d919                 fstp dword ptr [ecx]
// 00580f6e  d94004               fld dword ptr [eax + 4]
// 00580f71  d8c9                 fmul st(1)
// 00580f73  d95904               fstp dword ptr [ecx + 4]
// 00580f76  d84808               fmul dword ptr [eax + 8]
// 00580f79  8bc1                 mov eax, ecx
// 00580f7b  d95908               fstp dword ptr [ecx + 8]
// 00580f7e  83c410               add esp, 0x10
// 00580f81  c20400               ret 4

struct S_func_00580f40 {
    char pad[0x100];
    float* f(float* out);
};

extern float G_func_007a32e8;
extern float* __stdcall G_func_00509640(float* dst, float* src, int count);

float* S_func_00580f40::f(float* out) {
    float tmp[4];
    tmp[0] = G_func_007a32e8;
    float* p = G_func_00509640((float*)((char*)this + 0x100), &tmp[1], 2);
    float s = tmp[0];
    out[0] = p[0] * s;
    out[1] = p[1] * s;
    out[2] = p[2] * s;
    return out;
}
