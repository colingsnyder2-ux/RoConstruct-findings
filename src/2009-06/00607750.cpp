// roc 2009-06 00607750  unit: RBX::UnifiedWidget  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607750
//
// 00607750  d9ee                 fldz 
// 00607752  8b442404             mov eax, dword ptr [esp + 4]
// 00607756  d918                 fstp dword ptr [eax]
// 00607758  d905307d8d00         fld dword ptr [0x8d7d30]
// 0060775e  d95804               fstp dword ptr [eax + 4]
// 00607761  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX00000b@@QAEXPAM@Z)

namespace ns_ROCX00000b {
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
