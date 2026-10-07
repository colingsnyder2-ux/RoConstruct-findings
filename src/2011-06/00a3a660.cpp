// roc 2011-06 00a3a660  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a660
//
// 00a3a660  b908cccc00           mov ecx, 0xcccc08
// 00a3a665  e9865fc0ff           jmp 0x6405f0
// auto-matched from its assembly shape

struct T_func_00a3a660 { void m(); };
extern T_func_00a3a660 G1_func_00a3a660;
void func_00a3a660()
{
    G1_func_00a3a660.m();
}
