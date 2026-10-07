// roc 2011-06 00a3ab10  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ab10
//
// 00a3ab10  b9c0d5cc00           mov ecx, 0xccd5c0
// 00a3ab15  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3ab10 { void m(); };
extern T_func_00a3ab10 G1_func_00a3ab10;
void func_00a3ab10()
{
    G1_func_00a3ab10.m();
}
