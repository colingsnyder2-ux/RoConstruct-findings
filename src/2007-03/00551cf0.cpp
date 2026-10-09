// roc 2007-03 00551cf0  unit: seg_00550000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551cf0
//
// 00551cf0  d9ee                 fldz 
// 00551cf2  8b442404             mov eax, dword ptr [esp + 4]
// 00551cf6  d918                 fstp dword ptr [eax]
// 00551cf8  d905f0827a00         fld dword ptr [0x7a82f0]
// 00551cfe  d95804               fstp dword ptr [eax + 4]
// 00551d01  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000033@@QAEXPAM@Z)

namespace ns_ROCX000033 {
struct S {
    void f(float* out);
};

extern float g_val;

void S::f(float* out)
{
    out[0] = 0.0f;
    out[1] = g_val;
}
}
