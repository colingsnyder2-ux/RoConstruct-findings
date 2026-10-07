// roc 2009-06 00895dc0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895dc0
//
// 00895dc0  b9a8efa300           mov ecx, 0xa3efa8
// 00895dc5  e9469ad3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895dc0 { void m(); };
extern T_func_00895dc0 G1_func_00895dc0;
void func_00895dc0()
{
    G1_func_00895dc0.m();
}
