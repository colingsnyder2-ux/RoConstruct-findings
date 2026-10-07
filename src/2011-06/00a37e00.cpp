// roc 2011-06 00a37e00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e00
//
// 00a37e00  b92097cc00           mov ecx, 0xcc9720
// 00a37e05  e9d6f5b8ff           jmp 0x5c73e0
// auto-matched from its assembly shape

struct T_func_00a37e00 { void m(); };
extern T_func_00a37e00 G1_func_00a37e00;
void func_00a37e00()
{
    G1_func_00a37e00.m();
}
