// roc 2008-06 007fad90  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fad90
//
// 007fad90  b9b8d99600           mov ecx, 0x96d9b8
// 007fad95  e916bec4ff           jmp 0x446bb0
// auto-matched from its assembly shape

struct T_func_007fad90 { void m(); };
extern T_func_007fad90 G1_func_007fad90;
void func_007fad90()
{
    G1_func_007fad90.m();
}
