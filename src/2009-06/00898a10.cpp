// roc 2009-06 00898a10  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a10
//
// 00898a10  b938a1a400           mov ecx, 0xa4a138
// 00898a15  e9265cd5ff           jmp 0x5ee640
// auto-matched from its assembly shape

struct T_func_00898a10 { void m(); };
extern T_func_00898a10 G1_func_00898a10;
void func_00898a10()
{
    G1_func_00898a10.m();
}
