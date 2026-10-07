// roc 2010-06 009e2df0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2df0
//
// 009e2df0  b9f09ec100           mov ecx, 0xc19ef0
// 009e2df5  e97637bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2df0 { void m(); };
extern T_func_009e2df0 G1_func_009e2df0;
void func_009e2df0()
{
    G1_func_009e2df0.m();
}
