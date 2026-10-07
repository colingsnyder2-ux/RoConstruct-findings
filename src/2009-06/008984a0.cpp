// roc 2009-06 008984a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008984a0
//
// 008984a0  b9a88ba400           mov ecx, 0xa48ba8
// 008984a5  e9661eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008984a0 { void m(); };
extern T_func_008984a0 G1_func_008984a0;
void func_008984a0()
{
    G1_func_008984a0.m();
}
