// roc 2008-06 007c7590  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7590
//
// 007c7590  b9a0049700           mov ecx, 0x9704a0
// 007c7595  e9b623c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7590 { void m(); };
extern T_func_007c7590 G1_func_007c7590;
void func_007c7590()
{
    G1_func_007c7590.m();
}
