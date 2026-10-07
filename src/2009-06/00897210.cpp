// roc 2009-06 00897210  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897210
//
// 00897210  b9f031a400           mov ecx, 0xa431f0
// 00897215  e9a631d3ff           jmp 0x5ca3c0
// auto-matched from its assembly shape

struct T_func_00897210 { void m(); };
extern T_func_00897210 G1_func_00897210;
void func_00897210()
{
    G1_func_00897210.m();
}
