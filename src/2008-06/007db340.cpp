// roc 2008-06 007db340  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db340
//
// 007db340  b928d89700           mov ecx, 0x97d828
// 007db345  e906e6c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db340 { void m(); };
extern T_func_007db340 G1_func_007db340;
void func_007db340()
{
    G1_func_007db340.m();
}
