// roc 2007-08 0077b5d0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b5d0
//
// 0077b5d0  b9d05c8c00           mov ecx, 0x8c5cd0
// 0077b5d5  e936c0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b5d0 { void m(); };
extern T_func_0077b5d0 G1_func_0077b5d0;
void func_0077b5d0()
{
    G1_func_0077b5d0.m();
}
