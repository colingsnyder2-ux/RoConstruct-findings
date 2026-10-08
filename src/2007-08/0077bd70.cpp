// roc 2007-08 0077bd70  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd70
//
// 0077bd70  b9286a8c00           mov ecx, 0x8c6a28
// 0077bd75  e996b8c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077bd70 { void m(); };
extern T_func_0077bd70 G1_func_0077bd70;
void func_0077bd70()
{
    G1_func_0077bd70.m();
}
