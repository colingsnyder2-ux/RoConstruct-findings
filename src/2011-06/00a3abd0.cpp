// roc 2011-06 00a3abd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3abd0
//
// 00a3abd0  b920d4cc00           mov ecx, 0xccd420
// 00a3abd5  e93619a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3abd0 { void m(); };
extern T_func_00a3abd0 G1_func_00a3abd0;
void func_00a3abd0()
{
    G1_func_00a3abd0.m();
}
