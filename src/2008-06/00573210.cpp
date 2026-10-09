// roc 2008-06 00573210  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573210
//
// 00573210  b801000000           mov eax, 1
// 00573215  8405284e9700         test byte ptr [0x974e28], al
// 0057321b  7526                 jne 0x573243
// 0057321d  d90538f88200         fld dword ptr [0x82f838]
// 00573223  0905284e9700         or dword ptr [0x974e28], eax
// 00573229  d915184e9700         fst dword ptr [0x974e18]
// 0057322f  d9151c4e9700         fst dword ptr [0x974e1c]
// 00573235  d91d204e9700         fstp dword ptr [0x974e20]
// 0057323b  d9e8                 fld1 
// 0057323d  d91d244e9700         fstp dword ptr [0x974e24]
// 00573243  b8184e9700           mov eax, 0x974e18
// 00573248  c3                   ret 
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
