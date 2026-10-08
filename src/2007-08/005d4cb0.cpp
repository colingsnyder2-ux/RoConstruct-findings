// from server: 87% by colin
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

struct S {
    static float* f();
};

float* S::f()
{
    static int init = 0;
    static float a;
    static float b;
    static float c;
    if (!(init & 1)) {
        init |= 1;
        a = *(float*)0x7bb79c;
        b = *(float*)0x7bb798;
        c = b;
    }
    return &a;
}
