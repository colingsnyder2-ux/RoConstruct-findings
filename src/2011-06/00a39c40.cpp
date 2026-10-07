// roc 2011-06 00a39c40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c40
//
// 00a39c40  b908bdcc00           mov ecx, 0xccbd08
// 00a39c45  e97634a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39c40 { void m(); };
extern T_func_00a39c40 G1_func_00a39c40;
void func_00a39c40()
{
    G1_func_00a39c40.m();
}
