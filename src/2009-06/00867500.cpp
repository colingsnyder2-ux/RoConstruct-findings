// roc 2009-06 00867500  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867500
//
// 00867500  b938aba400           mov ecx, 0xa4ab38
// 00867505  e946c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00867500 { void m(); };
extern T_func_00867500 G1_func_00867500;
void func_00867500()
{
    G1_func_00867500.m();
}
