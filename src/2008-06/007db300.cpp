// roc 2008-06 007db300  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db300
//
// 007db300  b9e4d69700           mov ecx, 0x97d6e4
// 007db305  e946e6c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db300 { void m(); };
extern T_func_007db300 G1_func_007db300;
void func_007db300()
{
    G1_func_007db300.m();
}
