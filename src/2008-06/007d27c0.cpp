// roc 2008-06 007d27c0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d27c0
//
// 007d27c0  b908629700           mov ecx, 0x976208
// 007d27c5  e98671c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d27c0 { void m(); };
extern T_func_007d27c0 G1_func_007d27c0;
void func_007d27c0()
{
    G1_func_007d27c0.m();
}
