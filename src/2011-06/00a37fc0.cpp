// roc 2011-06 00a37fc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37fc0
//
// 00a37fc0  b9c084cc00           mov ecx, 0xcc84c0
// 00a37fc5  e906acb8ff           jmp 0x5c2bd0
// auto-matched from its assembly shape

struct T_func_00a37fc0 { void m(); };
extern T_func_00a37fc0 G1_func_00a37fc0;
void func_00a37fc0()
{
    G1_func_00a37fc0.m();
}
