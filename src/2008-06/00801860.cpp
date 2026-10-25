// from server: 100% by auto
// roc 2008-06 00801860  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801860
//
// 00801860  b930e99700           mov ecx, 0x97e930
// 00801865  e9c6ecf0ff           jmp 0x710530

struct T_func_00801860 { void m(); };
extern T_func_00801860 G1_func_00801860;
void func_00801860()
{
    G1_func_00801860.m();
}
