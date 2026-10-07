// roc 2011-06 00a2ea20  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea20
//
// 00a2ea20  b9445dcd00           mov ecx, 0xcd5d44
// 00a2ea25  e9f6d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea20 { void m(); };
extern T_func_00a2ea20 G1_func_00a2ea20;
void func_00a2ea20()
{
    G1_func_00a2ea20.m();
}
