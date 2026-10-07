// roc 2011-06 00a3af60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3af60
//
// 00a3af60  b918decc00           mov ecx, 0xccde18
// 00a3af65  e9a615a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3af60 { void m(); };
extern T_func_00a3af60 G1_func_00a3af60;
void func_00a3af60()
{
    G1_func_00a3af60.m();
}
