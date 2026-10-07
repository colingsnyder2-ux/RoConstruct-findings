// roc 2008-06 007fe090  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe090
//
// 007fe090  b910679700           mov ecx, 0x976710
// 007fe095  e9e613daff           jmp 0x59f480
// auto-matched from its assembly shape

struct T_func_007fe090 { void m(); };
extern T_func_007fe090 G1_func_007fe090;
void func_007fe090()
{
    G1_func_007fe090.m();
}
