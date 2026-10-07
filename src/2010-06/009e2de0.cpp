// roc 2010-06 009e2de0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2de0
//
// 009e2de0  b9809fc100           mov ecx, 0xc19f80
// 009e2de5  e98637bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2de0 { void m(); };
extern T_func_009e2de0 G1_func_009e2de0;
void func_009e2de0()
{
    G1_func_009e2de0.m();
}
