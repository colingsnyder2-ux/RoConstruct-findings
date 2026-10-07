// roc 2011-06 00a3fea0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fea0
//
// 00a3fea0  b984f7d100           mov ecx, 0xd1f784
// 00a3fea5  ff258818a400         jmp dword ptr [0xa41888]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fea0 { void m(); };
extern T_func_00a3fea0 G1_func_00a3fea0;
void func_00a3fea0()
{
    G1_func_00a3fea0.m();
}
