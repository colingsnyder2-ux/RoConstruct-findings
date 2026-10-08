// roc 2007-08 0077c7c0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c7c0
//
// 0077c7c0  b9bc7e8c00           mov ecx, 0x8c7ebc
// 0077c7c5  e946aec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c7c0 { void m(); };
extern T_func_0077c7c0 G1_func_0077c7c0;
void func_0077c7c0()
{
    G1_func_0077c7c0.m();
}
