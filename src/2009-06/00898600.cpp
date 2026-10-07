// roc 2009-06 00898600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898600
//
// 00898600  b9787aa400           mov ecx, 0xa47a78
// 00898605  e9061db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898600 { void m(); };
extern T_func_00898600 G1_func_00898600;
void func_00898600()
{
    G1_func_00898600.m();
}
