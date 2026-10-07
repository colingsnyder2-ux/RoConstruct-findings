// roc 2009-06 0086c220  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c220
//
// 0086c220  b9b0cda400           mov ecx, 0xa4cdb0
// 0086c225  e92675c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c220 { void m(); };
extern T_func_0086c220 G1_func_0086c220;
void func_0086c220()
{
    G1_func_0086c220.m();
}
