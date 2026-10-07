// roc 2011-06 00a2ea30  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea30
//
// 00a2ea30  b9465dcd00           mov ecx, 0xcd5d46
// 00a2ea35  e9e6d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea30 { void m(); };
extern T_func_00a2ea30 G1_func_00a2ea30;
void func_00a2ea30()
{
    G1_func_00a2ea30.m();
}
