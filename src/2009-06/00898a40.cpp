// roc 2009-06 00898a40  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a40
//
// 00898a40  b9689ea400           mov ecx, 0xa49e68
// 00898a45  e92656d5ff           jmp 0x5ee070
// auto-matched from its assembly shape

struct T_func_00898a40 { void m(); };
extern T_func_00898a40 G1_func_00898a40;
void func_00898a40()
{
    G1_func_00898a40.m();
}
