// roc 2008-06 007d5c10  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d5c10
//
// 007d5c10  b908a29700           mov ecx, 0x97a208
// 007d5c15  e9363dc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d5c10 { void m(); };
extern T_func_007d5c10 G1_func_007d5c10;
void func_007d5c10()
{
    G1_func_007d5c10.m();
}
