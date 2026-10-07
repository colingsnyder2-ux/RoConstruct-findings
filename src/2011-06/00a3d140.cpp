// roc 2011-06 00a3d140  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d140
//
// 00a3d140  b9f819cd00           mov ecx, 0xcd19f8
// 00a3d145  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3d140 { void m(); };
extern T_func_00a3d140 G1_func_00a3d140;
void func_00a3d140()
{
    G1_func_00a3d140.m();
}
