// roc 2009-06 008984b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008984b0
//
// 008984b0  b9e08aa400           mov ecx, 0xa48ae0
// 008984b5  e9561eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008984b0 { void m(); };
extern T_func_008984b0 G1_func_008984b0;
void func_008984b0()
{
    G1_func_008984b0.m();
}
