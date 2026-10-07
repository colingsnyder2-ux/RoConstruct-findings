// roc 2008-06 007da510  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da510
//
// 007da510  b928d49700           mov ecx, 0x97d428
// 007da515  e936f4c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da510 { void m(); };
extern T_func_007da510 G1_func_007da510;
void func_007da510()
{
    G1_func_007da510.m();
}
