// roc 2011-06 00a37f10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f10
//
// 00a37f10  b9f88bcc00           mov ecx, 0xcc8bf8
// 00a37f15  e9e6c7b8ff           jmp 0x5c4700
// auto-matched from its assembly shape

struct T_func_00a37f10 { void m(); };
extern T_func_00a37f10 G1_func_00a37f10;
void func_00a37f10()
{
    G1_func_00a37f10.m();
}
