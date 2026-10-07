// roc 2008-06 007fe190  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe190
//
// 007fe190  b988699700           mov ecx, 0x976988
// 007fe195  e97652daff           jmp 0x5a3410
// auto-matched from its assembly shape

struct T_func_007fe190 { void m(); };
extern T_func_007fe190 G1_func_007fe190;
void func_007fe190()
{
    G1_func_007fe190.m();
}
