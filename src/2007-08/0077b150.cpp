// roc 2007-08 0077b150  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b150
//
// 0077b150  b908538c00           mov ecx, 0x8c5308
// 0077b155  e966bbc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077b150 { void m(); };
extern T_func_0077b150 G1_func_0077b150;
void func_0077b150()
{
    G1_func_0077b150.m();
}
