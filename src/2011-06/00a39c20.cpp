// roc 2011-06 00a39c20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c20
//
// 00a39c20  b940bdcc00           mov ecx, 0xccbd40
// 00a39c25  e9e628a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39c20 { void m(); };
extern T_func_00a39c20 G1_func_00a39c20;
void func_00a39c20()
{
    G1_func_00a39c20.m();
}
