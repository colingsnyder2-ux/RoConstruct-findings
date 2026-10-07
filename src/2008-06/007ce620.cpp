// roc 2008-06 007ce620  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce620
//
// 007ce620  b9083f9700           mov ecx, 0x973f08
// 007ce625  e926b3c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce620 { void m(); };
extern T_func_007ce620 G1_func_007ce620;
void func_007ce620()
{
    G1_func_007ce620.m();
}
