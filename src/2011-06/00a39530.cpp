// roc 2011-06 00a39530  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39530
//
// 00a39530  b9b8abcc00           mov ecx, 0xccabb8
// 00a39535  e9863ba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39530 { void m(); };
extern T_func_00a39530 G1_func_00a39530;
void func_00a39530()
{
    G1_func_00a39530.m();
}
