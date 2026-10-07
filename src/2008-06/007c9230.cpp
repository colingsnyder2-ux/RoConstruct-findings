// roc 2008-06 007c9230  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c9230
//
// 007c9230  b990169700           mov ecx, 0x971690
// 007c9235  e91607c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c9230 { void m(); };
extern T_func_007c9230 G1_func_007c9230;
void func_007c9230()
{
    G1_func_007c9230.m();
}
