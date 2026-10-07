// roc 2011-06 00a37df0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37df0
//
// 00a37df0  b9c897cc00           mov ecx, 0xcc97c8
// 00a37df5  e996f8b8ff           jmp 0x5c7690
// auto-matched from its assembly shape

struct T_func_00a37df0 { void m(); };
extern T_func_00a37df0 G1_func_00a37df0;
void func_00a37df0()
{
    G1_func_00a37df0.m();
}
