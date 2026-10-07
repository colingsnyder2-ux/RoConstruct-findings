// roc 2011-06 00a3e2a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e2a0
//
// 00a3e2a0  b9d032cd00           mov ecx, 0xcd32d0
// 00a3e2a5  e966e2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e2a0 { void m(); };
extern T_func_00a3e2a0 G1_func_00a3e2a0;
void func_00a3e2a0()
{
    G1_func_00a3e2a0.m();
}
