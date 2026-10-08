// roc 2007-08 0077b060  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b060
//
// 0077b060  b930528c00           mov ecx, 0x8c5230
// 0077b065  e9a6c5c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b060 { void m(); };
extern T_func_0077b060 G1_func_0077b060;
void func_0077b060()
{
    G1_func_0077b060.m();
}
