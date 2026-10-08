// roc 2007-08 0077a530  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a530
//
// 0077a530  b9d02e8c00           mov ecx, 0x8c2ed0
// 0077a535  e9d6d0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a530 { void m(); };
extern T_func_0077a530 G1_func_0077a530;
void func_0077a530()
{
    G1_func_0077a530.m();
}
