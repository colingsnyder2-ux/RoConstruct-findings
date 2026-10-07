// roc 2008-06 00800c10  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800c10
//
// 00800c10  b988cb9700           mov ecx, 0x97cb88
// 00800c15  e9a69fc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800c10 { void m(); };
extern T_func_00800c10 G1_func_00800c10;
void func_00800c10()
{
    G1_func_00800c10.m();
}
