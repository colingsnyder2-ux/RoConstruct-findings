// roc 2011-06 00a37d90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d90
//
// 00a37d90  b9b89bcc00           mov ecx, 0xcc9bb8
// 00a37d95  e9b609b9ff           jmp 0x5c8750
// auto-matched from its assembly shape

struct T_func_00a37d90 { void m(); };
extern T_func_00a37d90 G1_func_00a37d90;
void func_00a37d90()
{
    G1_func_00a37d90.m();
}
