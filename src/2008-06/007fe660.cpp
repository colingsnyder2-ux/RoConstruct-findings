// roc 2008-06 007fe660  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe660
//
// 007fe660  b918769700           mov ecx, 0x977618
// 007fe665  e956c5c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe660 { void m(); };
extern T_func_007fe660 G1_func_007fe660;
void func_007fe660()
{
    G1_func_007fe660.m();
}
