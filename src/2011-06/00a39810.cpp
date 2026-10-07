// roc 2011-06 00a39810  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39810
//
// 00a39810  b9a8b1cc00           mov ecx, 0xccb1a8
// 00a39815  e9f62ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39810 { void m(); };
extern T_func_00a39810 G1_func_00a39810;
void func_00a39810()
{
    G1_func_00a39810.m();
}
