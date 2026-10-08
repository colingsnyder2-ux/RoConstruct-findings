// roc 2007-08 0077c380  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c380
//
// 0077c380  b978738c00           mov ecx, 0x8c7378
// 0077c385  e986b2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c380 { void m(); };
extern T_func_0077c380 G1_func_0077c380;
void func_0077c380()
{
    G1_func_0077c380.m();
}
