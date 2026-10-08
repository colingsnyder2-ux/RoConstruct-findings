// roc 2007-08 0077c7f0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c7f0
//
// 0077c7f0  b9fc7c8c00           mov ecx, 0x8c7cfc
// 0077c7f5  e916aec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c7f0 { void m(); };
extern T_func_0077c7f0 G1_func_0077c7f0;
void func_0077c7f0()
{
    G1_func_0077c7f0.m();
}
