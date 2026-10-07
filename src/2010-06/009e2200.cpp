// roc 2010-06 009e2200  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2200
//
// 009e2200  b95c91c100           mov ecx, 0xc1915c
// 009e2205  e9462da4ff           jmp 0x424f50
// auto-matched from its assembly shape

struct T_func_009e2200 { void m(); };
extern T_func_009e2200 G1_func_009e2200;
void func_009e2200()
{
    G1_func_009e2200.m();
}
