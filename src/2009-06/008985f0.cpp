// roc 2009-06 008985f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008985f0
//
// 008985f0  b9407ba400           mov ecx, 0xa47b40
// 008985f5  e9161db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008985f0 { void m(); };
extern T_func_008985f0 G1_func_008985f0;
void func_008985f0()
{
    G1_func_008985f0.m();
}
