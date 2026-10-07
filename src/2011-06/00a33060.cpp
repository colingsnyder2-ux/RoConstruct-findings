// roc 2011-06 00a33060  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33060
//
// 00a33060  b9886dcb00           mov ecx, 0xcb6d88
// 00a33065  e9a694a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33060 { void m(); };
extern T_func_00a33060 G1_func_00a33060;
void func_00a33060()
{
    G1_func_00a33060.m();
}
