// roc 2007-08 0077c560  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c560
//
// 0077c560  b9b8798c00           mov ecx, 0x8c79b8
// 0077c565  e956a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c560 { void m(); };
extern T_func_0077c560 G1_func_0077c560;
void func_0077c560()
{
    G1_func_0077c560.m();
}
