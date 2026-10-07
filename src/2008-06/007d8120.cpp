// roc 2008-06 007d8120  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d8120
//
// 007d8120  b908b79700           mov ecx, 0x97b708
// 007d8125  e92618c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d8120 { void m(); };
extern T_func_007d8120 G1_func_007d8120;
void func_007d8120()
{
    G1_func_007d8120.m();
}
