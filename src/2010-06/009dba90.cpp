// roc 2010-06 009dba90  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dba90
//
// 009dba90  b99818c000           mov ecx, 0xc01898
// 009dba95  e9d64ba7ff           jmp 0x450670
// auto-matched from its assembly shape

struct T_func_009dba90 { void m(); };
extern T_func_009dba90 G1_func_009dba90;
void func_009dba90()
{
    G1_func_009dba90.m();
}
