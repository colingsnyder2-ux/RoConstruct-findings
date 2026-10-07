// roc 2008-06 007fd060  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd060
//
// 007fd060  b920499700           mov ecx, 0x974920
// 007fd065  e956dbc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd060 { void m(); };
extern T_func_007fd060 G1_func_007fd060;
void func_007fd060()
{
    G1_func_007fd060.m();
}
