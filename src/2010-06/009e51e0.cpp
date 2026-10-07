// roc 2010-06 009e51e0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e51e0
//
// 009e51e0  b9b8dbc100           mov ecx, 0xc1dbb8
// 009e51e5  e98613bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e51e0 { void m(); };
extern T_func_009e51e0 G1_func_009e51e0;
void func_009e51e0()
{
    G1_func_009e51e0.m();
}
