// roc 2008-06 007d5c30  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d5c30
//
// 007d5c30  b9c8a19700           mov ecx, 0x97a1c8
// 007d5c35  e9163dc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d5c30 { void m(); };
extern T_func_007d5c30 G1_func_007d5c30;
void func_007d5c30()
{
    G1_func_007d5c30.m();
}
