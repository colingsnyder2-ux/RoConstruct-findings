// roc 2011-06 00a3fe10  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fe10
//
// 00a3fe10  b950f0d100           mov ecx, 0xd1f050
// 00a3fe15  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fe10 { void m(); };
extern T_func_00a3fe10 G1_func_00a3fe10;
void func_00a3fe10()
{
    G1_func_00a3fe10.m();
}
