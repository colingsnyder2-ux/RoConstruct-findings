// from server: 48% by colin
// roc 2007-08 00625110  unit: RBX::ArrowButton  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625110
//
// 00625110  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00625114  d901                 fld dword ptr [ecx]
// 00625116  8b442404             mov eax, dword ptr [esp + 4]
// 0062511a  d90500b57900         fld dword ptr [0x79b500]
// 00625120  dcc9                 fmul st(1), st(0)
// 00625122  d9c9                 fxch st(1)
// 00625124  d918                 fstp dword ptr [eax]
// 00625126  d94104               fld dword ptr [ecx + 4]
// 00625129  d8c9                 fmul st(1)
// 0062512b  d95804               fstp dword ptr [eax + 4]
// 0062512e  d84908               fmul dword ptr [ecx + 8]
// 00625131  d95808               fstp dword ptr [eax + 8]
// 00625134  c3                   ret 

struct S_func_00625110 {
    void f(float *out, const float *in);
};

void S_func_00625110::f(float *out, const float *in)
{
    float s = *(float *)0x79b500;
    out[0] = in[0] * s;
    out[1] = in[1] * s;
    out[2] = in[2] * s;
}
