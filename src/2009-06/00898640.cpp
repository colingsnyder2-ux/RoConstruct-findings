// roc 2009-06 00898640  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898640
//
// 00898640  b95877a400           mov ecx, 0xa47758
// 00898645  e9c61cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898640 { void m(); };
extern T_func_00898640 G1_func_00898640;
void func_00898640()
{
    G1_func_00898640.m();
}
