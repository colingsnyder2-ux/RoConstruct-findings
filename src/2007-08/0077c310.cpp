// roc 2007-08 0077c310  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c310
//
// 0077c310  b910708c00           mov ecx, 0x8c7010
// 0077c315  e9a6a9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c310 { void m(); };
extern T_func_0077c310 G1_func_0077c310;
void func_0077c310()
{
    G1_func_0077c310.m();
}
