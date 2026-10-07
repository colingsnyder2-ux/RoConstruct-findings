// roc 2011-06 00a3bed0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bed0
//
// 00a3bed0  b91cfbcc00           mov ecx, 0xccfb1c
// 00a3bed5  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3bed0 { void m(); };
extern T_func_00a3bed0 G1_func_00a3bed0;
void func_00a3bed0()
{
    G1_func_00a3bed0.m();
}
