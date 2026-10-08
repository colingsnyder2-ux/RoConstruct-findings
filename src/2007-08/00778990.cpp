// roc 2007-08 00778990  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778990
//
// 00778990  b9c0ea8b00           mov ecx, 0x8beac0
// 00778995  e976ecc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778990 { void m(); };
extern T_func_00778990 G1_func_00778990;
void func_00778990()
{
    G1_func_00778990.m();
}
