// roc 2008-06 007fab80  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fab80
//
// 007fab80  b9d8d19600           mov ecx, 0x96d1d8
// 007fab85  e93600c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fab80 { void m(); };
extern T_func_007fab80 G1_func_007fab80;
void func_007fab80()
{
    G1_func_007fab80.m();
}
