// roc 2011-06 00a2ea10  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea10
//
// 00a2ea10  b9415dcd00           mov ecx, 0xcd5d41
// 00a2ea15  e906d79fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea10 { void m(); };
extern T_func_00a2ea10 G1_func_00a2ea10;
void func_00a2ea10()
{
    G1_func_00a2ea10.m();
}
