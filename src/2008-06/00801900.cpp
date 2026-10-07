// roc 2008-06 00801900  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801900
//
// 00801900  b9a8f09700           mov ecx, 0x97f0a8
// 00801905  e916b8f6ff           jmp 0x76d120
// auto-matched from its assembly shape

struct T_func_00801900 { void m(); };
extern T_func_00801900 G1_func_00801900;
void func_00801900()
{
    G1_func_00801900.m();
}
