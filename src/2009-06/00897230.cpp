// roc 2009-06 00897230  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897230
//
// 00897230  b90830a400           mov ecx, 0xa43008
// 00897235  e9a638d3ff           jmp 0x5caae0
// auto-matched from its assembly shape

struct T_func_00897230 { void m(); };
extern T_func_00897230 G1_func_00897230;
void func_00897230()
{
    G1_func_00897230.m();
}
