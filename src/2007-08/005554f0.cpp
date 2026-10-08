// from server: 100% by colin
// roc 2007-08 005554f0  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005554f0
//
// 005554f0  b801000000           mov eax, 1
// 005554f5  84053c1e8c00         test byte ptr [0x8c1e3c], al
// 005554fb  7526                 jne 0x555523
// 005554fd  d905e00b7a00         fld dword ptr [0x7a0be0]
// 00555503  09053c1e8c00         or dword ptr [0x8c1e3c], eax
// 00555509  d9152c1e8c00         fst dword ptr [0x8c1e2c]
// 0055550f  d915301e8c00         fst dword ptr [0x8c1e30]
// 00555515  d91d341e8c00         fstp dword ptr [0x8c1e34]
// 0055551b  d9e8                 fld1 
// 0055551d  d91d381e8c00         fstp dword ptr [0x8c1e38]
// 00555523  b82c1e8c00           mov eax, 0x8c1e2c
// 00555528  c3                   ret 

extern float G_7a0be0;
extern float G_8c1e2c;
extern float G_8c1e30;
extern float G_8c1e34;
extern float G_8c1e38;
extern unsigned int G_8c1e3c;

float* getValue()
{
    if (!(G_8c1e3c & 1))
    {
        G_8c1e3c |= 1;
        G_8c1e2c = G_7a0be0;
        G_8c1e30 = G_7a0be0;
        G_8c1e34 = G_7a0be0;
        G_8c1e38 = 1.0f;
    }
    return &G_8c1e2c;
}
