// roc 2011-06 00a39c30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c30
//
// 00a39c30  b930becc00           mov ecx, 0xccbe30
// 00a39c35  e98634a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39c30 { void m(); };
extern T_func_00a39c30 G1_func_00a39c30;
void func_00a39c30()
{
    G1_func_00a39c30.m();
}
