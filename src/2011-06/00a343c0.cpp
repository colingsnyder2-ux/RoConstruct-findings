// roc 2011-06 00a343c0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a343c0
//
// 00a343c0  b9a0b2cb00           mov ecx, 0xcbb2a0
// 00a343c5  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a343c0 { void m(); };
extern T_func_00a343c0 G1_func_00a343c0;
void func_00a343c0()
{
    G1_func_00a343c0.m();
}
