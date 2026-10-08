// roc 2007-08 00778710  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778710
//
// 00778710  b9a0e58b00           mov ecx, 0x8be5a0
// 00778715  e956fdc9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778710 { void m(); };
extern T_func_00778710 G1_func_00778710;
void func_00778710()
{
    G1_func_00778710.m();
}
