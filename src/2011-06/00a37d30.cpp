// roc 2011-06 00a37d30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d30
//
// 00a37d30  b9a89fcc00           mov ecx, 0xcc9fa8
// 00a37d35  e9361bb9ff           jmp 0x5c9870
// auto-matched from its assembly shape

struct T_func_00a37d30 { void m(); };
extern T_func_00a37d30 G1_func_00a37d30;
void func_00a37d30()
{
    G1_func_00a37d30.m();
}
