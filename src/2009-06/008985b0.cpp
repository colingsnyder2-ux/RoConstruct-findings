// roc 2009-06 008985b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008985b0
//
// 008985b0  b9607ea400           mov ecx, 0xa47e60
// 008985b5  e9561db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008985b0 { void m(); };
extern T_func_008985b0 G1_func_008985b0;
void func_008985b0()
{
    G1_func_008985b0.m();
}
