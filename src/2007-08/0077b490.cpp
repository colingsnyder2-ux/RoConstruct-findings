// roc 2007-08 0077b490  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b490
//
// 0077b490  b9f0598c00           mov ecx, 0x8c59f0
// 0077b495  e976c1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b490 { void m(); };
extern T_func_0077b490 G1_func_0077b490;
void func_0077b490()
{
    G1_func_0077b490.m();
}
