// roc 2007-08 0077bfc0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bfc0
//
// 0077bfc0  b9d06f8c00           mov ecx, 0x8c6fd0
// 0077bfc5  e946b6c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077bfc0 { void m(); };
extern T_func_0077bfc0 G1_func_0077bfc0;
void func_0077bfc0()
{
    G1_func_0077bfc0.m();
}
