// roc 2009-06 00898a30  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a30
//
// 00898a30  b9589fa400           mov ecx, 0xa49f58
// 00898a35  e9d657d5ff           jmp 0x5ee210
// auto-matched from its assembly shape

struct T_func_00898a30 { void m(); };
extern T_func_00898a30 G1_func_00898a30;
void func_00898a30()
{
    G1_func_00898a30.m();
}
