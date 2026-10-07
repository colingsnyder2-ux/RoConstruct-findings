// roc 2011-06 00a3fd60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd60
//
// 00a3fd60  b9a092d100           mov ecx, 0xd192a0
// 00a3fd65  e92607ebff           jmp 0x8f0490
// auto-matched from its assembly shape

struct T_func_00a3fd60 { void m(); };
extern T_func_00a3fd60 G1_func_00a3fd60;
void func_00a3fd60()
{
    G1_func_00a3fd60.m();
}
