// roc 2009-06 00867c00  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867c00
//
// 00867c00  b990b1a400           mov ecx, 0xa4b190
// 00867c05  e946bbc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00867c00 { void m(); };
extern T_func_00867c00 G1_func_00867c00;
void func_00867c00()
{
    G1_func_00867c00.m();
}
