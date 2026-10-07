// roc 2011-06 00a3f040  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f040
//
// 00a3f040  b92046cd00           mov ecx, 0xcd4620
// 00a3f045  e9c6d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f040 { void m(); };
extern T_func_00a3f040 G1_func_00a3f040;
void func_00a3f040()
{
    G1_func_00a3f040.m();
}
