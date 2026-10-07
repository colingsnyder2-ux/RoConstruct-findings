// roc 2011-06 00a3fd30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd30
//
// 00a3fd30  b91092d100           mov ecx, 0xd19210
// 00a3fd35  e9b61de9ff           jmp 0x8d1af0
// auto-matched from its assembly shape

struct T_func_00a3fd30 { void m(); };
extern T_func_00a3fd30 G1_func_00a3fd30;
void func_00a3fd30()
{
    G1_func_00a3fd30.m();
}
