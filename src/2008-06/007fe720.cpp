// roc 2008-06 007fe720  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe720
//
// 007fe720  b9787e9700           mov ecx, 0x977e78
// 007fe725  e996c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe720 { void m(); };
extern T_func_007fe720 G1_func_007fe720;
void func_007fe720()
{
    G1_func_007fe720.m();
}
