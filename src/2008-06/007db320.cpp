// roc 2008-06 007db320  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db320
//
// 007db320  b910d69700           mov ecx, 0x97d610
// 007db325  e926e6c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db320 { void m(); };
extern T_func_007db320 G1_func_007db320;
void func_007db320()
{
    G1_func_007db320.m();
}
