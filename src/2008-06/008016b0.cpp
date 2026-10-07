// roc 2008-06 008016b0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008016b0
//
// 008016b0  b96ce19700           mov ecx, 0x97e16c
// 008016b5  e9569fecff           jmp 0x6cb610
// auto-matched from its assembly shape

struct T_func_008016b0 { void m(); };
extern T_func_008016b0 G1_func_008016b0;
void func_008016b0()
{
    G1_func_008016b0.m();
}
