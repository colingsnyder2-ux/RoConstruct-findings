// roc 2009-06 0085aaa0  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085aaa0
//
// 0085aaa0  b948dfa300           mov ecx, 0xa3df48
// 0085aaa5  e9a68cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085aaa0 { void m(); };
extern T_func_0085aaa0 G1_func_0085aaa0;
void func_0085aaa0()
{
    G1_func_0085aaa0.m();
}
