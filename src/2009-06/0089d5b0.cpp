// roc 2009-06 0089d5b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d5b0
//
// 0089d5b0  b9c826a500           mov ecx, 0xa526c8
// 0089d5b5  e95cf1faff           jmp 0x84c716
// auto-matched from its assembly shape

struct T_func_0089d5b0 { void m(); };
extern T_func_0089d5b0 G1_func_0089d5b0;
void func_0089d5b0()
{
    G1_func_0089d5b0.m();
}
