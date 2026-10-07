// roc 2011-06 00a3b820  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b820
//
// 00a3b820  b978ebcc00           mov ecx, 0xcceb78
// 00a3b825  e9264ec4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b820 { void m(); };
extern T_func_00a3b820 G1_func_00a3b820;
void func_00a3b820()
{
    G1_func_00a3b820.m();
}
