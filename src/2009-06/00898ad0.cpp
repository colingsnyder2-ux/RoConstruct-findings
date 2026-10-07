// roc 2009-06 00898ad0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898ad0
//
// 00898ad0  b9f895a400           mov ecx, 0xa495f8
// 00898ad5  e94648d5ff           jmp 0x5ed320
// auto-matched from its assembly shape

struct T_func_00898ad0 { void m(); };
extern T_func_00898ad0 G1_func_00898ad0;
void func_00898ad0()
{
    G1_func_00898ad0.m();
}
