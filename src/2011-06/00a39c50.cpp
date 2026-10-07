// roc 2011-06 00a39c50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c50
//
// 00a39c50  b968becc00           mov ecx, 0xccbe68
// 00a39c55  e9b628a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39c50 { void m(); };
extern T_func_00a39c50 G1_func_00a39c50;
void func_00a39c50()
{
    G1_func_00a39c50.m();
}
