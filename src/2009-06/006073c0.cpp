// roc 2009-06 006073c0  unit: RBX::DataModel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006073c0
//
// 006073c0  b801000000           mov eax, 1
// 006073c5  8405b8afa400         test byte ptr [0xa4afb8], al
// 006073cb  7526                 jne 0x6073f3
// 006073cd  d905e0a38c00         fld dword ptr [0x8ca3e0]
// 006073d3  0905b8afa400         or dword ptr [0xa4afb8], eax
// 006073d9  d915a8afa400         fst dword ptr [0xa4afa8]
// 006073df  d915acafa400         fst dword ptr [0xa4afac]
// 006073e5  d91db0afa400         fstp dword ptr [0xa4afb0]
// 006073eb  d9e8                 fld1 
// 006073ed  d91db4afa400         fstp dword ptr [0xa4afb4]
// 006073f3  b8a8afa400           mov eax, 0xa4afa8
// 006073f8  c3                   ret 
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
