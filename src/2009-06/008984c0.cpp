// roc 2009-06 008984c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008984c0
//
// 008984c0  b9188aa400           mov ecx, 0xa48a18
// 008984c5  e9461eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008984c0 { void m(); };
extern T_func_008984c0 G1_func_008984c0;
void func_008984c0()
{
    G1_func_008984c0.m();
}
