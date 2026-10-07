// roc 2008-06 007fb820  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb820
//
// 007fb820  b9f8059700           mov ecx, 0x9705f8
// 007fb825  e996f3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fb820 { void m(); };
extern T_func_007fb820 G1_func_007fb820;
void func_007fb820()
{
    G1_func_007fb820.m();
}
