// roc 2011-06 00a37630  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37630
//
// 00a37630  b99042cc00           mov ecx, 0xcc4290
// 00a37635  e906659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37630 { void m(); };
extern T_func_00a37630 G1_func_00a37630;
void func_00a37630()
{
    G1_func_00a37630.m();
}
