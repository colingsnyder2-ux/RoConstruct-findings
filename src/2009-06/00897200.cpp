// roc 2009-06 00897200  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897200
//
// 00897200  b9e032a400           mov ecx, 0xa432e0
// 00897205  e95633d3ff           jmp 0x5ca560
// auto-matched from its assembly shape

struct T_func_00897200 { void m(); };
extern T_func_00897200 G1_func_00897200;
void func_00897200()
{
    G1_func_00897200.m();
}
