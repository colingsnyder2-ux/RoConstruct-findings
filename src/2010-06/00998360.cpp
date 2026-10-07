// roc 2010-06 00998360  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998360
//
// 00998360  b91897c100           mov ecx, 0xc19718
// 00998365  e956aeb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998360 { void m(); };
extern T_func_00998360 G1_func_00998360;
void func_00998360()
{
    G1_func_00998360.m();
}
