// from server: 38% by colin
// roc 2007-08 005ab780  unit: RBX::World  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab780
//
// 005ab780  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ab784  d901                 fld dword ptr [ecx]
// 005ab786  8b442404             mov eax, dword ptr [esp + 4]
// 005ab78a  d9e1                 fabs 
// 005ab78c  d918                 fstp dword ptr [eax]
// 005ab78e  d94104               fld dword ptr [ecx + 4]
// 005ab791  d9e1                 fabs 
// 005ab793  d95804               fstp dword ptr [eax + 4]
// 005ab796  d94108               fld dword ptr [ecx + 8]
// 005ab799  d9e1                 fabs 
// 005ab79b  d95808               fstp dword ptr [eax + 8]
// 005ab79e  c3                   ret 

struct S_func_005ab780 {
    void f(float* out, const float* in);
};

void S_func_005ab780::f(float* out, const float* in)
{
    out[0] = (in[0] < 0.0f) ? -in[0] : in[0];
    out[1] = (in[1] < 0.0f) ? -in[1] : in[1];
    out[2] = (in[2] < 0.0f) ? -in[2] : in[2];
}
