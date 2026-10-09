// roc 2009-06 00607400  unit: RBX::DataModel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607400
//
// 00607400  b801000000           mov eax, 1
// 00607405  8405ccafa400         test byte ptr [0xa4afcc], al
// 0060740b  7526                 jne 0x607433
// 0060740d  d90508e88b00         fld dword ptr [0x8be808]
// 00607413  0905ccafa400         or dword ptr [0xa4afcc], eax
// 00607419  d915bcafa400         fst dword ptr [0xa4afbc]
// 0060741f  d915c0afa400         fst dword ptr [0xa4afc0]
// 00607425  d91dc4afa400         fstp dword ptr [0xa4afc4]
// 0060742b  d9e8                 fld1 
// 0060742d  d91dc8afa400         fstp dword ptr [0xa4afc8]
// 00607433  b8bcafa400           mov eax, 0xa4afbc
// 00607438  c3                   ret 
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
