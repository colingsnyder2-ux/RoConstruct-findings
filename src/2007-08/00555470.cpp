// from server: 100% by colin
// roc 2007-08 00555470  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555470
//
// 00555470  b801000000           mov eax, 1
// 00555475  8405141e8c00         test byte ptr [0x8c1e14], al
// 0055547b  7526                 jne 0x5554a3
// 0055547d  d90558f77900         fld dword ptr [0x79f758]
// 00555483  0905141e8c00         or dword ptr [0x8c1e14], eax
// 00555489  d915041e8c00         fst dword ptr [0x8c1e04]
// 0055548f  d915081e8c00         fst dword ptr [0x8c1e08]
// 00555495  d91d0c1e8c00         fstp dword ptr [0x8c1e0c]
// 0055549b  d9e8                 fld1 
// 0055549d  d91d101e8c00         fstp dword ptr [0x8c1e10]
// 005554a3  b8041e8c00           mov eax, 0x8c1e04
// 005554a8  c3                   ret 

extern float G_79f758;
extern float G_8c1e04;
extern float G_8c1e08;
extern float G_8c1e0c;
extern float G_8c1e10;
extern unsigned int G_8c1e14;

float* func_00555470()
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
