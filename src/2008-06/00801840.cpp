// roc 2008-06 00801840  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801840
//
// 00801840  b918e99700           mov ecx, 0x97e918
// 00801845  e900adfbff           jmp 0x7bc54a
// auto-matched from its assembly shape

struct T_func_00801840 { void m(); };
extern T_func_00801840 G1_func_00801840;
void func_00801840()
{
    G1_func_00801840.m();
}
