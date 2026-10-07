// roc 2009-06 00866400  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00866400
//
// 00866400  b9b8a8a400           mov ecx, 0xa4a8b8
// 00866405  e946d3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00866400 { void m(); };
extern T_func_00866400 G1_func_00866400;
void func_00866400()
{
    G1_func_00866400.m();
}
