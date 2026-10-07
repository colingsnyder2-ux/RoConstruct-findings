// roc 2008-06 007ce100  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce100
//
// 007ce100  b9b83b9700           mov ecx, 0x973bb8
// 007ce105  e946b8c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce100 { void m(); };
extern T_func_007ce100 G1_func_007ce100;
void func_007ce100()
{
    G1_func_007ce100.m();
}
