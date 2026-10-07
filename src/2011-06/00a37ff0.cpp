// roc 2011-06 00a37ff0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ff0
//
// 00a37ff0  b9c882cc00           mov ecx, 0xcc82c8
// 00a37ff5  e976a3b8ff           jmp 0x5c2370
// auto-matched from its assembly shape

struct T_func_00a37ff0 { void m(); };
extern T_func_00a37ff0 G1_func_00a37ff0;
void func_00a37ff0()
{
    G1_func_00a37ff0.m();
}
