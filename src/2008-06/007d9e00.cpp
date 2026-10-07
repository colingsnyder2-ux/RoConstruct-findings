// roc 2008-06 007d9e00  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9e00
//
// 007d9e00  b910ca9700           mov ecx, 0x97ca10
// 007d9e05  e946fbc2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9e00 { void m(); };
extern T_func_007d9e00 G1_func_007d9e00;
void func_007d9e00()
{
    G1_func_007d9e00.m();
}
