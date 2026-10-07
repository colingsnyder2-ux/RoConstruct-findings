// roc 2011-06 00a3b260  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b260
//
// 00a3b260  b9a8dfcc00           mov ecx, 0xccdfa8
// 00a3b265  e90645c3ff           jmp 0x66f770
// auto-matched from its assembly shape

struct T_func_00a3b260 { void m(); };
extern T_func_00a3b260 G1_func_00a3b260;
void func_00a3b260()
{
    G1_func_00a3b260.m();
}
