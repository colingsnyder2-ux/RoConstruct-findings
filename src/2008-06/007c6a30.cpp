// roc 2008-06 007c6a30  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c6a30
//
// 007c6a30  b950fc9600           mov ecx, 0x96fc50
// 007c6a35  e9162fc4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c6a30 { void m(); };
extern T_func_007c6a30 G1_func_007c6a30;
void func_007c6a30()
{
    G1_func_007c6a30.m();
}
