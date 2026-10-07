// roc 2008-06 007fb0e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb0e0
//
// 007fb0e0  b998fa9600           mov ecx, 0x96fa98
// 007fb0e5  e97687c8ff           jmp 0x483860
// auto-matched from its assembly shape

struct T_func_007fb0e0 { void m(); };
extern T_func_007fb0e0 G1_func_007fb0e0;
void func_007fb0e0()
{
    G1_func_007fb0e0.m();
}
