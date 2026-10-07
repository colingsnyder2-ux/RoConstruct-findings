// roc 2009-06 00897660  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897660
//
// 00897660  b9a841a400           mov ecx, 0xa441a8
// 00897665  e9a62cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00897660 { void m(); };
extern T_func_00897660 G1_func_00897660;
void func_00897660()
{
    G1_func_00897660.m();
}
