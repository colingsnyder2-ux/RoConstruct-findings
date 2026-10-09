// roc 2009-06 00607380  unit: RBX::DataModel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607380
//
// 00607380  b801000000           mov eax, 1
// 00607385  8405a4afa400         test byte ptr [0xa4afa4], al
// 0060738b  7526                 jne 0x6073b3
// 0060738d  d90540aa8b00         fld dword ptr [0x8baa40]
// 00607393  0905a4afa400         or dword ptr [0xa4afa4], eax
// 00607399  d91594afa400         fst dword ptr [0xa4af94]
// 0060739f  d91598afa400         fst dword ptr [0xa4af98]
// 006073a5  d91d9cafa400         fstp dword ptr [0xa4af9c]
// 006073ab  d9e8                 fld1 
// 006073ad  d91da0afa400         fstp dword ptr [0xa4afa0]
// 006073b3  b894afa400           mov eax, 0xa4af94
// 006073b8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000005@ns_ROCX000005@@YAPAMXZ)

namespace ns_ROCX000005 {
extern float G_79f758;
extern float G_8c1e04;
extern float G_8c1e08;
extern float G_8c1e0c;
extern float G_8c1e10;
extern unsigned int G_8c1e14;

float* fn_ROCX000005()
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
