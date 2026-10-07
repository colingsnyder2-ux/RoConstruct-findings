// roc 2011-06 00a3b830  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b830
//
// 00a3b830  b9e8ebcc00           mov ecx, 0xccebe8
// 00a3b835  e9d60ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b830 { void m(); };
extern T_func_00a3b830 G1_func_00a3b830;
void func_00a3b830()
{
    G1_func_00a3b830.m();
}
