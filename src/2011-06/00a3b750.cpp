// roc 2011-06 00a3b750  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b750
//
// 00a3b750  b9e0eccc00           mov ecx, 0xccece0
// 00a3b755  e9b60da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b750 { void m(); };
extern T_func_00a3b750 G1_func_00a3b750;
void func_00a3b750()
{
    G1_func_00a3b750.m();
}
