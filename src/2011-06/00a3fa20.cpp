// roc 2011-06 00a3fa20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fa20
//
// 00a3fa20  b95870d100           mov ecx, 0xd17058
// 00a3fa25  e9b632dcff           jmp 0x802ce0
// auto-matched from its assembly shape

struct T_func_00a3fa20 { void m(); };
extern T_func_00a3fa20 G1_func_00a3fa20;
void func_00a3fa20()
{
    G1_func_00a3fa20.m();
}
