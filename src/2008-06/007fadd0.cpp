// roc 2008-06 007fadd0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fadd0
//
// 007fadd0  b9f8d59600           mov ecx, 0x96d5f8
// 007fadd5  e996b7c4ff           jmp 0x446570
// auto-matched from its assembly shape

struct T_func_007fadd0 { void m(); };
extern T_func_007fadd0 G1_func_007fadd0;
void func_007fadd0()
{
    G1_func_007fadd0.m();
}
