// roc 2009-06 00899fa0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899fa0
//
// 00899fa0  b9d8b8a400           mov ecx, 0xa4b8d8
// 00899fa5  e956f2dcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_00899fa0 { void m(); };
extern T_func_00899fa0 G1_func_00899fa0;
void func_00899fa0()
{
    G1_func_00899fa0.m();
}
