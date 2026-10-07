// roc 2011-06 00a3f060  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f060
//
// 00a3f060  b99045cd00           mov ecx, 0xcd4590
// 00a3f065  e9a6d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f060 { void m(); };
extern T_func_00a3f060 G1_func_00a3f060;
void func_00a3f060()
{
    G1_func_00a3f060.m();
}
