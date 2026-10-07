// roc 2011-06 00a3b740  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b740
//
// 00a3b740  b9b8ebcc00           mov ecx, 0xccebb8
// 00a3b745  e9c60da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b740 { void m(); };
extern T_func_00a3b740 G1_func_00a3b740;
void func_00a3b740()
{
    G1_func_00a3b740.m();
}
