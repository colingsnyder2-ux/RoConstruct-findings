// roc 2007-03 00551a70  unit: seg_00550000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551a70
//
// 00551a70  b801000000           mov eax, 1
// 00551a75  84055cc08b00         test byte ptr [0x8bc05c], al
// 00551a7b  7526                 jne 0x551aa3
// 00551a7d  d905d0037a00         fld dword ptr [0x7a03d0]
// 00551a83  09055cc08b00         or dword ptr [0x8bc05c], eax
// 00551a89  d9154cc08b00         fst dword ptr [0x8bc04c]
// 00551a8f  d91550c08b00         fst dword ptr [0x8bc050]
// 00551a95  d91d54c08b00         fstp dword ptr [0x8bc054]
// 00551a9b  d9e8                 fld1 
// 00551a9d  d91d58c08b00         fstp dword ptr [0x8bc058]
// 00551aa3  b84cc08b00           mov eax, 0x8bc04c
// 00551aa8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00002d@ns_ROCX00002d@@YAPAMXZ)

namespace ns_ROCX00002d {
extern float G_79f758;
extern float G_8c1e04;
extern float G_8c1e08;
extern float G_8c1e0c;
extern float G_8c1e10;
extern unsigned int G_8c1e14;

float* fn_ROCX00002d()
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
