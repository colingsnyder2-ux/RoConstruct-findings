// roc 2009-06 00866420  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00866420
//
// 00866420  b984a8a400           mov ecx, 0xa4a884
// 00866425  e926d3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00866420 { void m(); };
extern T_func_00866420 G1_func_00866420;
void func_00866420()
{
    G1_func_00866420.m();
}
