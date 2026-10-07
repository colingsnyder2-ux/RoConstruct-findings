// roc 2008-06 007fe140  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe140
//
// 007fe140  b9f8699700           mov ecx, 0x9769f8
// 007fe145  e9c652daff           jmp 0x5a3410
// auto-matched from its assembly shape

struct T_func_007fe140 { void m(); };
extern T_func_007fe140 G1_func_007fe140;
void func_007fe140()
{
    G1_func_007fe140.m();
}
