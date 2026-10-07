// roc 2008-06 007c7570  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7570
//
// 007c7570  b920059700           mov ecx, 0x970520
// 007c7575  e9d623c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7570 { void m(); };
extern T_func_007c7570 G1_func_007c7570;
void func_007c7570()
{
    G1_func_007c7570.m();
}
