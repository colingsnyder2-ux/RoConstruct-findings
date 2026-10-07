// roc 2009-06 00898a50  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a50
//
// 00898a50  b9789da400           mov ecx, 0xa49d78
// 00898a55  e97654d5ff           jmp 0x5eded0
// auto-matched from its assembly shape

struct T_func_00898a50 { void m(); };
extern T_func_00898a50 G1_func_00898a50;
void func_00898a50()
{
    G1_func_00898a50.m();
}
