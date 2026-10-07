// roc 2011-06 00a39c00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c00
//
// 00a39c00  b9a8bccc00           mov ecx, 0xccbca8
// 00a39c05  e9b634a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39c00 { void m(); };
extern T_func_00a39c00 G1_func_00a39c00;
void func_00a39c00()
{
    G1_func_00a39c00.m();
}
