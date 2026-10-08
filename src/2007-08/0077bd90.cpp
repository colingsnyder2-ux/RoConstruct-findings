// roc 2007-08 0077bd90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd90
//
// 0077bd90  b938698c00           mov ecx, 0x8c6938
// 0077bd95  e976b8c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077bd90 { void m(); };
extern T_func_0077bd90 G1_func_0077bd90;
void func_0077bd90()
{
    G1_func_0077bd90.m();
}
