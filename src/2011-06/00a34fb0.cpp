// roc 2011-06 00a34fb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34fb0
//
// 00a34fb0  b968bfcb00           mov ecx, 0xcbbf68
// 00a34fb5  e95675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34fb0 { void m(); };
extern T_func_00a34fb0 G1_func_00a34fb0;
void func_00a34fb0()
{
    G1_func_00a34fb0.m();
}
