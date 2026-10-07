// roc 2008-06 007c7550  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7550
//
// 007c7550  b9b8029700           mov ecx, 0x9702b8
// 007c7555  e9f623c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7550 { void m(); };
extern T_func_007c7550 G1_func_007c7550;
void func_007c7550()
{
    G1_func_007c7550.m();
}
