// roc 2007-08 007796a0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007796a0
//
// 007796a0  b9cc138c00           mov ecx, 0x8c13cc
// 007796a5  e966dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007796a0 { void m(); };
extern T_func_007796a0 G1_func_007796a0;
void func_007796a0()
{
    G1_func_007796a0.m();
}
