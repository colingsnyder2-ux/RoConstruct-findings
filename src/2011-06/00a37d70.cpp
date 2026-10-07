// roc 2011-06 00a37d70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d70
//
// 00a37d70  b9089dcc00           mov ecx, 0xcc9d08
// 00a37d75  e9a60fb9ff           jmp 0x5c8d20
// auto-matched from its assembly shape

struct T_func_00a37d70 { void m(); };
extern T_func_00a37d70 G1_func_00a37d70;
void func_00a37d70()
{
    G1_func_00a37d70.m();
}
