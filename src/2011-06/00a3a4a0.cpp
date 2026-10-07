// roc 2011-06 00a3a4a0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a4a0
//
// 00a3a4a0  b9f4c9cc00           mov ecx, 0xccc9f4
// 00a3a4a5  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3a4a0 { void m(); };
extern T_func_00a3a4a0 G1_func_00a3a4a0;
void func_00a3a4a0()
{
    G1_func_00a3a4a0.m();
}
