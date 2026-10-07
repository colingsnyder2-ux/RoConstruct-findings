// roc 2008-06 007ce660  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce660
//
// 007ce660  b9403e9700           mov ecx, 0x973e40
// 007ce665  e9e6b2c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce660 { void m(); };
extern T_func_007ce660 G1_func_007ce660;
void func_007ce660()
{
    G1_func_007ce660.m();
}
