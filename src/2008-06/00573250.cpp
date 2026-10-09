// roc 2008-06 00573250  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573250
//
// 00573250  b801000000           mov eax, 1
// 00573255  84053c4e9700         test byte ptr [0x974e3c], al
// 0057325b  7526                 jne 0x573283
// 0057325d  d905b8888200         fld dword ptr [0x8288b8]
// 00573263  09053c4e9700         or dword ptr [0x974e3c], eax
// 00573269  d9152c4e9700         fst dword ptr [0x974e2c]
// 0057326f  d915304e9700         fst dword ptr [0x974e30]
// 00573275  d91d344e9700         fstp dword ptr [0x974e34]
// 0057327b  d9e8                 fld1 
// 0057327d  d91d384e9700         fstp dword ptr [0x974e38]
// 00573283  b82c4e9700           mov eax, 0x974e2c
// 00573288  c3                   ret 
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
