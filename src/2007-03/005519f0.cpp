// roc 2007-03 005519f0  unit: seg_00550000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005519f0
//
// 005519f0  b801000000           mov eax, 1
// 005519f5  840534c08b00         test byte ptr [0x8bc034], al
// 005519fb  7526                 jne 0x551a23
// 005519fd  d905b0ed7900         fld dword ptr [0x79edb0]
// 00551a03  090534c08b00         or dword ptr [0x8bc034], eax
// 00551a09  d91524c08b00         fst dword ptr [0x8bc024]
// 00551a0f  d91528c08b00         fst dword ptr [0x8bc028]
// 00551a15  d91d2cc08b00         fstp dword ptr [0x8bc02c]
// 00551a1b  d9e8                 fld1 
// 00551a1d  d91d30c08b00         fstp dword ptr [0x8bc030]
// 00551a23  b824c08b00           mov eax, 0x8bc024
// 00551a28  c3                   ret 
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
