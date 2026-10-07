// roc 2011-06 00a39550  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39550
//
// 00a39550  b940abcc00           mov ecx, 0xccab40
// 00a39555  e9b62fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39550 { void m(); };
extern T_func_00a39550 G1_func_00a39550;
void func_00a39550()
{
    G1_func_00a39550.m();
}
