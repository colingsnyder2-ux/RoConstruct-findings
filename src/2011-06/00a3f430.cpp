// roc 2011-06 00a3f430  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f430
//
// 00a3f430  b9184fcd00           mov ecx, 0xcd4f18
// 00a3f435  e9d6d0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f430 { void m(); };
extern T_func_00a3f430 G1_func_00a3f430;
void func_00a3f430()
{
    G1_func_00a3f430.m();
}
