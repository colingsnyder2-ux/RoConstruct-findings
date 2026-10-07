// roc 2010-06 009e90e0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e90e0
//
// 009e90e0  b9b05dc200           mov ecx, 0xc25db0
// 009e90e5  e946ece2ff           jmp 0x817d30
// auto-matched from its assembly shape

struct T_func_009e90e0 { void m(); };
extern T_func_009e90e0 G1_func_009e90e0;
void func_009e90e0()
{
    G1_func_009e90e0.m();
}
