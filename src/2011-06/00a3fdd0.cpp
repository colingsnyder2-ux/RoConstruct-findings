// roc 2011-06 00a3fdd0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fdd0
//
// 00a3fdd0  b990f0d100           mov ecx, 0xd1f090
// 00a3fdd5  ff25c817a400         jmp dword ptr [0xa417c8]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fdd0 { void m(); };
extern T_func_00a3fdd0 G1_func_00a3fdd0;
void func_00a3fdd0()
{
    G1_func_00a3fdd0.m();
}
