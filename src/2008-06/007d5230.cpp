// roc 2008-06 007d5230  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d5230
//
// 007d5230  b920989700           mov ecx, 0x979820
// 007d5235  e91647c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d5230 { void m(); };
extern T_func_007d5230 G1_func_007d5230;
void func_007d5230()
{
    G1_func_007d5230.m();
}
