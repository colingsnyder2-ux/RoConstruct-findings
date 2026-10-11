// from server: 100% by colin
// roc 2007-08 005d4cb0  unit: RBX::VTool::?$FactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4cb0
//
// 005d4cb0  b801000000           mov eax, 1
// 005d4cb5  8405746a8c00         test byte ptr [0x8c6a74], al
// 005d4cbb  7524                 jne 0x5d4ce1
// 005d4cbd  d9059cb77b00         fld dword ptr [0x7bb79c]
// 005d4cc3  0905746a8c00         or dword ptr [0x8c6a74], eax
// 005d4cc9  d91d686a8c00         fstp dword ptr [0x8c6a68]
// 005d4ccf  d90598b77b00         fld dword ptr [0x7bb798]
// 005d4cd5  d9156c6a8c00         fst dword ptr [0x8c6a6c]
// 005d4cdb  d91d706a8c00         fstp dword ptr [0x8c6a70]
// 005d4ce1  b8686a8c00           mov eax, 0x8c6a68
// 005d4ce6  c3                   ret 

struct S_005d4cb0 {
    void* f();
};

extern float G_007bb79c;
extern float G_007bb798;
extern float G_008c6a68;
extern float G_008c6a6c;
extern float G_008c6a70;
extern unsigned int G_008c6a74;

void* S_005d4cb0::f()
{
    if (!(G_008c6a74 & 1)) {
        G_008c6a68 = G_007bb79c;
        G_008c6a74 |= 1;
        G_008c6a6c = G_007bb798;
        G_008c6a70 = G_007bb798;
    }
    return &G_008c6a68;
}
