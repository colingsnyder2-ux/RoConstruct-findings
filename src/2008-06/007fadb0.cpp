// roc 2008-06 007fadb0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fadb0
//
// 007fadb0  b9d8d79600           mov ecx, 0x96d7d8
// 007fadb5  e9d6bac4ff           jmp 0x446890
// auto-matched from its assembly shape

struct T_func_007fadb0 { void m(); };
extern T_func_007fadb0 G1_func_007fadb0;
void func_007fadb0()
{
    G1_func_007fadb0.m();
}
