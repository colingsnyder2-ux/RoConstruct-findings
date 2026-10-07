// roc 2011-06 00a3fdf0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fdf0
//
// 00a3fdf0  b9a0f0d100           mov ecx, 0xd1f0a0
// 00a3fdf5  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fdf0 { void m(); };
extern T_func_00a3fdf0 G1_func_00a3fdf0;
void func_00a3fdf0()
{
    G1_func_00a3fdf0.m();
}
