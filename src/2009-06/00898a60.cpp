// roc 2009-06 00898a60  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a60
//
// 00898a60  b9889ca400           mov ecx, 0xa49c88
// 00898a65  e9c652d5ff           jmp 0x5edd30
// auto-matched from its assembly shape

struct T_func_00898a60 { void m(); };
extern T_func_00898a60 G1_func_00898a60;
void func_00898a60()
{
    G1_func_00898a60.m();
}
