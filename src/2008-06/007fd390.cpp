// roc 2008-06 007fd390  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd390
//
// 007fd390  b9e04c9700           mov ecx, 0x974ce0
// 007fd395  e94661caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd390 { void m(); };
extern T_func_007fd390 G1_func_007fd390;
void func_007fd390()
{
    G1_func_007fd390.m();
}
