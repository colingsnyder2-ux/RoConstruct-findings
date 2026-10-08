// roc 2007-08 0077c550  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c550
//
// 0077c550  b9487a8c00           mov ecx, 0x8c7a48
// 0077c555  e966a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c550 { void m(); };
extern T_func_0077c550 G1_func_0077c550;
void func_0077c550()
{
    G1_func_0077c550.m();
}
