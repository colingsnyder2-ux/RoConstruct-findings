// roc 2007-08 007774b0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007774b0
//
// 007774b0  b928b18b00           mov ecx, 0x8bb128
// 007774b5  e95601caff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007774b0 { void m(); };
extern T_func_007774b0 G1_func_007774b0;
void func_007774b0()
{
    G1_func_007774b0.m();
}
