// roc 2009-06 008999b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008999b0
//
// 008999b0  b918b1a400           mov ecx, 0xa4b118
// 008999b5  e946f8dcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_008999b0 { void m(); };
extern T_func_008999b0 G1_func_008999b0;
void func_008999b0()
{
    G1_func_008999b0.m();
}
