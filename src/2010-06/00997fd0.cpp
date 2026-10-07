// roc 2010-06 00997fd0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997fd0
//
// 00997fd0  b91895c100           mov ecx, 0xc19518
// 00997fd5  e9e6b1b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997fd0 { void m(); };
extern T_func_00997fd0 G1_func_00997fd0;
void func_00997fd0()
{
    G1_func_00997fd0.m();
}
