// roc 2008-06 007d6040  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6040
//
// 007d6040  b930a69700           mov ecx, 0x97a630
// 007d6045  e90639c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6040 { void m(); };
extern T_func_007d6040 G1_func_007d6040;
void func_007d6040()
{
    G1_func_007d6040.m();
}
