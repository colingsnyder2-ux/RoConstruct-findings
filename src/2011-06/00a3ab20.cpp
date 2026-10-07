// roc 2011-06 00a3ab20  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ab20
//
// 00a3ab20  b9e8d5cc00           mov ecx, 0xccd5e8
// 00a3ab25  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3ab20 { void m(); };
extern T_func_00a3ab20 G1_func_00a3ab20;
void func_00a3ab20()
{
    G1_func_00a3ab20.m();
}
