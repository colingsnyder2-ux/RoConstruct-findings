// roc 2007-08 0077ae80  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ae80
//
// 0077ae80  b9b84c8c00           mov ecx, 0x8c4cb8
// 0077ae85  e986c7c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077ae80 { void m(); };
extern T_func_0077ae80 G1_func_0077ae80;
void func_0077ae80()
{
    G1_func_0077ae80.m();
}
