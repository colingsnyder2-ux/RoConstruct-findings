// roc 2008-06 00801930  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801930
//
// 00801930  b938f29700           mov ecx, 0x97f238
// 00801935  e9b6ebf8ff           jmp 0x7904f0
// auto-matched from its assembly shape

struct T_func_00801930 { void m(); };
extern T_func_00801930 G1_func_00801930;
void func_00801930()
{
    G1_func_00801930.m();
}
