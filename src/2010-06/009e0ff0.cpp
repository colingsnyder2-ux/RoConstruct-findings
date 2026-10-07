// roc 2010-06 009e0ff0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ff0
//
// 009e0ff0  b9f06ac100           mov ecx, 0xc16af0
// 009e0ff5  e93611bbff           jmp 0x592130
// auto-matched from its assembly shape

struct T_func_009e0ff0 { void m(); };
extern T_func_009e0ff0 G1_func_009e0ff0;
void func_009e0ff0()
{
    G1_func_009e0ff0.m();
}
