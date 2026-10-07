// roc 2008-06 007fe880  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe880
//
// 007fe880  b910879700           mov ecx, 0x978710
// 007fe885  e936c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe880 { void m(); };
extern T_func_007fe880 G1_func_007fe880;
void func_007fe880()
{
    G1_func_007fe880.m();
}
