// roc 2009-06 00867be0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867be0
//
// 00867be0  b928b2a400           mov ecx, 0xa4b228
// 00867be5  e966bbc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00867be0 { void m(); };
extern T_func_00867be0 G1_func_00867be0;
void func_00867be0()
{
    G1_func_00867be0.m();
}
