// roc 2007-03 00551a30  unit: seg_00550000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551a30
//
// 00551a30  b801000000           mov eax, 1
// 00551a35  840548c08b00         test byte ptr [0x8bc048], al
// 00551a3b  7526                 jne 0x551a63
// 00551a3d  d905c8827a00         fld dword ptr [0x7a82c8]
// 00551a43  090548c08b00         or dword ptr [0x8bc048], eax
// 00551a49  d91538c08b00         fst dword ptr [0x8bc038]
// 00551a4f  d9153cc08b00         fst dword ptr [0x8bc03c]
// 00551a55  d91d40c08b00         fstp dword ptr [0x8bc040]
// 00551a5b  d9e8                 fld1 
// 00551a5d  d91d44c08b00         fstp dword ptr [0x8bc044]
// 00551a63  b838c08b00           mov eax, 0x8bc038
// 00551a68  c3                   ret 
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
