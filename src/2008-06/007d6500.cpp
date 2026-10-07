// roc 2008-06 007d6500  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6500
//
// 007d6500  b9c0a89700           mov ecx, 0x97a8c0
// 007d6505  e94634c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6500 { void m(); };
extern T_func_007d6500 G1_func_007d6500;
void func_007d6500()
{
    G1_func_007d6500.m();
}
