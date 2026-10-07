// roc 2011-06 00a3b980  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b980
//
// 00a3b980  b90cf3cc00           mov ecx, 0xccf30c
// 00a3b985  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3b980 { void m(); };
extern T_func_00a3b980 G1_func_00a3b980;
void func_00a3b980()
{
    G1_func_00a3b980.m();
}
