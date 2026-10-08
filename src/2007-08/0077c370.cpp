// roc 2007-08 0077c370  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c370
//
// 0077c370  b900778c00           mov ecx, 0x8c7700
// 0077c375  e996b2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c370 { void m(); };
extern T_func_0077c370 G1_func_0077c370;
void func_0077c370()
{
    G1_func_0077c370.m();
}
