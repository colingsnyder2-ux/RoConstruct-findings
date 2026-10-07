// roc 2009-06 00894980  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894980
//
// 00894980  b928b0a300           mov ecx, 0xa3b028
// 00894985  e91645bbff           jmp 0x448ea0
// auto-matched from its assembly shape

struct T_func_00894980 { void m(); };
extern T_func_00894980 G1_func_00894980;
void func_00894980()
{
    G1_func_00894980.m();
}
