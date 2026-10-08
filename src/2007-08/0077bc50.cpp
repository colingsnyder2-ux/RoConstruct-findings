// roc 2007-08 0077bc50  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bc50
//
// 0077bc50  b900678c00           mov ecx, 0x8c6700
// 0077bc55  e9b6fbe3ff           jmp 0x5bb810
// auto-matched from its assembly shape

struct T_func_0077bc50 { void m(); };
extern T_func_0077bc50 G1_func_0077bc50;
void func_0077bc50()
{
    G1_func_0077bc50.m();
}
