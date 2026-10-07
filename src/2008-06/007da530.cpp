// roc 2008-06 007da530  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da530
//
// 007da530  b99cd29700           mov ecx, 0x97d29c
// 007da535  e916f4c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da530 { void m(); };
extern T_func_007da530 G1_func_007da530;
void func_007da530()
{
    G1_func_007da530.m();
}
