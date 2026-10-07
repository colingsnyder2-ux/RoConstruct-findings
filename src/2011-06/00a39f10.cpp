// roc 2011-06 00a39f10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39f10
//
// 00a39f10  b934c2cc00           mov ecx, 0xccc234
// 00a39f15  e9f625a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39f10 { void m(); };
extern T_func_00a39f10 G1_func_00a39f10;
void func_00a39f10()
{
    G1_func_00a39f10.m();
}
