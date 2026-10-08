// roc 2007-08 0077bd80  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd80
//
// 0077bd80  b914698c00           mov ecx, 0x8c6914
// 0077bd85  e986b8c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077bd80 { void m(); };
extern T_func_0077bd80 G1_func_0077bd80;
void func_0077bd80()
{
    G1_func_0077bd80.m();
}
