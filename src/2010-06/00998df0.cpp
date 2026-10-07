// roc 2010-06 00998df0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998df0
//
// 00998df0  b9b897c100           mov ecx, 0xc197b8
// 00998df5  e9c6a3b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998df0 { void m(); };
extern T_func_00998df0 G1_func_00998df0;
void func_00998df0()
{
    G1_func_00998df0.m();
}
