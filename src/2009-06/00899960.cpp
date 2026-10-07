// roc 2009-06 00899960  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899960
//
// 00899960  b9d8b1a400           mov ecx, 0xa4b1d8
// 00899965  e996f8dcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_00899960 { void m(); };
extern T_func_00899960 G1_func_00899960;
void func_00899960()
{
    G1_func_00899960.m();
}
