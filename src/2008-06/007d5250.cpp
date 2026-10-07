// roc 2008-06 007d5250  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d5250
//
// 007d5250  b9e0979700           mov ecx, 0x9797e0
// 007d5255  e9f646c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d5250 { void m(); };
extern T_func_007d5250 G1_func_007d5250;
void func_007d5250()
{
    G1_func_007d5250.m();
}
