// roc 2009-06 008986b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008986b0
//
// 008986b0  b9e071a400           mov ecx, 0xa471e0
// 008986b5  e9561cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008986b0 { void m(); };
extern T_func_008986b0 G1_func_008986b0;
void func_008986b0()
{
    G1_func_008986b0.m();
}
