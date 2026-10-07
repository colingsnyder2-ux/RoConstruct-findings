// roc 2008-06 007da570  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da570
//
// 007da570  b94cd29700           mov ecx, 0x97d24c
// 007da575  e9d6f3c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da570 { void m(); };
extern T_func_007da570 G1_func_007da570;
void func_007da570()
{
    G1_func_007da570.m();
}
