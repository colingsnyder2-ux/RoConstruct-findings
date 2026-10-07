// roc 2011-06 00a2ea80  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea80
//
// 00a2ea80  b9405dcd00           mov ecx, 0xcd5d40
// 00a2ea85  e996d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea80 { void m(); };
extern T_func_00a2ea80 G1_func_00a2ea80;
void func_00a2ea80()
{
    G1_func_00a2ea80.m();
}
