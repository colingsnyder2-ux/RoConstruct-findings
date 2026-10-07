// roc 2009-06 008984e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008984e0
//
// 008984e0  b98888a400           mov ecx, 0xa48888
// 008984e5  e9261eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008984e0 { void m(); };
extern T_func_008984e0 G1_func_008984e0;
void func_008984e0()
{
    G1_func_008984e0.m();
}
