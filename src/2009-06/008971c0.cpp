// roc 2009-06 008971c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008971c0
//
// 008971c0  b9402fa400           mov ecx, 0xa42f40
// 008971c5  e94631b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008971c0 { void m(); };
extern T_func_008971c0 G1_func_008971c0;
void func_008971c0()
{
    G1_func_008971c0.m();
}
