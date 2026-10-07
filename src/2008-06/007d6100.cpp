// roc 2008-06 007d6100  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6100
//
// 007d6100  b97ca39700           mov ecx, 0x97a37c
// 007d6105  e94638c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6100 { void m(); };
extern T_func_007d6100 G1_func_007d6100;
void func_007d6100()
{
    G1_func_007d6100.m();
}
