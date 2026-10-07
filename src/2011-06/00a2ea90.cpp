// roc 2011-06 00a2ea90  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea90
//
// 00a2ea90  b9425dcd00           mov ecx, 0xcd5d42
// 00a2ea95  e986d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea90 { void m(); };
extern T_func_00a2ea90 G1_func_00a2ea90;
void func_00a2ea90()
{
    G1_func_00a2ea90.m();
}
