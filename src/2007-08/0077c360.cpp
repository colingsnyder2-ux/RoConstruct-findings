// roc 2007-08 0077c360  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c360
//
// 0077c360  b9c0758c00           mov ecx, 0x8c75c0
// 0077c365  e9a6b2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c360 { void m(); };
extern T_func_0077c360 G1_func_0077c360;
void func_0077c360()
{
    G1_func_0077c360.m();
}
