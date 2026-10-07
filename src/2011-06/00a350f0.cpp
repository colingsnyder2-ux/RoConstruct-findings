// roc 2011-06 00a350f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a350f0
//
// 00a350f0  b928c0cb00           mov ecx, 0xcbc028
// 00a350f5  e9468a9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a350f0 { void m(); };
extern T_func_00a350f0 G1_func_00a350f0;
void func_00a350f0()
{
    G1_func_00a350f0.m();
}
