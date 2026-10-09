// roc 2008-06 005731d0  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005731d0
//
// 005731d0  b801000000           mov eax, 1
// 005731d5  8405144e9700         test byte ptr [0x974e14], al
// 005731db  7526                 jne 0x573203
// 005731dd  d9051c718200         fld dword ptr [0x82711c]
// 005731e3  0905144e9700         or dword ptr [0x974e14], eax
// 005731e9  d915044e9700         fst dword ptr [0x974e04]
// 005731ef  d915084e9700         fst dword ptr [0x974e08]
// 005731f5  d91d0c4e9700         fstp dword ptr [0x974e0c]
// 005731fb  d9e8                 fld1 
// 005731fd  d91d104e9700         fstp dword ptr [0x974e10]
// 00573203  b8044e9700           mov eax, 0x974e04
// 00573208  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000007@ns_ROCX000007@@YAPAMXZ)

namespace ns_ROCX000007 {
extern float G_79f758;
extern float G_8c1e04;
extern float G_8c1e08;
extern float G_8c1e0c;
extern float G_8c1e10;
extern unsigned int G_8c1e14;

float* fn_ROCX000007()
{
    if (!(G_8c1e14 & 1))
    {
        G_8c1e14 |= 1;
        G_8c1e04 = G_79f758;
        G_8c1e08 = G_79f758;
        G_8c1e0c = G_79f758;
        G_8c1e10 = 1.0f;
    }
    return &G_8c1e04;
}
}
