// roc 2007-08 00778730  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778730
//
// 00778730  b9e4e48b00           mov ecx, 0x8be4e4
// 00778735  e9d6eec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778730 { void m(); };
extern T_func_00778730 G1_func_00778730;
void func_00778730()
{
    G1_func_00778730.m();
}
