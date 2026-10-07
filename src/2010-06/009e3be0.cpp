// roc 2010-06 009e3be0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3be0
//
// 009e3be0  b958b5c100           mov ecx, 0xc1b558
// 009e3be5  e966d6d0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e3be0 { void m(); };
extern T_func_009e3be0 G1_func_009e3be0;
void func_009e3be0()
{
    G1_func_009e3be0.m();
}
