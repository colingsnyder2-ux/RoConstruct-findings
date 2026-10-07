// roc 2010-06 009e3e10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3e10
//
// 009e3e10  b988bec100           mov ecx, 0xc1be88
// 009e3e15  e95627bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3e10 { void m(); };
extern T_func_009e3e10 G1_func_009e3e10;
void func_009e3e10()
{
    G1_func_009e3e10.m();
}
