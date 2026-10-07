// roc 2011-06 00a39a80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a80
//
// 00a39a80  b968bbcc00           mov ecx, 0xccbb68
// 00a39a85  e9862aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a80 { void m(); };
extern T_func_00a39a80 G1_func_00a39a80;
void func_00a39a80()
{
    G1_func_00a39a80.m();
}
