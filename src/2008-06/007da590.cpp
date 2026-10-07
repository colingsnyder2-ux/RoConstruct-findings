// roc 2008-06 007da590  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da590
//
// 007da590  b9ecd29700           mov ecx, 0x97d2ec
// 007da595  e9b6f3c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da590 { void m(); };
extern T_func_007da590 G1_func_007da590;
void func_007da590()
{
    G1_func_007da590.m();
}
