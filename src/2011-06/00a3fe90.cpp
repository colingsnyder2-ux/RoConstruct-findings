// roc 2011-06 00a3fe90  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fe90
//
// 00a3fe90  b9d4f6d100           mov ecx, 0xd1f6d4
// 00a3fe95  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fe90 { void m(); };
extern T_func_00a3fe90 G1_func_00a3fe90;
void func_00a3fe90()
{
    G1_func_00a3fe90.m();
}
