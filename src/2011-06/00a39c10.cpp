// roc 2011-06 00a39c10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c10
//
// 00a39c10  b998becc00           mov ecx, 0xccbe98
// 00a39c15  e9a634a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39c10 { void m(); };
extern T_func_00a39c10 G1_func_00a39c10;
void func_00a39c10()
{
    G1_func_00a39c10.m();
}
