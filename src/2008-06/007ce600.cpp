// roc 2008-06 007ce600  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce600
//
// 007ce600  b9c83e9700           mov ecx, 0x973ec8
// 007ce605  e946b3c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce600 { void m(); };
extern T_func_007ce600 G1_func_007ce600;
void func_007ce600()
{
    G1_func_007ce600.m();
}
