// roc 2007-08 00779470  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779470
//
// 00779470  b940118c00           mov ecx, 0x8c1140
// 00779475  e96612deff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779470 { void m(); };
extern T_func_00779470 G1_func_00779470;
void func_00779470()
{
    G1_func_00779470.m();
}
