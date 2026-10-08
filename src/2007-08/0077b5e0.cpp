// roc 2007-08 0077b5e0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b5e0
//
// 0077b5e0  b9205d8c00           mov ecx, 0x8c5d20
// 0077b5e5  e926c0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b5e0 { void m(); };
extern T_func_0077b5e0 G1_func_0077b5e0;
void func_0077b5e0()
{
    G1_func_0077b5e0.m();
}
