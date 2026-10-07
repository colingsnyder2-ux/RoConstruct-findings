// roc 2011-06 00a37720  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37720
//
// 00a37720  b9e835cc00           mov ecx, 0xcc35e8
// 00a37725  e916649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37720 { void m(); };
extern T_func_00a37720 G1_func_00a37720;
void func_00a37720()
{
    G1_func_00a37720.m();
}
