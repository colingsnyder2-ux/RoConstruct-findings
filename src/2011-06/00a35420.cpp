// roc 2011-06 00a35420  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35420
//
// 00a35420  b9d8cdcb00           mov ecx, 0xcbcdd8
// 00a35425  e9967ca7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35420 { void m(); };
extern T_func_00a35420 G1_func_00a35420;
void func_00a35420()
{
    G1_func_00a35420.m();
}
