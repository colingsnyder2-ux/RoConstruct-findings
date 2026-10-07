// roc 2011-06 00a39a40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a40
//
// 00a39a40  b930b8cc00           mov ecx, 0xccb830
// 00a39a45  e9066cc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a39a40 { void m(); };
extern T_func_00a39a40 G1_func_00a39a40;
void func_00a39a40()
{
    G1_func_00a39a40.m();
}
