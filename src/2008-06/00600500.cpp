// from server: 100% by tester
// roc 2008-06 00600500  unit: RBX::VTool::?$BoundPropGetSet  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600500
//
// 00600500  b801000000           mov eax, 1
// 00600505  840574b89700         test byte ptr [0x97b874], al
// 0060050b  7524                 jne 0x600531
// 0060050d  d905a41e8400         fld dword ptr [0x841ea4]
// 00600513  090574b89700         or dword ptr [0x97b874], eax
// 00600519  d91d68b89700         fstp dword ptr [0x97b868]
// 0060051f  d905a01e8400         fld dword ptr [0x841ea0]
// 00600525  d9156cb89700         fst dword ptr [0x97b86c]
// 0060052b  d91d70b89700         fstp dword ptr [0x97b870]
// 00600531  b868b89700           mov eax, 0x97b868
// 00600536  c3                   ret 

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
